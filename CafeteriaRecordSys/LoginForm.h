#pragma once

#include "Dashboard.h"

namespace CafeteriaRecordSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
    public ref class LoginForm : public System::Windows::Forms::Form
    {
    public:
        LoginForm(void)
        {
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~LoginForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: 
        System::Windows::Forms::Panel^ header_;
        System::Windows::Forms::Button^ exit_button_;
        System::Windows::Forms::Label^ title_;
        System::Windows::Forms::Label^ subtitle_;
        System::Windows::Forms::Label^ email_label_;
        System::Windows::Forms::TextBox^ email_textbox_;
        System::Windows::Forms::Label^ password_label_;
        System::Windows::Forms::TextBox^ password_textbox_;
        System::Windows::Forms::Label^ status_label_;
        System::Windows::Forms::Button^ ok_button_;

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;
        
        #pragma region Windows Form Designer generated code
        void InitializeComponent(void) {
            this->header_ = (gcnew System::Windows::Forms::Panel());
            this->exit_button_ = (gcnew System::Windows::Forms::Button());
            this->title_ = (gcnew System::Windows::Forms::Label());
            this->subtitle_ = (gcnew System::Windows::Forms::Label());
            this->email_label_ = (gcnew System::Windows::Forms::Label());
            this->email_textbox_ = (gcnew System::Windows::Forms::TextBox());
            this->password_label_ = (gcnew System::Windows::Forms::Label());
            this->password_textbox_ = (gcnew System::Windows::Forms::TextBox());
            this->status_label_ = (gcnew System::Windows::Forms::Label());
            this->ok_button_ = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            this->header_->SuspendLayout();
            // 
            // header_
            // 
            this->header_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->header_->Controls->Add(this->exit_button_);
            this->header_->Controls->Add(this->title_);
            this->header_->Controls->Add(this->subtitle_);
            this->header_->Location = System::Drawing::Point(0, 0);
            this->header_->Margin = System::Windows::Forms::Padding(0);
            this->header_->Name = L"header_";
            this->header_->Size = System::Drawing::Size(302, 85);
            this->header_->TabIndex = 11;
            // 
            // exit_button_
            // 
            this->exit_button_->FlatAppearance->BorderSize = 0;
            this->exit_button_->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->exit_button_->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->exit_button_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->exit_button_->Location = System::Drawing::Point(279, 3);
            this->exit_button_->Margin = System::Windows::Forms::Padding(2);
            this->exit_button_->Name = L"exit_button_";
            this->exit_button_->Size = System::Drawing::Size(20, 27);
            this->exit_button_->TabIndex = 2;
            this->exit_button_->Text = L"X";
            this->exit_button_->UseVisualStyleBackColor = true;
            this->exit_button_->Click += gcnew System::EventHandler(this, &LoginForm::ExitButtonOnClick);
            // 
            // title_
            // 
            this->title_->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->title_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold));
            this->title_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->title_->Location = System::Drawing::Point(104, 16);
            this->title_->Margin = System::Windows::Forms::Padding(0);
            this->title_->Name = L"title_";
            this->title_->Size = System::Drawing::Size(94, 31);
            this->title_->TabIndex = 0;
            this->title_->Text = L"LOG IN";
            this->title_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // subtitle_
            // 
            this->subtitle_->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->subtitle_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->subtitle_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->subtitle_->Location = System::Drawing::Point(27, 46);
            this->subtitle_->Margin = System::Windows::Forms::Padding(0);
            this->subtitle_->Name = L"subtitle_";
            this->subtitle_->Size = System::Drawing::Size(248, 28);
            this->subtitle_->TabIndex = 1;
            this->subtitle_->Text = L"TO GET STATED";
            this->subtitle_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // email_label_
            // 
            this->email_label_->AutoSize = true;
            this->email_label_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->email_label_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->email_label_->Location = System::Drawing::Point(30, 105);
            this->email_label_->Name = L"email_label_";
            this->email_label_->Size = System::Drawing::Size(42, 15);
            this->email_label_->TabIndex = 12;
            this->email_label_->Text = L"EMAIL";
            this->email_label_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // email_textbox_
            // 
            this->email_textbox_->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->email_textbox_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->email_textbox_->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->email_textbox_->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->email_textbox_->Location = System::Drawing::Point(30, 130);
            this->email_textbox_->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
            this->email_textbox_->Name = L"email_textbox_";
            this->email_textbox_->Size = System::Drawing::Size(242, 25);
            this->email_textbox_->TabIndex = 2;
            //
            // password_label_
            // 
            this->password_label_->AutoSize = true;
            this->password_label_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->password_label_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->password_label_->Location = System::Drawing::Point(30, 170);
            this->password_label_->Name = L"password_label_";
            this->password_label_->Size = System::Drawing::Size(73, 15);
            this->password_label_->TabIndex = 13;
            this->password_label_->Text = L"PASSWORD";
            // 
            // password_textbox_
            // 
            this->password_textbox_->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->password_textbox_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->password_textbox_->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->password_textbox_->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
            this->password_textbox_->Location = System::Drawing::Point(30, 195);
            this->password_textbox_->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
            this->password_textbox_->Name = L"password_textbox_";
            this->password_textbox_->Size = System::Drawing::Size(242, 25);
            this->password_textbox_->TabIndex = 3;
            this->password_textbox_->UseSystemPasswordChar = true;
            // 
            // status_label_
            // 
            this->status_label_->AutoSize = true;
            this->status_label_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->status_label_->ForeColor = System::Drawing::Color::Green;
            this->status_label_->Location = System::Drawing::Point(126, 235);
            this->status_label_->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->status_label_->Name = L"status_label_";
            this->status_label_->Size = System::Drawing::Size(50, 15);
            this->status_label_->TabIndex = 10;
            this->status_label_->Text = L"STATUS";
            // 
            // ok_button_
            // 
            this->ok_button_->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ok_button_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->ok_button_->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->ok_button_->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->ok_button_->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ok_button_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11, System::Drawing::FontStyle::Bold));
            this->ok_button_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->ok_button_->Location = System::Drawing::Point(76, 290);
            this->ok_button_->Margin = System::Windows::Forms::Padding(0);
            this->ok_button_->Name = L"ok_button_";
            this->ok_button_->Size = System::Drawing::Size(150, 50);
            this->ok_button_->TabIndex = 5;
            this->ok_button_->Text = L"OK";
            this->ok_button_->UseVisualStyleBackColor = false;
            this->ok_button_->Click += gcnew System::EventHandler(this, &LoginForm::OkButtonOnClick);
            //
            // LoginForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->ClientSize = System::Drawing::Size(302, 390);
            this->Controls->Add(this->password_label_);
            this->Controls->Add(this->email_label_);
            this->Controls->Add(this->header_);
            this->Controls->Add(this->status_label_);
            this->Controls->Add(this->email_textbox_);
            this->Controls->Add(this->password_textbox_);
            this->Controls->Add(this->ok_button_);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
            this->Name = L"LoginForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Login Form";
            this->header_->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
        #pragma endregion
    private: 
        System::Void ExitButtonOnClick(System::Object^ sender, System::EventArgs^ e) {
            Application::Exit();
        }

        System::Void OkButtonOnClick(System::Object^ sender, System::EventArgs^ e) {
            Dashboard dashboard;
            //NewUserForm new_user_form;
            this->Hide();
            dashboard.ShowDialog();
        }


    };
} // namespace CafeteriaRecordSys
