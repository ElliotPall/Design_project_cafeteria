#pragma once

namespace CafeteriaRecordSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewUserForm
	/// </summary>
	public ref class NewUserForm : public System::Windows::Forms::Form {
	public:
		NewUserForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NewUserForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Panel^ body_;
		System::Windows::Forms::Panel^ header_;
		System::Windows::Forms::PictureBox^ icon_;
		System::Windows::Forms::Label^ title_;
		System::Windows::Forms::Label^ name_label_;
		System::Windows::Forms::TextBox^ name_textbox_;
		System::Windows::Forms::Label^ category_label_;
		System::Windows::Forms::ComboBox^ category_dropdown_;
		System::Windows::Forms::Label^ gender_label_;
		System::Windows::Forms::ComboBox^ gender_dropdown_;
		System::Windows::Forms::Label^ group_label_;
		System::Windows::Forms::ComboBox^ group_dropdown_;
		System::Windows::Forms::Button^ ok_button_;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NewUserForm::typeid));
			this->body_ = (gcnew System::Windows::Forms::Panel());
			this->header_ = (gcnew System::Windows::Forms::Panel());
			this->icon_ = (gcnew System::Windows::Forms::PictureBox());
			this->title_ = (gcnew System::Windows::Forms::Label());
			this->category_label_ = (gcnew System::Windows::Forms::Label());
			this->category_dropdown_ = (gcnew System::Windows::Forms::ComboBox());
			this->name_label_ = (gcnew System::Windows::Forms::Label());
			this->name_textbox_ = (gcnew System::Windows::Forms::TextBox());
			this->gender_label_ = (gcnew System::Windows::Forms::Label());
			this->gender_dropdown_ = (gcnew System::Windows::Forms::ComboBox());
			this->group_label_ = (gcnew System::Windows::Forms::Label());
			this->group_dropdown_ = (gcnew System::Windows::Forms::ComboBox());
			this->ok_button_ = (gcnew System::Windows::Forms::Button());
			this->body_->SuspendLayout();
			this->header_->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon_))->BeginInit();
			this->SuspendLayout();
			// 
			// body_
			// 
			this->body_->Controls->Add(this->header_);
			this->body_->Controls->Add(this->category_label_);
			this->body_->Controls->Add(this->category_dropdown_);
			this->body_->Controls->Add(this->name_label_);
			this->body_->Controls->Add(this->name_textbox_);
			this->body_->Controls->Add(this->gender_label_);
			this->body_->Controls->Add(this->gender_dropdown_);
			this->body_->Controls->Add(this->group_label_);
			this->body_->Controls->Add(this->group_dropdown_);
			this->body_->Controls->Add(this->ok_button_);
			this->body_->Dock = System::Windows::Forms::DockStyle::Fill;
			this->body_->Location = System::Drawing::Point(0, 0);
			this->body_->Margin = System::Windows::Forms::Padding(4);
			this->body_->Name = L"body_";
			this->body_->Size = System::Drawing::Size(488, 734);
			this->body_->TabIndex = 0;
			// 
			// header_
			// 
			this->header_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->header_->Controls->Add(this->icon_);
			this->header_->Controls->Add(this->title_);
			this->header_->Dock = System::Windows::Forms::DockStyle::Top;
			this->header_->Location = System::Drawing::Point(0, 0);
			this->header_->Name = L"header_";
			this->header_->Size = System::Drawing::Size(488, 150);
			this->header_->TabIndex = 10;
			// 
			// icon_
			// 
			this->icon_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icon_.Image")));
			this->icon_->InitialImage = nullptr;
			this->icon_->Location = System::Drawing::Point(212, 20);
			this->icon_->Name = L"icon_";
			this->icon_->Size = System::Drawing::Size(64, 64);
			this->icon_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->icon_->TabIndex = 10;
			this->icon_->TabStop = false;
			// 
			// title_
			// 
			this->title_->AutoSize = true;
			this->title_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->title_->Location = System::Drawing::Point(176, 98);
			this->title_->Name = L"title_";
			this->title_->Size = System::Drawing::Size(136, 32);
			this->title_->TabIndex = 9;
			this->title_->Text = L"NEW USER";
			this->title_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// category_label_
			// 
			this->category_label_->AutoSize = true;
			this->category_label_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->category_label_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->category_label_->Location = System::Drawing::Point(70, 176);
			this->category_label_->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->category_label_->Name = L"category_label_";
			this->category_label_->Size = System::Drawing::Size(80, 21);
			this->category_label_->TabIndex = 0;
			this->category_label_->Text = L"Category";
			// 
			// category_dropdown_
			// 
			this->category_dropdown_->FormattingEnabled = true;
			this->category_dropdown_->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"STUDENT" });
			this->category_dropdown_->Location = System::Drawing::Point(67, 211);
			this->category_dropdown_->Name = L"category_dropdown_";
			this->category_dropdown_->Size = System::Drawing::Size(350, 25);
			this->category_dropdown_->TabIndex = 3;
			// 
			// name_label_
			// 
			this->name_label_->AutoSize = true;
			this->name_label_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->name_label_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->name_label_->Location = System::Drawing::Point(70, 291);
			this->name_label_->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name_label_->Name = L"name_label_";
			this->name_label_->Size = System::Drawing::Size(88, 21);
			this->name_label_->TabIndex = 2;
			this->name_label_->Text = L"Full Name";
			// 
			// name_textbox_
			// 
			this->name_textbox_->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->name_textbox_->Location = System::Drawing::Point(67, 326);
			this->name_textbox_->Name = L"name_textbox_";
			this->name_textbox_->Size = System::Drawing::Size(350, 25);
			this->name_textbox_->TabIndex = 1;
			// 
			// gender_label_
			// 
			this->gender_label_->AutoSize = true;
			this->gender_label_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->gender_label_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->gender_label_->Location = System::Drawing::Point(70, 408);
			this->gender_label_->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->gender_label_->Name = L"gender_label_";
			this->gender_label_->Size = System::Drawing::Size(65, 21);
			this->gender_label_->TabIndex = 4;
			this->gender_label_->Text = L"Gender";
			// 
			// gender_dropdown_
			// 
			this->gender_dropdown_->FormattingEnabled = true;
			this->gender_dropdown_->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->gender_dropdown_->Location = System::Drawing::Point(67, 443);
			this->gender_dropdown_->Name = L"gender_dropdown_";
			this->gender_dropdown_->Size = System::Drawing::Size(350, 25);
			this->gender_dropdown_->TabIndex = 6;
			// 
			// group_label_
			// 
			this->group_label_->AutoSize = true;
			this->group_label_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->group_label_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->group_label_->Location = System::Drawing::Point(70, 525);
			this->group_label_->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->group_label_->Name = L"group_label_";
			this->group_label_->Size = System::Drawing::Size(57, 21);
			this->group_label_->TabIndex = 5;
			this->group_label_->Text = L"Group";
			// 
			// group_dropdown_
			// 
			this->group_dropdown_->FormattingEnabled = true;
			this->group_dropdown_->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"TAA", L"TAC", L"TAIS" });
			this->group_dropdown_->Location = System::Drawing::Point(67, 560);
			this->group_dropdown_->Name = L"group_dropdown_";
			this->group_dropdown_->Size = System::Drawing::Size(350, 25);
			this->group_dropdown_->TabIndex = 11;
			// 
			// ok_button_
			// 
			this->ok_button_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->ok_button_->FlatAppearance->BorderSize = 0;
			this->ok_button_->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ok_button_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ok_button_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ok_button_->Location = System::Drawing::Point(169, 634);
			this->ok_button_->Margin = System::Windows::Forms::Padding(0);
			this->ok_button_->Name = L"ok_button_";
			this->ok_button_->Size = System::Drawing::Size(150, 50);
			this->ok_button_->TabIndex = 8;
			this->ok_button_->Text = L"OK";
			this->ok_button_->UseVisualStyleBackColor = false;
			// 
			// NewUserForm
			// 
			this->AcceptButton = this->ok_button_;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(488, 734);
			this->Controls->Add(this->body_);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"NewUserForm";
			this->Text = L"NEW USER";
			this->body_->ResumeLayout(false);
			this->body_->PerformLayout();
			this->header_->ResumeLayout(false);
			this->header_->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon_))->EndInit();
			this->ResumeLayout(false);
		}
		#pragma endregion

		/*private:
			System::Void CategoryDropdownSelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {}
			System::Void NameTextboxTextChanged(System::Object^ sender, System::EventArgs^ e) {}
			System::Void GenderDropdownSelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {}
			System::Void GroupDropdownSelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {}
			System::Void OkButtonOnClick(System::Object^ sender, System::EventArgs^ e) {
			//this->Close();
			}*/
	};
} // namespace CafeteriaRecordSys
