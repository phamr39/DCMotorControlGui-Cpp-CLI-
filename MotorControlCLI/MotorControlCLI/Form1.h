#pragma once
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ CBBaudrate;




	private: System::Windows::Forms::ComboBox^ CBPort;
	private: System::Windows::Forms::Label^ port;




	private: System::Windows::Forms::Button^ close_port;
	private: System::Windows::Forms::Button^ init_port;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ decrease_spd;

	private: System::Windows::Forms::Button^ increase_spd;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ setspd;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ ccw;

	private: System::Windows::Forms::Button^ cw;







	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ feedback_type;
	private: System::Windows::Forms::TrackBar^ ptune;
	private: System::Windows::Forms::CheckBox^ d_enable;



	private: System::Windows::Forms::CheckBox^ i_enable;

	private: System::Windows::Forms::CheckBox^ p_enable;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ setD;

	private: System::Windows::Forms::Button^ setI;

	private: System::Windows::Forms::Button^ setP;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TrackBar^ dtune;

	private: System::Windows::Forms::TrackBar^ itune;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newConfigToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ windowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Button^ led_on;






	protected:




	protected:




	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->led_on = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->close_port = (gcnew System::Windows::Forms::Button());
			this->init_port = (gcnew System::Windows::Forms::Button());
			this->CBPort = (gcnew System::Windows::Forms::ComboBox());
			this->port = (gcnew System::Windows::Forms::Label());
			this->CBBaudrate = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->ccw = (gcnew System::Windows::Forms::Button());
			this->cw = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->decrease_spd = (gcnew System::Windows::Forms::Button());
			this->increase_spd = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->setspd = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->setD = (gcnew System::Windows::Forms::Button());
			this->setI = (gcnew System::Windows::Forms::Button());
			this->setP = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dtune = (gcnew System::Windows::Forms::TrackBar());
			this->itune = (gcnew System::Windows::Forms::TrackBar());
			this->ptune = (gcnew System::Windows::Forms::TrackBar());
			this->d_enable = (gcnew System::Windows::Forms::CheckBox());
			this->i_enable = (gcnew System::Windows::Forms::CheckBox());
			this->p_enable = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->feedback_type = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newConfigToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->windowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtune))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itune))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptune))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// serialPort1
			// 
			this->serialPort1->BaudRate = 38400;
			this->serialPort1->PortName = L"COM5";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->led_on);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->close_port);
			this->groupBox1->Controls->Add(this->init_port);
			this->groupBox1->Controls->Add(this->CBPort);
			this->groupBox1->Controls->Add(this->port);
			this->groupBox1->Controls->Add(this->CBBaudrate);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(15, 68);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(234, 268);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Serial Status";
			// 
			// led_on
			// 
			this->led_on->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->led_on->Location = System::Drawing::Point(6, 211);
			this->led_on->Name = L"led_on";
			this->led_on->Size = System::Drawing::Size(96, 44);
			this->led_on->TabIndex = 17;
			this->led_on->Text = L"Turn Led On/Off";
			this->led_on->UseVisualStyleBackColor = true;
			this->led_on->Click += gcnew System::EventHandler(this, &Form1::led_on_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(151, 205);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(29, 27);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(133, 241);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"LED Status";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"LED Test";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// close_port
			// 
			this->close_port->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close_port->Location = System::Drawing::Point(122, 124);
			this->close_port->Name = L"close_port";
			this->close_port->Size = System::Drawing::Size(96, 49);
			this->close_port->TabIndex = 8;
			this->close_port->Text = L"Close Port";
			this->close_port->UseVisualStyleBackColor = true;
			this->close_port->Click += gcnew System::EventHandler(this, &Form1::close_port_Click);
			// 
			// init_port
			// 
			this->init_port->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->init_port->Location = System::Drawing::Point(9, 124);
			this->init_port->Name = L"init_port";
			this->init_port->Size = System::Drawing::Size(96, 49);
			this->init_port->TabIndex = 7;
			this->init_port->Text = L"Init Port";
			this->init_port->UseVisualStyleBackColor = true;
			this->init_port->Click += gcnew System::EventHandler(this, &Form1::init_port_Click);
			// 
			// CBPort
			// 
			this->CBPort->FormattingEnabled = true;
			this->CBPort->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"COM5", L"COM6", L"COM7", L"COM4", L"COM3", L"COM2",
					L"COM1", L"COM8"
			});
			this->CBPort->Location = System::Drawing::Point(95, 27);
			this->CBPort->Name = L"CBPort";
			this->CBPort->Size = System::Drawing::Size(112, 21);
			this->CBPort->TabIndex = 6;
			this->CBPort->Text = L"Select Port";
			// 
			// port
			// 
			this->port->AutoSize = true;
			this->port->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->port->Location = System::Drawing::Point(6, 27);
			this->port->Name = L"port";
			this->port->Size = System::Drawing::Size(32, 16);
			this->port->TabIndex = 5;
			this->port->Text = L"Port";
			// 
			// CBBaudrate
			// 
			this->CBBaudrate->FormattingEnabled = true;
			this->CBBaudrate->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"9600", L"14400", L"19200", L"28800", L"38400",
					L"57600", L"115200"
			});
			this->CBBaudrate->Location = System::Drawing::Point(95, 54);
			this->CBBaudrate->Name = L"CBBaudrate";
			this->CBBaudrate->Size = System::Drawing::Size(112, 21);
			this->CBBaudrate->TabIndex = 3;
			this->CBBaudrate->Text = L"Select Baud";
			this->CBBaudrate->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Baud Rate";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(95, 81);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(112, 27);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Port Status";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_3);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(571, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(234, 20);
			this->dateTimePicker1->TabIndex = 12;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->ccw);
			this->groupBox2->Controls->Add(this->cw);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->decrease_spd);
			this->groupBox2->Controls->Add(this->increase_spd);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Controls->Add(this->setspd);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(272, 68);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(251, 267);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Motor Control";
			// 
			// ccw
			// 
			this->ccw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ccw->Location = System::Drawing::Point(134, 225);
			this->ccw->Name = L"ccw";
			this->ccw->Size = System::Drawing::Size(110, 30);
			this->ccw->TabIndex = 26;
			this->ccw->Text = L"Counter Clock-wise";
			this->ccw->UseVisualStyleBackColor = true;
			this->ccw->Click += gcnew System::EventHandler(this, &Form1::ccw_Click);
			// 
			// cw
			// 
			this->cw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cw->Location = System::Drawing::Point(6, 225);
			this->cw->Name = L"cw";
			this->cw->Size = System::Drawing::Size(110, 30);
			this->cw->TabIndex = 25;
			this->cw->Text = L"Clock-wise";
			this->cw->UseVisualStyleBackColor = true;
			this->cw->Click += gcnew System::EventHandler(this, &Form1::cw_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 18);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Set Direction ";
			// 
			// pictureBox3
			// 
			this->pictureBox3->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox3->ImageLocation = L"F:\\Desktopfoder\\DCMotor_PythonGUI_Arduino\\Image\\dra.jpg";
			this->pictureBox3->Location = System::Drawing::Point(95, 23);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(64, 44);
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(170, 19);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(59, 52);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Stop";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(23, 19);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(59, 52);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Start";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// decrease_spd
			// 
			this->decrease_spd->Location = System::Drawing::Point(134, 160);
			this->decrease_spd->Name = L"decrease_spd";
			this->decrease_spd->Size = System::Drawing::Size(75, 23);
			this->decrease_spd->TabIndex = 21;
			this->decrease_spd->Text = L"Decrease";
			this->decrease_spd->UseVisualStyleBackColor = true;
			this->decrease_spd->Click += gcnew System::EventHandler(this, &Form1::decrease_spd_Click);
			// 
			// increase_spd
			// 
			this->increase_spd->Location = System::Drawing::Point(30, 160);
			this->increase_spd->Name = L"increase_spd";
			this->increase_spd->Size = System::Drawing::Size(75, 23);
			this->increase_spd->TabIndex = 20;
			this->increase_spd->Text = L"Increase";
			this->increase_spd->UseVisualStyleBackColor = true;
			this->increase_spd->Click += gcnew System::EventHandler(this, &Form1::increase_spd_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(215, 124);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 16);
			this->label8->TabIndex = 19;
			this->label8->Text = L"255";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(11, 124);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"0";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(32, 121);
			this->progressBar1->Maximum = 255;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(177, 23);
			this->progressBar1->TabIndex = 16;
			// 
			// setspd
			// 
			this->setspd->Location = System::Drawing::Point(193, 79);
			this->setspd->Name = L"setspd";
			this->setspd->Size = System::Drawing::Size(36, 32);
			this->setspd->TabIndex = 15;
			this->setspd->Text = L"Set";
			this->setspd->UseVisualStyleBackColor = true;
			this->setspd->Click += gcnew System::EventHandler(this, &Form1::setspd_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(95, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(83, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 18);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Set Speed";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox4);
			this->groupBox3->Controls->Add(this->setD);
			this->groupBox3->Controls->Add(this->setI);
			this->groupBox3->Controls->Add(this->setP);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->dtune);
			this->groupBox3->Controls->Add(this->itune);
			this->groupBox3->Controls->Add(this->ptune);
			this->groupBox3->Controls->Add(this->d_enable);
			this->groupBox3->Controls->Add(this->i_enable);
			this->groupBox3->Controls->Add(this->p_enable);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->feedback_type);
			this->groupBox3->Location = System::Drawing::Point(546, 69);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(251, 267);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"PID Control Configuration";
			// 
			// pictureBox4
			// 
			this->pictureBox4->ImageLocation = L"F:\\Desktopfoder\\DCMotor_PythonGUI_Arduino\\Image\\Parallel-PID-controller-Block-Dia"
				L"gram.png";
			this->pictureBox4->Location = System::Drawing::Point(28, 194);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(207, 67);
			this->pictureBox4->TabIndex = 33;
			this->pictureBox4->TabStop = false;
			// 
			// setD
			// 
			this->setD->Location = System::Drawing::Point(205, 151);
			this->setD->Name = L"setD";
			this->setD->Size = System::Drawing::Size(40, 27);
			this->setD->TabIndex = 32;
			this->setD->Text = L"Set";
			this->setD->UseVisualStyleBackColor = true;
			this->setD->Click += gcnew System::EventHandler(this, &Form1::setD_Click);
			// 
			// setI
			// 
			this->setI->Location = System::Drawing::Point(205, 114);
			this->setI->Name = L"setI";
			this->setI->Size = System::Drawing::Size(40, 27);
			this->setI->TabIndex = 31;
			this->setI->Text = L"Set";
			this->setI->UseVisualStyleBackColor = true;
			this->setI->Click += gcnew System::EventHandler(this, &Form1::setI_Click);
			// 
			// setP
			// 
			this->setP->Location = System::Drawing::Point(205, 75);
			this->setP->Name = L"setP";
			this->setP->Size = System::Drawing::Size(40, 27);
			this->setP->TabIndex = 30;
			this->setP->Text = L"Set";
			this->setP->UseVisualStyleBackColor = true;
			this->setP->Click += gcnew System::EventHandler(this, &Form1::setP_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(153, 116);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(40, 20);
			this->textBox4->TabIndex = 29;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(153, 155);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(40, 20);
			this->textBox3->TabIndex = 28;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(153, 78);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(40, 20);
			this->textBox2->TabIndex = 27;
			// 
			// dtune
			// 
			this->dtune->Location = System::Drawing::Point(44, 155);
			this->dtune->Maximum = 100;
			this->dtune->Name = L"dtune";
			this->dtune->Size = System::Drawing::Size(105, 45);
			this->dtune->TabIndex = 13;
			this->dtune->Click += gcnew System::EventHandler(this, &Form1::dtune_Scroll);
			// 
			// itune
			// 
			this->itune->Location = System::Drawing::Point(44, 118);
			this->itune->Maximum = 1000;
			this->itune->Name = L"itune";
			this->itune->Size = System::Drawing::Size(105, 45);
			this->itune->TabIndex = 12;
			this->itune->Click += gcnew System::EventHandler(this, &Form1::itune_Scroll);
			// 
			// ptune
			// 
			this->ptune->Location = System::Drawing::Point(44, 80);
			this->ptune->Maximum = 1000;
			this->ptune->Name = L"ptune";
			this->ptune->Size = System::Drawing::Size(105, 45);
			this->ptune->TabIndex = 11;
			this->ptune->Click += gcnew System::EventHandler(this, &Form1::ptune_Scroll);
			// 
			// d_enable
			// 
			this->d_enable->AutoSize = true;
			this->d_enable->Location = System::Drawing::Point(8, 158);
			this->d_enable->Name = L"d_enable";
			this->d_enable->Size = System::Drawing::Size(34, 17);
			this->d_enable->TabIndex = 10;
			this->d_enable->Text = L"D";
			this->d_enable->UseVisualStyleBackColor = true;
			this->d_enable->CheckedChanged += gcnew System::EventHandler(this, &Form1::d_CheckedChanged);
			// 
			// i_enable
			// 
			this->i_enable->AutoSize = true;
			this->i_enable->Location = System::Drawing::Point(9, 118);
			this->i_enable->Name = L"i_enable";
			this->i_enable->Size = System::Drawing::Size(29, 17);
			this->i_enable->TabIndex = 9;
			this->i_enable->Text = L"I";
			this->i_enable->UseVisualStyleBackColor = true;
			// 
			// p_enable
			// 
			this->p_enable->AutoSize = true;
			this->p_enable->Location = System::Drawing::Point(8, 81);
			this->p_enable->Name = L"p_enable";
			this->p_enable->Size = System::Drawing::Size(33, 17);
			this->p_enable->TabIndex = 8;
			this->p_enable->Text = L"P";
			this->p_enable->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(6, 58);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 16);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Controller Type";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(6, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 16);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Feedback Type";
			// 
			// feedback_type
			// 
			this->feedback_type->FormattingEnabled = true;
			this->feedback_type->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Voltage", L"Encoder" });
			this->feedback_type->Location = System::Drawing::Point(115, 25);
			this->feedback_type->Name = L"feedback_type";
			this->feedback_type->Size = System::Drawing::Size(121, 21);
			this->feedback_type->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->viewToolStripMenuItem, this->windowToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(805, 24);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newConfigToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newConfigToolStripMenuItem
			// 
			this->newConfigToolStripMenuItem->Name = L"newConfigToolStripMenuItem";
			this->newConfigToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->newConfigToolStripMenuItem->Text = L"New Config";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->openToolStripMenuItem->Text = L"Open...";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as...";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// windowToolStripMenuItem
			// 
			this->windowToolStripMenuItem->Name = L"windowToolStripMenuItem";
			this->windowToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->windowToolStripMenuItem->Text = L"Window";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(291, 29);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(216, 24);
			this->label11->TabIndex = 17;
			this->label11->Text = L"DC Motor Control  GUI";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 347);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtune))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itune))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ptune))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ptune_Scroll(System::Object^ sender, System::EventArgs^ e) {
		float kp = 0;
		kp = ptune->Value;
		String^ str_kp = Convert::ToString(kp/100);
		textBox2->Text = str_kp;
	}
	private: System::Void itune_Scroll(System::Object^ sender, System::EventArgs^ e) {
		float ki = 0;
		ki = itune->Value;
		String^ str_ki = Convert::ToString(ki/100);
		textBox4->Text = str_ki;
	}
	private: System::Void dtune_Scroll(System::Object^ sender, System::EventArgs^ e) {
		float kd = 0;
		kd = dtune->Value;
		String^ str_kd = Convert::ToString(kd/100);
		textBox3->Text = str_kd;
	}
	private: System::Void setP_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ k;
		k = textBox2->Text;
		serialPort1->Write("P"+k+"%");
	}
	private: System::Void setI_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ k;
		k = textBox4->Text;
		serialPort1->Write("K" + k + "%");
	}
	private: System::Void setD_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ k;
		k = textBox3->Text;
		serialPort1->Write("D" + k + "%");
	}
	private: System::Void cw_Click(System::Object^ sender, System::EventArgs^ e) {
		serialPort1->Write("I");
	}
	private: System::Void ccw_Click(System::Object^ sender, System::EventArgs^ e) {
		serialPort1->Write("I");
	}
	private: System::Void decrease_spd_Click(System::Object^ sender, System::EventArgs^ e) {
		int speed = Convert::ToInt32(textBox1->Text); 
		speed--;
		serialPort1->Write("S" + speed + "%");
		progressBar1->Value = speed;
		String^ str_speed = Convert::ToString(speed);
		textBox1->Text = str_speed;
	}
	private: System::Void increase_spd_Click(System::Object^ sender, System::EventArgs^ e) {
		int speed = Convert::ToInt32(textBox1->Text);
		speed++;
		serialPort1->Write("S" + speed + "%");
		progressBar1->Value = speed;
		String^ str_speed = Convert::ToString(speed);
		textBox1->Text = str_speed;
	}
	private: System::Void setspd_Click(System::Object^ sender, System::EventArgs^ e) {
		int speed = Convert::ToInt32(textBox1->Text);
		serialPort1->Write("S" + speed + "%");
		progressBar1->Value = speed;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		serialPort1->Write("R");
		}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		serialPort1->Write("R");
	}
	private: System::Void led_on_Click(System::Object^ sender, System::EventArgs^ e) {
		serialPort1->Write("L");
		pictureBox2->ImageLocation = "F:\\Desktopfoder\\DCMotor_PythonGUI_Arduino\\Image\\ok.png";
		}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void contextMenuStrip1_Opening_1(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void d_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void init_port_Click(System::Object^ sender, System::EventArgs^ e) {
	serialPort1->Close();
	serialPort1->PortName = CBPort->SelectedItem->ToString();
	System::String^ str_port = CBBaudrate->SelectedItem->ToString();
	serialPort1->Open();
	if (str_port == L"38400")
	{
		serialPort1->BaudRate = 38400;
	}
	if (str_port == L"9600")
	{
		serialPort1->BaudRate = 9600;
	}
	if (str_port == L"115200")
	{
		serialPort1->BaudRate = 115200;
	}
	if (str_port == L"14400")
	{
		serialPort1->BaudRate = 14400;
	}
	if (str_port == L"19200")
	{
		serialPort1->BaudRate = 19200;
	}
	if (str_port == L"28800")
	{
		serialPort1->BaudRate = 28800;
	}
	if (str_port == L"57600")
	{
		serialPort1->BaudRate = 57600;
	}
	if (serialPort1->IsOpen == true)
	{
		pictureBox1->ImageLocation = "F:\\Desktopfoder\\DCMotor_PythonGUI_Arduino\\Image\\connected.png";
	}
	else
	{
		pictureBox1->ImageLocation = "F:\\Desktopfoder\\DCMotor_PythonGUI_Arduino\\Image\\disconnected-logo.png";
	}
	
}
private: System::Void close_port_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->ImageLocation = "F:\\Desktopfoder\\DCMotor_PythonGUI_Arduino\\Image\\disconnected-logo.png";
	serialPort1->Close();
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
};
}