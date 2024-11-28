#pragma once

namespace cafeteria_project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentForm
	/// </summary>
	public ref class StudentForm : public System::Windows::Forms::Form
	{
	public:
		StudentForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ DataTextbox;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ ConfirmBtn;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ NameLable;




	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ PhotoImage;

	private: System::Windows::Forms::Label^ InfoLable;
	private: System::Windows::Forms::Label^ GroupLable;



	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel14;

	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel16;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->PhotoImage = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->InfoLable = (gcnew System::Windows::Forms::Label());
			this->GroupLable = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NameLable = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->ConfirmBtn = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DataTextbox = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PhotoImage))->BeginInit();
			this->panel12->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(180, 567);
			this->panel1->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Location = System::Drawing::Point(1, 148);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(179, 417);
			this->panel3->TabIndex = 1;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(20, 20);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(34, 32);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Location = System::Drawing::Point(0, 18);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Log out";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(180, 148);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Location = System::Drawing::Point(57, 116);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name/ID";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(47, 22);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(87, 84);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panel9);
			this->panel4->Controls->Add(this->panel7);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(180, 0);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(632, 568);
			this->panel4->TabIndex = 2;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Silver;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label12);
			this->panel9->Controls->Add(this->label11);
			this->panel9->Controls->Add(this->panel10);
			this->panel9->Location = System::Drawing::Point(347, 22);
			this->panel9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(241, 176);
			this->panel9->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(36, 94);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 20);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Info";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(23, 64);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 25);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Info";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->panel10->Controls->Add(this->label10);
			this->panel10->Location = System::Drawing::Point(-1, -1);
			this->panel10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(266, 51);
			this->panel10->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(59, 8);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(137, 32);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Something";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->PhotoImage);
			this->panel7->Controls->Add(this->label6);
			this->panel7->Controls->Add(this->panel12);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Location = System::Drawing::Point(45, 234);
			this->panel7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(547, 294);
			this->panel7->TabIndex = 4;
			// 
			// PhotoImage
			// 
			this->PhotoImage->Location = System::Drawing::Point(75, 110);
			this->PhotoImage->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->PhotoImage->Name = L"PhotoImage";
			this->PhotoImage->Size = System::Drawing::Size(120, 130);
			this->PhotoImage->TabIndex = 10;
			this->PhotoImage->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(105, 69);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Photo";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Silver;
			this->panel12->Controls->Add(this->panel16);
			this->panel12->Controls->Add(this->panel15);
			this->panel12->Controls->Add(this->panel13);
			this->panel12->Controls->Add(this->panel14);
			this->panel12->Controls->Add(this->panel11);
			this->panel12->Controls->Add(this->InfoLable);
			this->panel12->Controls->Add(this->GroupLable);
			this->panel12->Controls->Add(this->label5);
			this->panel12->Controls->Add(this->label4);
			this->panel12->Controls->Add(this->NameLable);
			this->panel12->Controls->Add(this->label7);
			this->panel12->Location = System::Drawing::Point(263, 50);
			this->panel12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(282, 242);
			this->panel12->TabIndex = 8;
			this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StudentForm::panel12_Paint);
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->panel16->Location = System::Drawing::Point(1, 0);
			this->panel16->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(3, 242);
			this->panel16->TabIndex = 14;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->panel15->Location = System::Drawing::Point(21, 183);
			this->panel15->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(221, 1);
			this->panel15->TabIndex = 13;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->panel13->Location = System::Drawing::Point(21, 127);
			this->panel13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(221, 1);
			this->panel13->TabIndex = 12;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->panel14->Location = System::Drawing::Point(21, 73);
			this->panel14->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(221, 1);
			this->panel14->TabIndex = 11;
			// 
			// panel11
			// 
			this->panel11->Location = System::Drawing::Point(4, 70);
			this->panel11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(0, 0);
			this->panel11->TabIndex = 9;
			// 
			// InfoLable
			// 
			this->InfoLable->AutoSize = true;
			this->InfoLable->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11));
			this->InfoLable->Location = System::Drawing::Point(32, 159);
			this->InfoLable->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->InfoLable->Name = L"InfoLable";
			this->InfoLable->Size = System::Drawing::Size(35, 20);
			this->InfoLable->TabIndex = 8;
			this->InfoLable->Text = L"Info";
			// 
			// GroupLable
			// 
			this->GroupLable->AutoSize = true;
			this->GroupLable->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11));
			this->GroupLable->Location = System::Drawing::Point(32, 103);
			this->GroupLable->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->GroupLable->Name = L"GroupLable";
			this->GroupLable->Size = System::Drawing::Size(35, 20);
			this->GroupLable->TabIndex = 7;
			this->GroupLable->Text = L"TAC";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 131);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 25);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Info";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(21, 21);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Name";
			// 
			// NameLable
			// 
			this->NameLable->AutoSize = true;
			this->NameLable->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11));
			this->NameLable->Location = System::Drawing::Point(32, 49);
			this->NameLable->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NameLable->Name = L"NameLable";
			this->NameLable->Size = System::Drawing::Size(47, 20);
			this->NameLable->TabIndex = 6;
			this->NameLable->Text = L"Josias";
			this->NameLable->Click += gcnew System::EventHandler(this, &StudentForm::NameHeader_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(21, 76);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 25);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Group";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->panel8->Controls->Add(this->label3);
			this->panel8->Location = System::Drawing::Point(-1, -1);
			this->panel8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(546, 51);
			this->panel8->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(237, 10);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 32);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Info";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->ConfirmBtn);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->DataTextbox);
			this->panel5->Location = System::Drawing::Point(45, 22);
			this->panel5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(267, 176);
			this->panel5->TabIndex = 2;
			// 
			// ConfirmBtn
			// 
			this->ConfirmBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->ConfirmBtn->FlatAppearance->BorderSize = 0;
			this->ConfirmBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConfirmBtn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->ConfirmBtn->ForeColor = System::Drawing::Color::White;
			this->ConfirmBtn->Location = System::Drawing::Point(54, 125);
			this->ConfirmBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ConfirmBtn->Name = L"ConfirmBtn";
			this->ConfirmBtn->Size = System::Drawing::Size(153, 35);
			this->ConfirmBtn->TabIndex = 3;
			this->ConfirmBtn->Text = L"Confirm";
			this->ConfirmBtn->UseVisualStyleBackColor = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->panel6->Controls->Add(this->label2);
			this->panel6->Location = System::Drawing::Point(-1, -1);
			this->panel6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(266, 51);
			this->panel6->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(71, 8);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 32);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Enter data";
			this->label2->Click += gcnew System::EventHandler(this, &StudentForm::label2_Click);
			// 
			// DataTextbox
			// 
			this->DataTextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DataTextbox->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DataTextbox->Location = System::Drawing::Point(29, 64);
			this->DataTextbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->DataTextbox->Multiline = true;
			this->DataTextbox->Name = L"DataTextbox";
			this->DataTextbox->Size = System::Drawing::Size(200, 44);
			this->DataTextbox->TabIndex = 1;
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(809, 567);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"StudentForm";
			this->Text = L"StudentForm";
			this->Load += gcnew System::EventHandler(this, &StudentForm::StudentForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PhotoImage))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void StudentForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void NameHeader_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void panel12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
