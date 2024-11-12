#pragma once

#include "Dashboard.h"

namespace CafeteriaProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class CafeteriaForm : public System::Windows::Forms::Form
    {
    public:
        CafeteriaForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~CafeteriaForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ labelLogin;
    protected:

    protected:

    private:

        System::Windows::Forms::Label^ labelSubtitle;



        System::Windows::Forms::Button^ buttonContinue;

    private: System::Windows::Forms::TextBox^ textBoxEmail;
    private: System::Windows::Forms::TextBox^ textBoxPassword;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Panel^ panel1;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ button1;


           System::ComponentModel::Container^ components;

           void InitializeComponent(void)
           {
               this->labelLogin = (gcnew System::Windows::Forms::Label());
               this->labelSubtitle = (gcnew System::Windows::Forms::Label());
               this->buttonContinue = (gcnew System::Windows::Forms::Button());
               this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
               this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->textBox2 = (gcnew System::Windows::Forms::TextBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->panel1 = (gcnew System::Windows::Forms::Panel());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->panel1->SuspendLayout();
               this->SuspendLayout();
               // 
               // labelLogin
               // 
               this->labelLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->labelLogin->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold));
               this->labelLogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                   static_cast<System::Int32>(static_cast<System::Byte>(138)));
               this->labelLogin->Location = System::Drawing::Point(40, 17);
               this->labelLogin->Name = L"labelLogin";
               this->labelLogin->Size = System::Drawing::Size(374, 68);
               this->labelLogin->TabIndex = 0;
               this->labelLogin->Text = L"Login";
               this->labelLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
               this->labelLogin->Click += gcnew System::EventHandler(this, &CafeteriaForm::labelLogin_Click);
               // 
               // labelSubtitle
               // 
               this->labelSubtitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->labelSubtitle->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelSubtitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                   static_cast<System::Int32>(static_cast<System::Byte>(138)));
               this->labelSubtitle->Location = System::Drawing::Point(40, 71);
               this->labelSubtitle->Name = L"labelSubtitle";
               this->labelSubtitle->Size = System::Drawing::Size(374, 48);
               this->labelSubtitle->TabIndex = 1;
               this->labelSubtitle->Text = L"to get started";
               this->labelSubtitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
               this->labelSubtitle->Click += gcnew System::EventHandler(this, &CafeteriaForm::labelSubtitle_Click);
               // 
               // buttonContinue
               // 
               this->buttonContinue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->buttonContinue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                   static_cast<System::Int32>(static_cast<System::Byte>(138)));
               this->buttonContinue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
               this->buttonContinue->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                   static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
               this->buttonContinue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->buttonContinue->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11, System::Drawing::FontStyle::Bold));
               this->buttonContinue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(224)));
               this->buttonContinue->Location = System::Drawing::Point(46, 402);
               this->buttonContinue->Margin = System::Windows::Forms::Padding(0);
               this->buttonContinue->Name = L"buttonContinue";
               this->buttonContinue->Size = System::Drawing::Size(363, 48);
               this->buttonContinue->TabIndex = 5;
               this->buttonContinue->Text = L"Log in";
               this->buttonContinue->UseVisualStyleBackColor = false;
               this->buttonContinue->Click += gcnew System::EventHandler(this, &CafeteriaForm::buttonContinue_Click);
               // 
               // textBoxEmail
               // 
               this->textBoxEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->textBoxEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(224)));
               this->textBoxEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->textBoxEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
               this->textBoxEmail->Location = System::Drawing::Point(46, 195);
               this->textBoxEmail->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
               this->textBoxEmail->Name = L"textBoxEmail";
               this->textBoxEmail->Size = System::Drawing::Size(362, 34);
               this->textBoxEmail->TabIndex = 2;
               this->textBoxEmail->TextChanged += gcnew System::EventHandler(this, &CafeteriaForm::textBoxEmail_TextChanged);
               // 
               // textBoxPassword
               // 
               this->textBoxPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->textBoxPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(224)));
               this->textBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
               this->textBoxPassword->Location = System::Drawing::Point(46, 289);
               this->textBoxPassword->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
               this->textBoxPassword->Name = L"textBoxPassword";
               this->textBoxPassword->Size = System::Drawing::Size(362, 34);
               this->textBoxPassword->TabIndex = 3;
               this->textBoxPassword->UseSystemPasswordChar = true;
               this->textBoxPassword->TextChanged += gcnew System::EventHandler(this, &CafeteriaForm::textBoxPassword_TextChanged);
               // 
               // textBox1
               // 
               this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                   static_cast<System::Int32>(static_cast<System::Byte>(246)));
               this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
               this->textBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                   static_cast<System::Int32>(static_cast<System::Byte>(138)));
               this->textBox1->Location = System::Drawing::Point(54, 165);
               this->textBox1->Name = L"textBox1";
               this->textBox1->Size = System::Drawing::Size(153, 24);
               this->textBox1->TabIndex = 7;
               this->textBox1->Text = L"Username";
               this->textBox1->TextChanged += gcnew System::EventHandler(this, &CafeteriaForm::textBox1_TextChanged);
               // 
               // textBox2
               // 
               this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                   static_cast<System::Int32>(static_cast<System::Byte>(246)));
               this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
               this->textBox2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                   static_cast<System::Int32>(static_cast<System::Byte>(138)));
               this->textBox2->Location = System::Drawing::Point(54, 258);
               this->textBox2->Name = L"textBox2";
               this->textBox2->Size = System::Drawing::Size(153, 24);
               this->textBox2->TabIndex = 8;
               this->textBox2->Text = L"Password";
               this->textBox2->TextChanged += gcnew System::EventHandler(this, &CafeteriaForm::textBox2_TextChanged);
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label1->ForeColor = System::Drawing::Color::Green;
               this->label1->Location = System::Drawing::Point(190, 348);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(70, 28);
               this->label1->TabIndex = 10;
               this->label1->Text = L"Status";
               this->label1->Click += gcnew System::EventHandler(this, &CafeteriaForm::label1_Click);
               // 
               // panel1
               // 
               this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(224)));
               this->panel1->Controls->Add(this->labelLogin);
               this->panel1->Controls->Add(this->labelSubtitle);
               this->panel1->Location = System::Drawing::Point(0, 0);
               this->panel1->Name = L"panel1";
               this->panel1->Size = System::Drawing::Size(454, 131);
               this->panel1->TabIndex = 11;
               this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CafeteriaForm::panel1_Paint);
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                   static_cast<System::Int32>(static_cast<System::Byte>(138)));
               this->label2->Location = System::Drawing::Point(147, 484);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(168, 28);
               this->label2->TabIndex = 12;
               this->label2->Text = L"Or scan QR code";
               this->label2->Click += gcnew System::EventHandler(this, &CafeteriaForm::label2_Click);
               // 
               // button1
               // 
               this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
               this->button1->Location = System::Drawing::Point(142, 544);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(117, 31);
               this->button1->TabIndex = 13;
               this->button1->Text = L"button1";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &CafeteriaForm::button1_Click);
               // 
               // CafeteriaForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                   static_cast<System::Int32>(static_cast<System::Byte>(246)));
               this->ClientSize = System::Drawing::Size(453, 600);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->panel1);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->textBox2);
               this->Controls->Add(this->textBox1);
               this->Controls->Add(this->textBoxEmail);
               this->Controls->Add(this->textBoxPassword);
               this->Controls->Add(this->buttonContinue);
               this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
               this->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
               this->Name = L"CafeteriaForm";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"Login Form";
               this->Load += gcnew System::EventHandler(this, &CafeteriaForm::CafeteriaForm_Load);
               this->panel1->ResumeLayout(false);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
           #pragma endregion
           private: System::Void CafeteriaForm_Load(System::Object^ sender, System::EventArgs^ e) {
           }
           private: System::Void buttonContinue_Click(System::Object^ sender, System::EventArgs^ e) {
               Dashboard dashboard;
               this->Hide();
               dashboard.ShowDialog();
               
           }
private: System::Void Xbutton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelLogin_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelSubtitle_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
};
}