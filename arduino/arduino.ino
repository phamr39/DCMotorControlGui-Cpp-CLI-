#include <string.h>
// Define Encoder pin (if using)
#define er1 2 // Must use <= interrupt int0 and int1
#define er2 3
unsigned long timer = 0;
double deltaT = 20000;   // us    minimum of 500 us, but set >1000us to be safe
int set_speed = 0;
bool g_isStart = false;
bool g_direct = false;
bool g_led = false;
double g_Kp = 0.0,g_Ki=0.0,g_Kd = 0.0;
double g_desiredBackEMF = 0;
int motorPin = 9;
int motorPin1 = 10;
void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(13, OUTPUT);
  setPwmFrequency(motorPin, 1); // set pin 9's frequency to (31250 / 1) = 31250 Hz
  setPwmFrequency(motorPin1, 1); // set pin 10's frequency to (31250 / 1) = 31250 Hz
  Serial.begin(38400);
  timer = micros();
  attachInterrupt(digitalPinToInterrupt(2), ReadEncoder, RISING);
  attachInterrupt(digitalPinToInterrupt(3), ReadEncoder, RISING);
}

void loop() {
  timeSync(deltaT);

  int V1 = analogRead(1);
  int V2 = analogRead(2);
  double current = (V1 - V2 )/ 1023.0 * 5.0 / 0.5;
  double backEMF = (V2 / 1023.0 * 5.0) - (current * 0.832794);
  double error = g_desiredBackEMF - backEMF;

  float M = 0.014887;
  float C = 0.893410;
  float gamma = 9.803448;
  float alpha = 5.359968;

  //int motorCmd = int(g_Kp * error + 70.0);
  
  int motorCmd = int((g_Kp * error / M)
                   + (alpha / (gamma * M) * g_desiredBackEMF)
                   + (g_desiredBackEMF / M)
                   - (C / M));
                   
  motorCmd = min(max(motorCmd, 0), 255);
  
  double data1 = g_desiredBackEMF;
  double data2 = backEMF;
  double data3 = error;
  //sendToPC(&data1, &data2, &data3);
  
  getSerialData();

  if (!g_isStart)
  {
    motorCmd = 0;
  }
  if(g_direct == true)
  {
    analogWrite(motorPin, motorCmd);
    digitalWrite(motorPin1,0);
  }
  else
  {
    analogWrite(motorPin1, motorCmd);
    digitalWrite(motorPin,0);
  }
  
  
}

void timeSync(unsigned long deltaT)
{
  unsigned long currTime = micros();
  long timeToDelay = deltaT - (currTime - timer);
  if (timeToDelay > 5000)
  {
    delay(timeToDelay / 1000);
    delayMicroseconds(timeToDelay % 1000);
  }
  else if (timeToDelay > 0)
  {
    delayMicroseconds(timeToDelay);
  }
  else
  {
      // timeToDelay is negative so we start immediately
  }
  timer = currTime + timeToDelay;
}

void sendToPC(int* data1, int* data2, int* data3)
{
  byte* byteData1 = (byte*)(data1);
  byte* byteData2 = (byte*)(data2);
  byte* byteData3 = (byte*)(data3);
  byte buf[6] = {byteData1[0], byteData1[1],
                 byteData2[0], byteData2[1],
                 byteData3[0], byteData3[1]};
  Serial.write(buf, 6);
}

void sendToPC(double* data1, double* data2, double* data3)
{
  byte* byteData1 = (byte*)(data1);
  byte* byteData2 = (byte*)(data2);
  byte* byteData3 = (byte*)(data3);
  byte buf[12] = {byteData1[0], byteData1[1], byteData1[2], byteData1[3],
                 byteData2[0], byteData2[1], byteData2[2], byteData2[3],
                 byteData3[0], byteData3[1], byteData3[2], byteData3[3]};
  Serial.write(buf, 12);
}
void getSerialData()
{
  while (Serial.available())
  {
    char input = Serial.read();
    String tmp = "";
    switch(input)
    {
      case 'P':
        tmp = getVal();
        if (tmp != "X")
        {
          g_Kp = tmp.toFloat();
        }
        break;
       case 'K':
        tmp = getVal();
        if (tmp != "X")
        {
          g_Ki = tmp.toFloat();
        }
        break;
       case 'D':
        tmp = getVal();
        if (tmp != "X")
        {
          g_Kd = tmp.toFloat();
        }
        break;
      case 'S':
        tmp = getVal();
        set_speed = tmp.toInt();
        if (tmp != "X")
        {
          g_desiredBackEMF = tmp.toInt()/ 1700.0 * 11.0; // 0<tmp<255    0<backEMF<1.65
        }
        break;
      case 'R':
        startStopMotor();
        break;
      case 'I':
        InverseMotor();
        break;
      case 'L':
        LEDTest();
      default:
        break;
    }
  }
}

String getVal()
{
  String recvString = "";
  while (Serial.available())
  {
    char input = Serial.read();
    if (input == '%')   // this is the end of message marker so that the program knows when to update the g_scaleFactor variable 
    {
      return recvString;
    }
    recvString += input;
  }

  return "X";   // failed to receive the EOM marker
}

void startStopMotor()
{
  g_isStart = !g_isStart;
}

void InverseMotor()
{
  g_direct = !g_direct;
}

void LEDTest()
{
  g_led = !g_led;
  if (g_led == true) digitalWrite(13,HIGH);
  else digitalWrite(13,LOW);
  Serial.write(1);
  }
void setPwmFrequency(int pin, int divisor)
{
    byte mode;
    if (pin == 5 || pin == 6 || pin == 9 || pin == 10)
    {
        switch(divisor)
        {
        case 1: mode = 0x01; break;
        case 8: mode = 0x02; break;
        case 64: mode = 0x03; break;
        case 256: mode = 0x04; break;
        case 1024: mode = 0x05; break;
        default: return;
        }

        if (pin == 5 || pin == 6)
        {
            TCCR0B = TCCR0B & 0b11111000 | mode;
        }
        else
        {
            TCCR1B = TCCR1B & 0b11111000 | mode;
        }
    }
    else if (pin == 3 || pin == 11)
    {
        switch(divisor)
        {
        case 1: mode = 0x01; break;
        case 8: mode = 0x02; break;
        case 32: mode = 0x03; break;
        case 64: mode = 0x04; break;
        case 128: mode = 0x05; break;
        case 256: mode = 0x06; break;
        case 1024: mode = 0x07; break;
        default: return;
        }
        TCCR2B = TCCR2B & 0b11111000 | mode;
    }
}
// PID function
float phi_d = 0, phi = 0, e = 0, w = 0, vr = 0, vl = 0, Dl = 0, Dr = 0, Dc = 0, x = 0, y = 0, xg = 0, yg = 0, P = 0, I = 0, D = 0;
int delta_tickl = 0, delta_tickr = 0, pr = 0, pr_old = 0, pl = 0, pl_old = 0, N = 100, time = 0;
const float Pi = 3.14;
float PID(float e) {
  float w;
  float kp = g_Kp, kd = g_Ki, ki = g_Kd;
  float e_old;
  P = kp * e;
  I += ki * e;
  D = kd * (e - e_old);
  w = P + I + D;
  e_old = e;
  return w;
}

//Read Encoder 
void ReadEncoder()
{
  if (digitalRead(er2))
    pr++;
  if (digitalRead(er1))
    pr--;
}
