/*#pragma once

namespace CafeteriaProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelSelectGroup;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ labelFullName;
	private: System::Windows::Forms::Label^ labelSelectGender;


	private: System::Windows::Forms::ComboBox^ cbGroupSelect;
	private: System::Windows::Forms::ComboBox^ cbGenderSelect;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelFullName = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->labelSelectGroup = (gcnew System::Windows::Forms::Label());
			this->cbGroupSelect = (gcnew System::Windows::Forms::ComboBox());
			this->labelSelectGender = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cbGenderSelect = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->cbGenderSelect);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->labelSelectGender);
			this->panel1->Controls->Add(this->cbGroupSelect);
			this->panel1->Controls->Add(this->labelSelectGroup);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->labelFullName);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 818);
			this->panel1->TabIndex = 0;
			// 
			// labelFullName
			// 
			this->labelFullName->AutoSize = true;
			this->labelFullName->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->labelFullName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->labelFullName->Location = System::Drawing::Point(137, 196);
			this->labelFullName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelFullName->Name = L"labelFullName";
			this->labelFullName->Size = System::Drawing::Size(129, 32);
			this->labelFullName->TabIndex = 0;
			this->labelFullName->Text = L"Full Name";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(125, 231);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(350, 34);
			this->textBox1->TabIndex = 1;
			// 
			// labelSelectGroup
			// 
			this->labelSelectGroup->AutoSize = true;
			this->labelSelectGroup->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->labelSelectGroup->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->labelSelectGroup->Location = System::Drawing::Point(137, 311);
			this->labelSelectGroup->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSelectGroup->Name = L"labelSelectGroup";
			this->labelSelectGroup->Size = System::Drawing::Size(160, 32);
			this->labelSelectGroup->TabIndex = 2;
			this->labelSelectGroup->Text = L"Select Group";
			this->labelSelectGroup->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// cbGroupSelect
			// 
			this->cbGroupSelect->FormattingEnabled = true;
			this->cbGroupSelect->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"TAC", L"TAIS", L"TAA", L"Stuff" });
			this->cbGroupSelect->Location = System::Drawing::Point(125, 346);
			this->cbGroupSelect->Name = L"cbGroupSelect";
			this->cbGroupSelect->Size = System::Drawing::Size(350, 36);
			this->cbGroupSelect->TabIndex = 3;
			// 
			// labelSelectGender
			// 
			this->labelSelectGender->AutoSize = true;
			this->labelSelectGender->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->labelSelectGender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->labelSelectGender->Location = System::Drawing::Point(137, 428);
			this->labelSelectGender->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSelectGender->Name = L"labelSelectGender";
			this->labelSelectGender->Size = System::Drawing::Size(171, 32);
			this->labelSelectGender->TabIndex = 4;
			this->labelSelectGender->Text = L"Select Gender";
			this->labelSelectGender->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->label4->Location = System::Drawing::Point(137, 545);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 32);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Account";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// cbGenderSelect
			// 
			this->cbGenderSelect->FormattingEnabled = true;
			this->cbGenderSelect->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cbGenderSelect->Location = System::Drawing::Point(125, 463);
			this->cbGenderSelect->Name = L"cbGenderSelect";
			this->cbGenderSelect->Size = System::Drawing::Size(350, 36);
			this->cbGenderSelect->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(125, 580);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(350, 34);
			this->textBox2->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->Location = System::Drawing::Point(188, 704);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(228, 62);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->label1->Location = System::Drawing::Point(191, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(299, 48);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Add New Person";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(600, 150);
			this->panel2->TabIndex = 10;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(106, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 67);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Green;
			this->label2->Location = System::Drawing::Point(262, 643);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 30);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Status";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 818);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"Add Person";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
*/