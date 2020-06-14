# DCMotorControlGui-Cpp-CLI-
Control DC Motor by using Cpp/CLI GUI and Arduino
---------------------------------------------------------
Author: Pham Hieu
Email: hieu.phamnt39@gmail.com
----------------------------------------------------------
SETUP:
This program was developed on Visual Studio 2019 Community.
In C++/CLR case, it's running on.NET4, you may need to install the related tool on Visual Studio.
Visual Studio 2019: https://visualstudio.microsoft.com/
Arduino IDE: https://www.arduino.cc/en/Main/Software
To get the C++/CLR Windows Forms, visit here: https://marketplace.visualstudio.com/items?itemName=RichardKaiser.CppWinformsVS2019VSIX001

Arduino and Circuit:
- Hardware: Arduino Uno R3, 12V DC Motor, 12V-2A Adapter
I'm using Arduino IDE 1.8.10.
You need to connect follow the below:
Encoder C1 pin (if available) - 2
Encoder C2 pin (if available) - 3
Driver Chanel 1 - 9
Driver Chanel 2 - 10
Don't forget to connect the ground
----------------------------------------------------------
USAGE and DEV:
- Clone this repo and go to MotorControlCLI folder, open MotorControl.sln with Visual Studio
Click Local Windows Debugger to run this GUI. (It maybe has a quite different from your Visual Studio version)
- Connect the Arduino. In default, the Arduino open the Serial Port with 38400, you must choose this Baudrate on the GUI
- To get the COM port, Go to Device Manager -> Port(COM & LPT). You will see something like Arduino Uno (COM5)
----------------------------------------------------------
Feel free to report the issues, I will fix it as soon as possible :) 
