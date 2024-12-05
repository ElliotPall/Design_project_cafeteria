#pragma once

namespace CafeteriaRecordSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScannerInterface
	/// </summary>
	public ref class ScannerInterface : public System::Windows::Forms::Form {
	public:
		ScannerInterface(void)
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
		~ScannerInterface()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: //left_panel_ declaration
		//main container
		System::Windows::Forms::Panel^ left_panel_;
		//child container
		System::Windows::Forms::Panel^ admin_info_;
		System::Windows::Forms::PictureBox^ admin_avatar_;
		System::Windows::Forms::Label^ admin_identifier_;
	private: 
		System::Windows::Forms::Panel^ content_;

		System::Windows::Forms::Label^ verifier_container_title_;
		System::Windows::Forms::TextBox^ verifier_textbox_;
		System::Windows::Forms::Panel^ verifier_container_;
		System::Windows::Forms::Panel^ verifier_container_header_;
		System::Windows::Forms::Button^ verifier_ok_button_;

		System::Windows::Forms::Panel^ status_container_;
		System::Windows::Forms::Panel^ status_container_header_;
		System::Windows::Forms::Label^ status_container_title_;

		System::Windows::Forms::Panel^ user_info_container_;
		System::Windows::Forms::Panel^ user_info_container_header_;
		System::Windows::Forms::Label^ user_info_container_title_;
		System::Windows::Forms::Panel^ user_info_;
		System::Windows::Forms::Panel^ user_info_left_border_;
		System::Windows::Forms::PictureBox^ user_photo_;
		System::Windows::Forms::Label^ user_name_;
		System::Windows::Forms::Label^ user_name_label_;
		System::Windows::Forms::Panel^ user_name_bottom_border_;
		System::Windows::Forms::Label^ user_gender_label_;
		System::Windows::Forms::Label^ user_gender_;
		System::Windows::Forms::Panel^ user_gender_bottom_border_;
		System::Windows::Forms::Label^ user_group_label_;
		System::Windows::Forms::Label^ user_group_;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ScannerInterface::typeid));
			this->left_panel_ = (gcnew System::Windows::Forms::Panel());
			this->admin_info_ = (gcnew System::Windows::Forms::Panel());
			this->admin_identifier_ = (gcnew System::Windows::Forms::Label());
			this->admin_avatar_ = (gcnew System::Windows::Forms::PictureBox());
			this->content_ = (gcnew System::Windows::Forms::Panel());
			this->status_container_ = (gcnew System::Windows::Forms::Panel());
			this->status_container_header_ = (gcnew System::Windows::Forms::Panel());
			this->status_container_title_ = (gcnew System::Windows::Forms::Label());
			this->user_info_container_ = (gcnew System::Windows::Forms::Panel());
			this->user_photo_ = (gcnew System::Windows::Forms::PictureBox());
			this->user_info_ = (gcnew System::Windows::Forms::Panel());
			this->user_info_left_border_ = (gcnew System::Windows::Forms::Panel());
			this->user_gender_bottom_border_ = (gcnew System::Windows::Forms::Panel());
			this->user_name_bottom_border_ = (gcnew System::Windows::Forms::Panel());
			this->user_group_ = (gcnew System::Windows::Forms::Label());
			this->user_gender_ = (gcnew System::Windows::Forms::Label());
			this->user_group_label_ = (gcnew System::Windows::Forms::Label());
			this->user_name_label_ = (gcnew System::Windows::Forms::Label());
			this->user_name_ = (gcnew System::Windows::Forms::Label());
			this->user_gender_label_ = (gcnew System::Windows::Forms::Label());
			this->user_info_container_header_ = (gcnew System::Windows::Forms::Panel());
			this->user_info_container_title_ = (gcnew System::Windows::Forms::Label());
			this->verifier_container_ = (gcnew System::Windows::Forms::Panel());
			this->verifier_ok_button_ = (gcnew System::Windows::Forms::Button());
			this->verifier_container_header_ = (gcnew System::Windows::Forms::Panel());
			this->verifier_container_title_ = (gcnew System::Windows::Forms::Label());
			this->verifier_textbox_ = (gcnew System::Windows::Forms::TextBox());
			this->left_panel_->SuspendLayout();
			this->admin_info_->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->admin_avatar_))->BeginInit();
			this->content_->SuspendLayout();
			this->status_container_->SuspendLayout();
			this->status_container_header_->SuspendLayout();
			this->user_info_container_->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_photo_))->BeginInit();
			this->user_info_->SuspendLayout();
			this->user_info_container_header_->SuspendLayout();
			this->verifier_container_->SuspendLayout();
			this->verifier_container_header_->SuspendLayout();
			this->SuspendLayout();
			// 
			// left_panel_
			// 
			this->left_panel_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->left_panel_->Controls->Add(this->admin_info_);
			this->left_panel_->Dock = System::Windows::Forms::DockStyle::Left;
			this->left_panel_->Location = System::Drawing::Point(0, 0);
			this->left_panel_->Margin = System::Windows::Forms::Padding(0);
			this->left_panel_->Name = L"left_panel_";
			this->left_panel_->Size = System::Drawing::Size(250, 749);
			this->left_panel_->TabIndex = 0;
			// 
			// admin_info_
			// 
			this->admin_info_->Controls->Add(this->admin_identifier_);
			this->admin_info_->Controls->Add(this->admin_avatar_);
			this->admin_info_->Location = System::Drawing::Point(0, 0);
			this->admin_info_->Margin = System::Windows::Forms::Padding(0);
			this->admin_info_->Name = L"admin_info_";
			this->admin_info_->Size = System::Drawing::Size(250, 250);
			this->admin_info_->TabIndex = 0;
			// 
			// admin_identifier_
			// 
			this->admin_identifier_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_identifier_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->admin_identifier_->Location = System::Drawing::Point(25, 170);
			this->admin_identifier_->Name = L"admin_identifier_";
			this->admin_identifier_->Size = System::Drawing::Size(200, 30);
			this->admin_identifier_->TabIndex = 1;
			this->admin_identifier_->Text = L"NAME/ID";
			this->admin_identifier_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// admin_avatar_
			// 
			this->admin_avatar_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"admin_avatar_.Image")));
			this->admin_avatar_->Location = System::Drawing::Point(65, 35);
			this->admin_avatar_->Name = L"admin_avatar_";
			this->admin_avatar_->Size = System::Drawing::Size(120, 120);
			this->admin_avatar_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->admin_avatar_->TabIndex = 0;
			this->admin_avatar_->TabStop = false;
			// 
			// content_
			// 
			this->content_->Controls->Add(this->status_container_);
			this->content_->Controls->Add(this->user_info_container_);
			this->content_->Controls->Add(this->verifier_container_);
			this->content_->Location = System::Drawing::Point(250, 0);
			this->content_->Margin = System::Windows::Forms::Padding(2);
			this->content_->Name = L"content_";
			this->content_->Size = System::Drawing::Size(850, 750);
			this->content_->TabIndex = 2;
			// 
			// status_container_
			// 
			this->status_container_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->status_container_->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->status_container_->Controls->Add(this->status_container_header_);
			this->status_container_->Location = System::Drawing::Point(450, 50);
			this->status_container_->Margin = System::Windows::Forms::Padding(0);
			this->status_container_->Name = L"status_container_";
			this->status_container_->Size = System::Drawing::Size(350, 250);
			this->status_container_->TabIndex = 4;
			// 
			// status_container_header_
			// 
			this->status_container_header_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->status_container_header_->Controls->Add(this->status_container_title_);
			this->status_container_header_->Location = System::Drawing::Point(-1, -1);
			this->status_container_header_->Margin = System::Windows::Forms::Padding(2);
			this->status_container_header_->Name = L"status_container_header_";
			this->status_container_header_->Size = System::Drawing::Size(350, 75);
			this->status_container_header_->TabIndex = 2;
			// 
			// status_container_title_
			// 
			this->status_container_title_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20, System::Drawing::FontStyle::Bold));
			this->status_container_title_->ForeColor = System::Drawing::Color::White;
			this->status_container_title_->Location = System::Drawing::Point(75, 15);
			this->status_container_title_->Margin = System::Windows::Forms::Padding(0);
			this->status_container_title_->Name = L"status_container_title_";
			this->status_container_title_->Size = System::Drawing::Size(200, 45);
			this->status_container_title_->TabIndex = 0;
			this->status_container_title_->Text = L"STATUS";
			this->status_container_title_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// user_info_container_
			// 
			this->user_info_container_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->user_info_container_->Controls->Add(this->user_photo_);
			this->user_info_container_->Controls->Add(this->user_info_);
			this->user_info_container_->Controls->Add(this->user_info_container_header_);
			this->user_info_container_->Location = System::Drawing::Point(50, 350);
			this->user_info_container_->Margin = System::Windows::Forms::Padding(0);
			this->user_info_container_->Name = L"user_info_container_";
			this->user_info_container_->Size = System::Drawing::Size(750, 350);
			this->user_info_container_->TabIndex = 4;
			// 
			// user_photo_
			// 
			this->user_photo_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"user_photo_.Image")));
			this->user_photo_->Location = System::Drawing::Point(75, 100);
			this->user_photo_->Margin = System::Windows::Forms::Padding(0);
			this->user_photo_->Name = L"user_photo_";
			this->user_photo_->Size = System::Drawing::Size(225, 225);
			this->user_photo_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->user_photo_->TabIndex = 10;
			this->user_photo_->TabStop = false;
			// 
			// user_info_
			// 
			this->user_info_->BackColor = System::Drawing::Color::Silver;
			this->user_info_->Controls->Add(this->user_info_left_border_);
			this->user_info_->Controls->Add(this->user_gender_bottom_border_);
			this->user_info_->Controls->Add(this->user_name_bottom_border_);
			this->user_info_->Controls->Add(this->user_group_);
			this->user_info_->Controls->Add(this->user_gender_);
			this->user_info_->Controls->Add(this->user_group_label_);
			this->user_info_->Controls->Add(this->user_name_label_);
			this->user_info_->Controls->Add(this->user_name_);
			this->user_info_->Controls->Add(this->user_gender_label_);
			this->user_info_->Location = System::Drawing::Point(375, 75);
			this->user_info_->Margin = System::Windows::Forms::Padding(2);
			this->user_info_->Name = L"user_info_";
			this->user_info_->Size = System::Drawing::Size(375, 275);
			this->user_info_->TabIndex = 8;
			// 
			// user_info_left_border_
			// 
			this->user_info_left_border_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->user_info_left_border_->Location = System::Drawing::Point(0, 0);
			this->user_info_left_border_->Margin = System::Windows::Forms::Padding(0);
			this->user_info_left_border_->Name = L"user_info_left_border_";
			this->user_info_left_border_->Size = System::Drawing::Size(5, 275);
			this->user_info_left_border_->TabIndex = 14;
			// 
			// user_gender_bottom_border_
			// 
			this->user_gender_bottom_border_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->user_gender_bottom_border_->Location = System::Drawing::Point(40, 175);
			this->user_gender_bottom_border_->Margin = System::Windows::Forms::Padding(0);
			this->user_gender_bottom_border_->Name = L"user_gender_bottom_border_";
			this->user_gender_bottom_border_->Size = System::Drawing::Size(300, 5);
			this->user_gender_bottom_border_->TabIndex = 12;
			// 
			// user_name_bottom_border_
			// 
			this->user_name_bottom_border_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->user_name_bottom_border_->Location = System::Drawing::Point(40, 95);
			this->user_name_bottom_border_->Margin = System::Windows::Forms::Padding(0);
			this->user_name_bottom_border_->Name = L"user_name_bottom_border_";
			this->user_name_bottom_border_->Size = System::Drawing::Size(300, 5);
			this->user_name_bottom_border_->TabIndex = 11;
			// 
			// user_group_
			// 
			this->user_group_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15));
			this->user_group_->Location = System::Drawing::Point(40, 220);
			this->user_group_->Margin = System::Windows::Forms::Padding(0);
			this->user_group_->Name = L"user_group_";
			this->user_group_->Size = System::Drawing::Size(300, 30);
			this->user_group_->TabIndex = 8;
			this->user_group_->Text = L"TAC";
			this->user_group_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// user_gender_
			// 
			this->user_gender_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15));
			this->user_gender_->Location = System::Drawing::Point(40, 140);
			this->user_gender_->Margin = System::Windows::Forms::Padding(0);
			this->user_gender_->Name = L"user_gender_";
			this->user_gender_->Size = System::Drawing::Size(300, 30);
			this->user_gender_->TabIndex = 7;
			this->user_gender_->Text = L"MALE";
			this->user_gender_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// user_group_label_
			// 
			this->user_group_label_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->user_group_label_->Location = System::Drawing::Point(40, 185);
			this->user_group_label_->Margin = System::Windows::Forms::Padding(0);
			this->user_group_label_->Name = L"user_group_label_";
			this->user_group_label_->Size = System::Drawing::Size(300, 30);
			this->user_group_label_->TabIndex = 3;
			this->user_group_label_->Text = L"GROUP";
			this->user_group_label_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// user_name_label_
			// 
			this->user_name_label_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->user_name_label_->Location = System::Drawing::Point(40, 25);
			this->user_name_label_->Margin = System::Windows::Forms::Padding(0);
			this->user_name_label_->Name = L"user_name_label_";
			this->user_name_label_->Size = System::Drawing::Size(300, 30);
			this->user_name_label_->TabIndex = 3;
			this->user_name_label_->Text = L"NAME";
			this->user_name_label_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// user_name_
			// 
			this->user_name_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15));
			this->user_name_->Location = System::Drawing::Point(40, 60);
			this->user_name_->Margin = System::Windows::Forms::Padding(0);
			this->user_name_->Name = L"user_name_";
			this->user_name_->Size = System::Drawing::Size(300, 30);
			this->user_name_->TabIndex = 6;
			this->user_name_->Text = L"JOSIAS";
			this->user_name_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// user_gender_label_
			// 
			this->user_gender_label_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->user_gender_label_->Location = System::Drawing::Point(40, 105);
			this->user_gender_label_->Margin = System::Windows::Forms::Padding(0);
			this->user_gender_label_->Name = L"user_gender_label_";
			this->user_gender_label_->Size = System::Drawing::Size(300, 30);
			this->user_gender_label_->TabIndex = 3;
			this->user_gender_label_->Text = L"GENDER";
			this->user_gender_label_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// user_info_container_header_
			// 
			this->user_info_container_header_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->user_info_container_header_->Controls->Add(this->user_info_container_title_);
			this->user_info_container_header_->Location = System::Drawing::Point(0, 0);
			this->user_info_container_header_->Margin = System::Windows::Forms::Padding(0);
			this->user_info_container_header_->Name = L"user_info_container_header_";
			this->user_info_container_header_->Size = System::Drawing::Size(750, 75);
			this->user_info_container_header_->TabIndex = 2;
			// 
			// user_info_container_title_
			// 
			this->user_info_container_title_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20, System::Drawing::FontStyle::Bold));
			this->user_info_container_title_->ForeColor = System::Drawing::Color::White;
			this->user_info_container_title_->Location = System::Drawing::Point(225, 15);
			this->user_info_container_title_->Margin = System::Windows::Forms::Padding(0);
			this->user_info_container_title_->Name = L"user_info_container_title_";
			this->user_info_container_title_->Size = System::Drawing::Size(300, 45);
			this->user_info_container_title_->TabIndex = 0;
			this->user_info_container_title_->Text = L"USER INFORMATION";
			this->user_info_container_title_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// verifier_container_
			// 
			this->verifier_container_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->verifier_container_->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->verifier_container_->Controls->Add(this->verifier_ok_button_);
			this->verifier_container_->Controls->Add(this->verifier_container_header_);
			this->verifier_container_->Controls->Add(this->verifier_textbox_);
			this->verifier_container_->Location = System::Drawing::Point(50, 50);
			this->verifier_container_->Margin = System::Windows::Forms::Padding(0);
			this->verifier_container_->Name = L"verifier_container_";
			this->verifier_container_->Size = System::Drawing::Size(350, 250);
			this->verifier_container_->TabIndex = 2;
			// 
			// verifier_ok_button_
			// 
			this->verifier_ok_button_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->verifier_ok_button_->FlatAppearance->BorderSize = 0;
			this->verifier_ok_button_->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->verifier_ok_button_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->verifier_ok_button_->ForeColor = System::Drawing::Color::White;
			this->verifier_ok_button_->Location = System::Drawing::Point(100, 175);
			this->verifier_ok_button_->Margin = System::Windows::Forms::Padding(2);
			this->verifier_ok_button_->Name = L"verifier_ok_button_";
			this->verifier_ok_button_->Size = System::Drawing::Size(150, 50);
			this->verifier_ok_button_->TabIndex = 3;
			this->verifier_ok_button_->Text = L"OK";
			this->verifier_ok_button_->UseVisualStyleBackColor = false;
			this->verifier_ok_button_->Click += gcnew System::EventHandler(this, &ScannerInterface::VerifierOkButtonOnClick);
			// 
			// verifier_container_header_
			// 
			this->verifier_container_header_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->verifier_container_header_->Controls->Add(this->verifier_container_title_);
			this->verifier_container_header_->Location = System::Drawing::Point(-1, -1);
			this->verifier_container_header_->Margin = System::Windows::Forms::Padding(2);
			this->verifier_container_header_->Name = L"verifier_container_header_";
			this->verifier_container_header_->Size = System::Drawing::Size(350, 75);
			this->verifier_container_header_->TabIndex = 2;
			// 
			// verifier_container_title_
			// 
			this->verifier_container_title_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20, System::Drawing::FontStyle::Bold));
			this->verifier_container_title_->ForeColor = System::Drawing::Color::White;
			this->verifier_container_title_->Location = System::Drawing::Point(75, 15);
			this->verifier_container_title_->Margin = System::Windows::Forms::Padding(0);
			this->verifier_container_title_->Name = L"verifier_container_title_";
			this->verifier_container_title_->Size = System::Drawing::Size(200, 45);
			this->verifier_container_title_->TabIndex = 0;
			this->verifier_container_title_->Text = L"ENTER ID";
			this->verifier_container_title_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// verifier_textbox_
			// 
			this->verifier_textbox_->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->verifier_textbox_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15));
			this->verifier_textbox_->Location = System::Drawing::Point(50, 100);
			this->verifier_textbox_->Margin = System::Windows::Forms::Padding(2);
			this->verifier_textbox_->Multiline = true;
			this->verifier_textbox_->Name = L"verifier_textbox_";
			this->verifier_textbox_->Size = System::Drawing::Size(250, 50);
			this->verifier_textbox_->TabIndex = 1;
			this->verifier_textbox_->TextChanged += gcnew System::EventHandler(this, &ScannerInterface::VerifierTextboxTextChanged);
			// 
			// ScannerInterface
			// 
			this->AcceptButton = this->verifier_ok_button_;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1099, 749);
			this->ControlBox = false;
			this->Controls->Add(this->left_panel_);
			this->Controls->Add(this->content_);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ScannerInterface";
			this->Text = L"Scanner";
			this->Load += gcnew System::EventHandler(this, &ScannerInterface::StudentForm_Load);
			this->left_panel_->ResumeLayout(false);
			this->admin_info_->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->admin_avatar_))->EndInit();
			this->content_->ResumeLayout(false);
			this->status_container_->ResumeLayout(false);
			this->status_container_header_->ResumeLayout(false);
			this->user_info_container_->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_photo_))->EndInit();
			this->user_info_->ResumeLayout(false);
			this->user_info_container_header_->ResumeLayout(false);
			this->verifier_container_->ResumeLayout(false);
			this->verifier_container_->PerformLayout();
			this->verifier_container_header_->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		#pragma endregion
	
	private:
		System::Void StudentForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}

		System::Void VerifierOkButtonOnClick(System::Object^ sender, System::EventArgs^ e) {
		}
		System::Void VerifierTextboxTextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
	};

}
