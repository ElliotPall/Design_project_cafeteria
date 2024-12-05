#pragma once

#include "NewUserForm.h"

namespace CafeteriaRecordSys {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
    public ref class Dashboard : public System::Windows::Forms::Form
    {
    public:
        Dashboard(void)
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
        ~Dashboard()
        {
            if (components) {
                delete components;
            }
        }
    private: //left_panel_ declaration
        //main container
        System::Windows::Forms::Panel^ left_panel_;
        //child container
        System::Windows::Forms::Panel^ admin_info_;
        System::Windows::Forms::PictureBox^ admin_avatar_;
        System::Windows::Forms::Label^ admin_identifier_;
        //child container
        System::Windows::Forms::Panel^ tabs_nav_;
        System::Windows::Forms::PictureBox^ home_icon_;
        System::Windows::Forms::Button^ home_button_;
        System::Windows::Forms::PictureBox^ analytics_icon_;
        System::Windows::Forms::Button^ analytics_button_;
        System::Windows::Forms::PictureBox^ database_icon_;
        System::Windows::Forms::Button^ database_button_;

    private: //home_tab_ declaration
        //main container
        System::Windows::Forms::Panel^ home_tab_;
        //child container
        System::Windows::Forms::Panel^ home_header_;
        System::Windows::Forms::Label^ home_header_title_;
        System::Windows::Forms::PictureBox^ search_icon_;
        System::Windows::Forms::TextBox^ search_textbox_;
        
        //floating child containers
        
        //income_container_ is the child container of home_tab_
        System::Windows::Forms::Panel^ income_container_;
        //income_container_header is the child container of income_container_
        System::Windows::Forms::Panel^ income_container_header_;
        System::Windows::Forms::Label^ income_container_title_;
        //other elements in income_container_
        System::Windows::Forms::Label^ currency_icon_;
        System::Windows::Forms::Label^ income_;
        System::Windows::Forms::PictureBox^ income_icon_;
        System::Windows::Forms::Label^ income_container_info_;

        //downloads_container_ is the child container of home_tab_
        System::Windows::Forms::Panel^ downloads_container_;
        //downloads_container_header_ is the child container of downloads_container_
        System::Windows::Forms::Panel^ downloads_container_header_;
        System::Windows::Forms::Label^ downloads_container_title_;
        //other elements in downloads_container_
        System::Windows::Forms::PictureBox^ downloads_icon_;

        //visitor_flow_container_ is the child container of home_tab_
        System::Windows::Forms::Panel^ visitor_flow_container_;
        //visitor_flow_container_header_ is the child container of visitor_flow_container_
        System::Windows::Forms::Panel^ visitor_flow_container_header_;
        System::Windows::Forms::Label^ visitor_flow_container_title_;
        //other elements in visitor_flow_container_
        System::Windows::Forms::PictureBox^ visitor_flow_icon_;
        System::Windows::Forms::Label^ visitor_flow_container_info_;

        //graphics_container_ is the child container of home_tab_
        System::Windows::Forms::Panel^ graphics_container_;
        //graphics_container_header_ is the child container of graphics_container_
        System::Windows::Forms::Panel^ graphics_container_header_;
        System::Windows::Forms::Label^ graphics_container_title_;
        //other elements in graphics_container_
        System::Windows::Forms::PictureBox^ graphics_icon_;
        System::Windows::Forms::Label^ graphics_container_info_;

    private: //database_tab_ declaration
        System::Windows::Forms::Panel^ analytics_tab_;
        System::Windows::Forms::Panel^ analytics_header_;
        System::Windows::Forms::Label^ analytics_header_title_;

    private: //database_tab_ declaration
        //main container
        System::Windows::Forms::Panel^ database_tab_;
        //child container
        System::Windows::Forms::Panel^ database_header_;
        System::Windows::Forms::Label^ database_header_title_;

        //database_grid_ is the child container of database_tab_
        System::Windows::Forms::DataGridView^ database_grid_;
        //database_name_column_ is the child container of database_grid_
        System::Windows::Forms::DataGridViewTextBoxColumn^ database_name_column_;
        //database_group_column_ is the child container of database_grid_
        System::Windows::Forms::DataGridViewTextBoxColumn^ database_group_column_;
        //database_gender_column_ is the child container of database_grid_
        System::Windows::Forms::DataGridViewTextBoxColumn^ database_gender_column_;
        //database_account_column_ is the child container of database_grid_
        System::Windows::Forms::DataGridViewTextBoxColumn^ database_account_column_;
private: System::Windows::Forms::Button^ add_user_button_;



    private: 
        System::ComponentModel::IContainer^ components;

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>


        #pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void) {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->left_panel_ = (gcnew System::Windows::Forms::Panel());
            this->tabs_nav_ = (gcnew System::Windows::Forms::Panel());
            this->database_icon_ = (gcnew System::Windows::Forms::PictureBox());
            this->analytics_icon_ = (gcnew System::Windows::Forms::PictureBox());
            this->home_icon_ = (gcnew System::Windows::Forms::PictureBox());
            this->database_button_ = (gcnew System::Windows::Forms::Button());
            this->analytics_button_ = (gcnew System::Windows::Forms::Button());
            this->home_button_ = (gcnew System::Windows::Forms::Button());
            this->admin_info_ = (gcnew System::Windows::Forms::Panel());
            this->admin_identifier_ = (gcnew System::Windows::Forms::Label());
            this->admin_avatar_ = (gcnew System::Windows::Forms::PictureBox());
            this->home_tab_ = (gcnew System::Windows::Forms::Panel());
            this->home_header_ = (gcnew System::Windows::Forms::Panel());
            this->search_textbox_ = (gcnew System::Windows::Forms::TextBox());
            this->home_header_title_ = (gcnew System::Windows::Forms::Label());
            this->search_icon_ = (gcnew System::Windows::Forms::PictureBox());
            this->graphics_container_ = (gcnew System::Windows::Forms::Panel());
            this->graphics_container_info_ = (gcnew System::Windows::Forms::Label());
            this->graphics_icon_ = (gcnew System::Windows::Forms::PictureBox());
            this->graphics_container_header_ = (gcnew System::Windows::Forms::Panel());
            this->graphics_container_title_ = (gcnew System::Windows::Forms::Label());
            this->downloads_container_ = (gcnew System::Windows::Forms::Panel());
            this->downloads_container_header_ = (gcnew System::Windows::Forms::Panel());
            this->downloads_container_title_ = (gcnew System::Windows::Forms::Label());
            this->downloads_icon_ = (gcnew System::Windows::Forms::PictureBox());
            this->visitor_flow_container_ = (gcnew System::Windows::Forms::Panel());
            this->visitor_flow_container_info_ = (gcnew System::Windows::Forms::Label());
            this->visitor_flow_container_header_ = (gcnew System::Windows::Forms::Panel());
            this->visitor_flow_container_title_ = (gcnew System::Windows::Forms::Label());
            this->visitor_flow_icon_ = (gcnew System::Windows::Forms::PictureBox());
            this->income_container_ = (gcnew System::Windows::Forms::Panel());
            this->income_container_info_ = (gcnew System::Windows::Forms::Label());
            this->currency_icon_ = (gcnew System::Windows::Forms::Label());
            this->income_ = (gcnew System::Windows::Forms::Label());
            this->income_icon_ = (gcnew System::Windows::Forms::PictureBox());
            this->income_container_header_ = (gcnew System::Windows::Forms::Panel());
            this->income_container_title_ = (gcnew System::Windows::Forms::Label());
            this->analytics_tab_ = (gcnew System::Windows::Forms::Panel());
            this->analytics_header_ = (gcnew System::Windows::Forms::Panel());
            this->analytics_header_title_ = (gcnew System::Windows::Forms::Label());
            this->database_header_title_ = (gcnew System::Windows::Forms::Label());
            this->add_user_button_ = (gcnew System::Windows::Forms::Button());
            this->database_tab_ = (gcnew System::Windows::Forms::Panel());
            this->database_grid_ = (gcnew System::Windows::Forms::DataGridView());
            this->database_name_column_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->database_group_column_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->database_gender_column_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->database_account_column_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->database_header_ = (gcnew System::Windows::Forms::Panel());
            this->left_panel_->SuspendLayout();
            this->tabs_nav_->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->database_icon_))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->analytics_icon_))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->home_icon_))->BeginInit();
            this->admin_info_->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->admin_avatar_))->BeginInit();
            this->home_tab_->SuspendLayout();
            this->home_header_->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_icon_))->BeginInit();
            this->graphics_container_->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphics_icon_))->BeginInit();
            this->graphics_container_header_->SuspendLayout();
            this->downloads_container_->SuspendLayout();
            this->downloads_container_header_->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->downloads_icon_))->BeginInit();
            this->visitor_flow_container_->SuspendLayout();
            this->visitor_flow_container_header_->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->visitor_flow_icon_))->BeginInit();
            this->income_container_->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->income_icon_))->BeginInit();
            this->income_container_header_->SuspendLayout();
            this->analytics_tab_->SuspendLayout();
            this->analytics_header_->SuspendLayout();
            this->database_tab_->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->database_grid_))->BeginInit();
            this->database_header_->SuspendLayout();
            this->SuspendLayout();
            // 
            // left_panel_
            // 
            this->left_panel_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->left_panel_->Controls->Add(this->tabs_nav_);
            this->left_panel_->Controls->Add(this->admin_info_);
            this->left_panel_->Dock = System::Windows::Forms::DockStyle::Left;
            this->left_panel_->Location = System::Drawing::Point(0, 0);
            this->left_panel_->Name = L"left_panel_";
            this->left_panel_->Size = System::Drawing::Size(250, 749);
            this->left_panel_->TabIndex = 0;
            // 
            // tabs_nav_
            // 
            this->tabs_nav_->Controls->Add(this->database_icon_);
            this->tabs_nav_->Controls->Add(this->analytics_icon_);
            this->tabs_nav_->Controls->Add(this->home_icon_);
            this->tabs_nav_->Controls->Add(this->database_button_);
            this->tabs_nav_->Controls->Add(this->analytics_button_);
            this->tabs_nav_->Controls->Add(this->home_button_);
            this->tabs_nav_->Location = System::Drawing::Point(0, 250);
            this->tabs_nav_->Name = L"tabs_nav_";
            this->tabs_nav_->Size = System::Drawing::Size(250, 400);
            this->tabs_nav_->TabIndex = 1;
            // 
            // database_icon_
            // 
            this->database_icon_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"database_icon_.Image")));
            this->database_icon_->Location = System::Drawing::Point(25, 225);
            this->database_icon_->Name = L"database_icon_";
            this->database_icon_->Size = System::Drawing::Size(50, 50);
            this->database_icon_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->database_icon_->TabIndex = 5;
            this->database_icon_->TabStop = false;
            // 
            // analytics_icon_
            // 
            this->analytics_icon_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"analytics_icon_.Image")));
            this->analytics_icon_->Location = System::Drawing::Point(25, 125);
            this->analytics_icon_->Name = L"analytics_icon_";
            this->analytics_icon_->Size = System::Drawing::Size(50, 50);
            this->analytics_icon_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->analytics_icon_->TabIndex = 4;
            this->analytics_icon_->TabStop = false;
            // 
            // home_icon_
            // 
            this->home_icon_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home_icon_.Image")));
            this->home_icon_->Location = System::Drawing::Point(25, 25);
            this->home_icon_->Name = L"home_icon_";
            this->home_icon_->Size = System::Drawing::Size(50, 50);
            this->home_icon_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->home_icon_->TabIndex = 3;
            this->home_icon_->TabStop = false;
            // 
            // database_button_
            // 
            this->database_button_->FlatAppearance->BorderSize = 0;
            this->database_button_->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->database_button_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->database_button_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->database_button_->Location = System::Drawing::Point(90, 225);
            this->database_button_->Name = L"database_button_";
            this->database_button_->Size = System::Drawing::Size(150, 50);
            this->database_button_->TabIndex = 2;
            this->database_button_->Text = L"DATABASE";
            this->database_button_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->database_button_->UseVisualStyleBackColor = true;
            this->database_button_->Click += gcnew System::EventHandler(this, &Dashboard::DatabaseButtonOnClick);
            // 
            // analytics_button_
            // 
            this->analytics_button_->FlatAppearance->BorderSize = 0;
            this->analytics_button_->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->analytics_button_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->analytics_button_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->analytics_button_->Location = System::Drawing::Point(90, 125);
            this->analytics_button_->Name = L"analytics_button_";
            this->analytics_button_->Size = System::Drawing::Size(150, 50);
            this->analytics_button_->TabIndex = 1;
            this->analytics_button_->Text = L"ANALYTICS";
            this->analytics_button_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->analytics_button_->UseVisualStyleBackColor = true;
            this->analytics_button_->Click += gcnew System::EventHandler(this, &Dashboard::AnalyticsButtonOnClick);
            // 
            // home_button_
            // 
            this->home_button_->FlatAppearance->BorderSize = 0;
            this->home_button_->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->home_button_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->home_button_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->home_button_->Location = System::Drawing::Point(90, 25);
            this->home_button_->Name = L"home_button_";
            this->home_button_->Size = System::Drawing::Size(150, 50);
            this->home_button_->TabIndex = 0;
            this->home_button_->Text = L"HOME";
            this->home_button_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->home_button_->UseVisualStyleBackColor = true;
            this->home_button_->Click += gcnew System::EventHandler(this, &Dashboard::HomeButtonOnClick);
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
            // home_tab_
            // 
            this->home_tab_->Controls->Add(this->home_header_);
            this->home_tab_->Controls->Add(this->graphics_container_);
            this->home_tab_->Controls->Add(this->downloads_container_);
            this->home_tab_->Controls->Add(this->visitor_flow_container_);
            this->home_tab_->Controls->Add(this->income_container_);
            this->home_tab_->Location = System::Drawing::Point(250, 0);
            this->home_tab_->Name = L"home_tab_";
            this->home_tab_->Size = System::Drawing::Size(850, 750);
            this->home_tab_->TabIndex = 12;
            // 
            // home_header_
            // 
            this->home_header_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->home_header_->Controls->Add(this->search_textbox_);
            this->home_header_->Controls->Add(this->home_header_title_);
            this->home_header_->Controls->Add(this->search_icon_);
            this->home_header_->Location = System::Drawing::Point(0, 0);
            this->home_header_->Name = L"home_header_";
            this->home_header_->Size = System::Drawing::Size(850, 120);
            this->home_header_->TabIndex = 13;
            // 
            // search_textbox_
            // 
            this->search_textbox_->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->search_textbox_->BackColor = System::Drawing::Color::White;
            this->search_textbox_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->search_textbox_->ForeColor = System::Drawing::Color::Gray;
            this->search_textbox_->Location = System::Drawing::Point(565, 45);
            this->search_textbox_->Margin = System::Windows::Forms::Padding(0);
            this->search_textbox_->Multiline = true;
            this->search_textbox_->Name = L"search_textbox_";
            this->search_textbox_->Size = System::Drawing::Size(250, 30);
            this->search_textbox_->TabIndex = 7;
            this->search_textbox_->Tag = L"";
            this->search_textbox_->Text = L"Search";
            this->search_textbox_->TextChanged += gcnew System::EventHandler(this, &Dashboard::SearchTextboxTextChanged);
            // 
            // home_header_title_
            // 
            this->home_header_title_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 30, System::Drawing::FontStyle::Bold));
            this->home_header_title_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->home_header_title_->Location = System::Drawing::Point(35, 25);
            this->home_header_title_->Name = L"home_header_title_";
            this->home_header_title_->Size = System::Drawing::Size(350, 70);
            this->home_header_title_->TabIndex = 3;
            this->home_header_title_->Text = L"HOME";
            this->home_header_title_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // search_icon_
            // 
            this->search_icon_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_icon_.Image")));
            this->search_icon_->Location = System::Drawing::Point(520, 40);
            this->search_icon_->Margin = System::Windows::Forms::Padding(0);
            this->search_icon_->Name = L"search_icon_";
            this->search_icon_->Size = System::Drawing::Size(40, 40);
            this->search_icon_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->search_icon_->TabIndex = 6;
            this->search_icon_->TabStop = false;
            this->search_icon_->Click += gcnew System::EventHandler(this, &Dashboard::SearchIconOnClick);
            // 
            // graphics_container_
            // 
            this->graphics_container_->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->graphics_container_->Controls->Add(this->graphics_container_info_);
            this->graphics_container_->Controls->Add(this->graphics_icon_);
            this->graphics_container_->Controls->Add(this->graphics_container_header_);
            this->graphics_container_->Location = System::Drawing::Point(450, 450);
            this->graphics_container_->Name = L"graphics_container_";
            this->graphics_container_->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->graphics_container_->Size = System::Drawing::Size(350, 250);
            this->graphics_container_->TabIndex = 11;
            // 
            // graphics_container_info_
            // 
            this->graphics_container_info_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10));
            this->graphics_container_info_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->graphics_container_info_->Location = System::Drawing::Point(190, 90);
            this->graphics_container_info_->Margin = System::Windows::Forms::Padding(0);
            this->graphics_container_info_->Name = L"graphics_container_info_";
            this->graphics_container_info_->Size = System::Drawing::Size(145, 145);
            this->graphics_container_info_->TabIndex = 14;
            this->graphics_container_info_->Text = L"Some Info will be placed here";
            this->graphics_container_info_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // graphics_icon_
            // 
            this->graphics_icon_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"graphics_icon_.Image")));
            this->graphics_icon_->Location = System::Drawing::Point(15, 90);
            this->graphics_icon_->Name = L"graphics_icon_";
            this->graphics_icon_->Size = System::Drawing::Size(145, 145);
            this->graphics_icon_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->graphics_icon_->TabIndex = 10;
            this->graphics_icon_->TabStop = false;
            // 
            // graphics_container_header_
            // 
            this->graphics_container_header_->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->graphics_container_header_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->graphics_container_header_->Controls->Add(this->graphics_container_title_);
            this->graphics_container_header_->Location = System::Drawing::Point(-1, -1);
            this->graphics_container_header_->Name = L"graphics_container_header_";
            this->graphics_container_header_->Size = System::Drawing::Size(350, 75);
            this->graphics_container_header_->TabIndex = 9;
            // 
            // graphics_container_title_
            // 
            this->graphics_container_title_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20, System::Drawing::FontStyle::Bold));
            this->graphics_container_title_->ForeColor = System::Drawing::Color::White;
            this->graphics_container_title_->Location = System::Drawing::Point(15, 15);
            this->graphics_container_title_->Margin = System::Windows::Forms::Padding(0);
            this->graphics_container_title_->Name = L"graphics_container_title_";
            this->graphics_container_title_->Size = System::Drawing::Size(250, 45);
            this->graphics_container_title_->TabIndex = 3;
            this->graphics_container_title_->Text = L"GRAPHICS";
            this->graphics_container_title_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // downloads_container_
            // 
            this->downloads_container_->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->downloads_container_->Controls->Add(this->downloads_container_header_);
            this->downloads_container_->Controls->Add(this->downloads_icon_);
            this->downloads_container_->Location = System::Drawing::Point(450, 170);
            this->downloads_container_->Margin = System::Windows::Forms::Padding(0);
            this->downloads_container_->Name = L"downloads_container_";
            this->downloads_container_->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->downloads_container_->Size = System::Drawing::Size(350, 250);
            this->downloads_container_->TabIndex = 8;
            // 
            // downloads_container_header_
            // 
            this->downloads_container_header_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->downloads_container_header_->Controls->Add(this->downloads_container_title_);
            this->downloads_container_header_->Location = System::Drawing::Point(0, 0);
            this->downloads_container_header_->Margin = System::Windows::Forms::Padding(0);
            this->downloads_container_header_->Name = L"downloads_container_header_";
            this->downloads_container_header_->Size = System::Drawing::Size(350, 75);
            this->downloads_container_header_->TabIndex = 9;
            // 
            // downloads_container_title_
            // 
            this->downloads_container_title_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20, System::Drawing::FontStyle::Bold));
            this->downloads_container_title_->ForeColor = System::Drawing::Color::White;
            this->downloads_container_title_->Location = System::Drawing::Point(15, 15);
            this->downloads_container_title_->Margin = System::Windows::Forms::Padding(0);
            this->downloads_container_title_->Name = L"downloads_container_title_";
            this->downloads_container_title_->Size = System::Drawing::Size(250, 45);
            this->downloads_container_title_->TabIndex = 1;
            this->downloads_container_title_->Text = L"DOWNLOADS";
            this->downloads_container_title_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // downloads_icon_
            // 
            this->downloads_icon_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"downloads_icon_.Image")));
            this->downloads_icon_->Location = System::Drawing::Point(50, 90);
            this->downloads_icon_->Margin = System::Windows::Forms::Padding(0);
            this->downloads_icon_->Name = L"downloads_icon_";
            this->downloads_icon_->Size = System::Drawing::Size(250, 145);
            this->downloads_icon_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->downloads_icon_->TabIndex = 0;
            this->downloads_icon_->TabStop = false;
            this->downloads_icon_->Click += gcnew System::EventHandler(this, &Dashboard::DownloadsIconOnclick);
            // 
            // visitor_flow_container_
            // 
            this->visitor_flow_container_->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->visitor_flow_container_->Controls->Add(this->visitor_flow_container_info_);
            this->visitor_flow_container_->Controls->Add(this->visitor_flow_container_header_);
            this->visitor_flow_container_->Controls->Add(this->visitor_flow_icon_);
            this->visitor_flow_container_->Location = System::Drawing::Point(50, 450);
            this->visitor_flow_container_->Name = L"visitor_flow_container_";
            this->visitor_flow_container_->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->visitor_flow_container_->Size = System::Drawing::Size(350, 250);
            this->visitor_flow_container_->TabIndex = 8;
            // 
            // visitor_flow_container_info_
            // 
            this->visitor_flow_container_info_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10));
            this->visitor_flow_container_info_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->visitor_flow_container_info_->Location = System::Drawing::Point(190, 90);
            this->visitor_flow_container_info_->Margin = System::Windows::Forms::Padding(0);
            this->visitor_flow_container_info_->Name = L"visitor_flow_container_info_";
            this->visitor_flow_container_info_->Size = System::Drawing::Size(145, 145);
            this->visitor_flow_container_info_->TabIndex = 11;
            this->visitor_flow_container_info_->Text = L"Some Info will be placed here";
            this->visitor_flow_container_info_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // visitor_flow_container_header_
            // 
            this->visitor_flow_container_header_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->visitor_flow_container_header_->Controls->Add(this->visitor_flow_container_title_);
            this->visitor_flow_container_header_->Location = System::Drawing::Point(-1, -1);
            this->visitor_flow_container_header_->Name = L"visitor_flow_container_header_";
            this->visitor_flow_container_header_->Size = System::Drawing::Size(350, 75);
            this->visitor_flow_container_header_->TabIndex = 9;
            // 
            // visitor_flow_container_title_
            // 
            this->visitor_flow_container_title_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20, System::Drawing::FontStyle::Bold));
            this->visitor_flow_container_title_->ForeColor = System::Drawing::Color::White;
            this->visitor_flow_container_title_->Location = System::Drawing::Point(15, 15);
            this->visitor_flow_container_title_->Margin = System::Windows::Forms::Padding(0);
            this->visitor_flow_container_title_->Name = L"visitor_flow_container_title_";
            this->visitor_flow_container_title_->Size = System::Drawing::Size(250, 45);
            this->visitor_flow_container_title_->TabIndex = 2;
            this->visitor_flow_container_title_->Text = L"VISITOR FLOW";
            this->visitor_flow_container_title_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // visitor_flow_icon_
            // 
            this->visitor_flow_icon_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"visitor_flow_icon_.Image")));
            this->visitor_flow_icon_->Location = System::Drawing::Point(15, 90);
            this->visitor_flow_icon_->Margin = System::Windows::Forms::Padding(0);
            this->visitor_flow_icon_->Name = L"visitor_flow_icon_";
            this->visitor_flow_icon_->Size = System::Drawing::Size(145, 145);
            this->visitor_flow_icon_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->visitor_flow_icon_->TabIndex = 10;
            this->visitor_flow_icon_->TabStop = false;
            // 
            // income_container_
            // 
            this->income_container_->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->income_container_->Controls->Add(this->income_container_info_);
            this->income_container_->Controls->Add(this->currency_icon_);
            this->income_container_->Controls->Add(this->income_);
            this->income_container_->Controls->Add(this->income_icon_);
            this->income_container_->Controls->Add(this->income_container_header_);
            this->income_container_->Location = System::Drawing::Point(50, 170);
            this->income_container_->Margin = System::Windows::Forms::Padding(0);
            this->income_container_->Name = L"income_container_";
            this->income_container_->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->income_container_->Size = System::Drawing::Size(350, 250);
            this->income_container_->TabIndex = 7;
            // 
            // income_container_info_
            // 
            this->income_container_info_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10));
            this->income_container_info_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->income_container_info_->Location = System::Drawing::Point(15, 210);
            this->income_container_info_->Margin = System::Windows::Forms::Padding(0);
            this->income_container_info_->Name = L"income_container_info_";
            this->income_container_info_->Size = System::Drawing::Size(320, 25);
            this->income_container_info_->TabIndex = 10;
            this->income_container_info_->Text = L"Some Info will be placed here";
            this->income_container_info_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            //this->income_container_info_->Click += gcnew System::EventHandler(this, &Dashboard::label3_Click);
            // 
            // currency_icon_
            // 
            this->currency_icon_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 30, System::Drawing::FontStyle::Bold));
            this->currency_icon_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->currency_icon_->Location = System::Drawing::Point(15, 115);
            this->currency_icon_->Margin = System::Windows::Forms::Padding(0);
            this->currency_icon_->Name = L"currency_icon_";
            this->currency_icon_->Size = System::Drawing::Size(40, 55);
            this->currency_icon_->TabIndex = 9;
            this->currency_icon_->Text = L"$";
            this->currency_icon_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            //this->currency_icon_->Click += gcnew System::EventHandler(this, &Dashboard::label2_Click_1);
            // 
            // income_
            // 
            this->income_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->income_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->income_->Location = System::Drawing::Point(55, 85);
            this->income_->Margin = System::Windows::Forms::Padding(0);
            this->income_->Name = L"income_";
            this->income_->Size = System::Drawing::Size(140, 115);
            this->income_->TabIndex = 1;
            this->income_->Text = L"12353";
            this->income_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            //this->income_->Click += gcnew System::EventHandler(this, &Dashboard::label1_Click_1);
            // 
            // income_icon_
            // 
            this->income_icon_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"income_icon_.Image")));
            this->income_icon_->Location = System::Drawing::Point(215, 85);
            this->income_icon_->Name = L"income_icon_";
            this->income_icon_->Size = System::Drawing::Size(115, 115);
            this->income_icon_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->income_icon_->TabIndex = 3;
            this->income_icon_->TabStop = false;
            // 
            // income_container_header_
            // 
            this->income_container_header_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->income_container_header_->Controls->Add(this->income_container_title_);
            this->income_container_header_->Location = System::Drawing::Point(0, 0);
            this->income_container_header_->Margin = System::Windows::Forms::Padding(0);
            this->income_container_header_->Name = L"income_container_header_";
            this->income_container_header_->Size = System::Drawing::Size(350, 75);
            this->income_container_header_->TabIndex = 8;
            // 
            // income_container_title_
            // 
            this->income_container_title_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20, System::Drawing::FontStyle::Bold));
            this->income_container_title_->ForeColor = System::Drawing::Color::White;
            this->income_container_title_->Location = System::Drawing::Point(15, 15);
            this->income_container_title_->Margin = System::Windows::Forms::Padding(0);
            this->income_container_title_->Name = L"income_container_title_";
            this->income_container_title_->Size = System::Drawing::Size(250, 45);
            this->income_container_title_->TabIndex = 0;
            this->income_container_title_->Text = L"INCOME";
            this->income_container_title_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // analytics_tab_
            // 
            this->analytics_tab_->Controls->Add(this->analytics_header_);
            this->analytics_tab_->Location = System::Drawing::Point(250, 0);
            this->analytics_tab_->Name = L"analytics_tab_";
            this->analytics_tab_->Size = System::Drawing::Size(850, 750);
            this->analytics_tab_->TabIndex = 14;
            // 
            // analytics_header_
            // 
            this->analytics_header_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->analytics_header_->Controls->Add(this->analytics_header_title_);
            this->analytics_header_->Location = System::Drawing::Point(0, 0);
            this->analytics_header_->Name = L"analytics_header_";
            this->analytics_header_->Size = System::Drawing::Size(850, 120);
            this->analytics_header_->TabIndex = 12;
            // 
            // analytics_header_title_
            // 
            this->analytics_header_title_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 30, System::Drawing::FontStyle::Bold));
            this->analytics_header_title_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->analytics_header_title_->Location = System::Drawing::Point(35, 25);
            this->analytics_header_title_->Name = L"analytics_header_title_";
            this->analytics_header_title_->Size = System::Drawing::Size(350, 70);
            this->analytics_header_title_->TabIndex = 3;
            this->analytics_header_title_->Text = L"ANALYTICS";
            this->analytics_header_title_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // database_header_title_
            // 
            this->database_header_title_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 30, System::Drawing::FontStyle::Bold));
            this->database_header_title_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->database_header_title_->Location = System::Drawing::Point(35, 25);
            this->database_header_title_->Name = L"database_header_title_";
            this->database_header_title_->Size = System::Drawing::Size(350, 70);
            this->database_header_title_->TabIndex = 3;
            this->database_header_title_->Text = L"DATABASE";
            this->database_header_title_->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            // 
            // add_user_button_
            // 
            this->add_user_button_->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_user_button_.BackgroundImage")));
            this->add_user_button_->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->add_user_button_->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->add_user_button_->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->add_user_button_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->add_user_button_->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->add_user_button_->Location = System::Drawing::Point(730, 30);
            this->add_user_button_->Margin = System::Windows::Forms::Padding(0);
            this->add_user_button_->Name = L"add_user_button_";
            this->add_user_button_->Size = System::Drawing::Size(70, 60);
            this->add_user_button_->TabIndex = 2;
            this->add_user_button_->TextAlign = System::Drawing::ContentAlignment::TopRight;
            this->add_user_button_->UseVisualStyleBackColor = true;
            this->add_user_button_->Click += gcnew System::EventHandler(this, &Dashboard::AddUserButtonOnClick);
            // 
            // database_tab_
            // 
            this->database_tab_->AllowDrop = true;
            this->database_tab_->Controls->Add(this->database_grid_);
            this->database_tab_->Controls->Add(this->database_header_);
            this->database_tab_->Location = System::Drawing::Point(250, 0);
            this->database_tab_->Margin = System::Windows::Forms::Padding(0);
            this->database_tab_->Name = L"database_tab_";
            this->database_tab_->Padding = System::Windows::Forms::Padding(250, 0, 0, 0);
            this->database_tab_->Size = System::Drawing::Size(850, 750);
            this->database_tab_->TabIndex = 13;
            // 
            // database_grid_
            // 
            dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11));
            dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->database_grid_->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
            this->database_grid_->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->database_grid_->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->database_grid_->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedHorizontal;
            this->database_grid_->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
            dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
            dataGridViewCellStyle2->Padding = System::Windows::Forms::Padding(10, 15, 10, 15);
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->database_grid_->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
            this->database_grid_->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->database_grid_->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->database_name_column_,
                    this->database_group_column_, this->database_gender_column_, this->database_account_column_
            });
            dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
            dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
            dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11));
            dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
            dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->database_grid_->DefaultCellStyle = dataGridViewCellStyle3;
            this->database_grid_->EnableHeadersVisualStyles = false;
            this->database_grid_->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->database_grid_->Location = System::Drawing::Point(0, 120);
            this->database_grid_->Name = L"database_grid_";
            dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
            dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->database_grid_->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
            this->database_grid_->RowHeadersVisible = false;
            this->database_grid_->RowHeadersWidth = 62;
            dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->database_grid_->RowsDefaultCellStyle = dataGridViewCellStyle5;
            this->database_grid_->RowTemplate->Height = 40;
            this->database_grid_->Size = System::Drawing::Size(850, 630);
            this->database_grid_->TabIndex = 10;
            // 
            // database_name_column_
            // 
            this->database_name_column_->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->database_name_column_->FillWeight = 150;
            this->database_name_column_->HeaderText = L"NAME";
            this->database_name_column_->MinimumWidth = 8;
            this->database_name_column_->Name = L"database_name_column_";
            // 
            // database_group_column_
            // 
            this->database_group_column_->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->database_group_column_->FillWeight = 60;
            this->database_group_column_->HeaderText = L"GROUP";
            this->database_group_column_->MinimumWidth = 8;
            this->database_group_column_->Name = L"database_group_column_";
            // 
            // database_gender_column_
            // 
            this->database_gender_column_->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->database_gender_column_->FillWeight = 80;
            this->database_gender_column_->HeaderText = L"GENDER";
            this->database_gender_column_->MinimumWidth = 8;
            this->database_gender_column_->Name = L"database_gender_column_";
            // 
            // database_account_column_
            // 
            this->database_account_column_->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->database_account_column_->HeaderText = L"ACCOUNT";
            this->database_account_column_->MinimumWidth = 8;
            this->database_account_column_->Name = L"database_account_column_";
            // 
            // database_header_
            // 
            this->database_header_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->database_header_->Controls->Add(this->database_header_title_);
            this->database_header_->Controls->Add(this->add_user_button_);
            this->database_header_->Location = System::Drawing::Point(0, 0);
            this->database_header_->Name = L"database_header_";
            this->database_header_->Size = System::Drawing::Size(850, 120);
            this->database_header_->TabIndex = 12;
            // 
            // Dashboard
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->ClientSize = System::Drawing::Size(1099, 749);
            this->ControlBox = false;
            this->Controls->Add(this->left_panel_);
            this->Controls->Add(this->home_tab_);
            this->Controls->Add(this->analytics_tab_);
            this->Controls->Add(this->database_tab_);
            this->Name = L"Dashboard";
            this->Text = L"Dashboard";
            this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
            this->left_panel_->ResumeLayout(false);
            this->tabs_nav_->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->database_icon_))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->analytics_icon_))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->home_icon_))->EndInit();
            this->admin_info_->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->admin_avatar_))->EndInit();
            this->home_tab_->ResumeLayout(false);
            this->home_header_->ResumeLayout(false);
            this->home_header_->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_icon_))->EndInit();
            this->graphics_container_->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphics_icon_))->EndInit();
            this->graphics_container_header_->ResumeLayout(false);
            this->downloads_container_->ResumeLayout(false);
            this->downloads_container_header_->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->downloads_icon_))->EndInit();
            this->visitor_flow_container_->ResumeLayout(false);
            this->visitor_flow_container_header_->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->visitor_flow_icon_))->EndInit();
            this->income_container_->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->income_icon_))->EndInit();
            this->income_container_header_->ResumeLayout(false);
            this->analytics_tab_->ResumeLayout(false);
            this->analytics_header_->ResumeLayout(false);
            this->database_tab_->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->database_grid_))->EndInit();
            this->database_header_->ResumeLayout(false);
            this->ResumeLayout(false);
        }
        #pragma endregion


    private: 

        System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
        }

        System::Void HomeButtonOnClick(System::Object^ sender, System::EventArgs^ e) {
            database_tab_->Visible = false;
            analytics_tab_->Visible = false;
            home_tab_->Visible = true;
        }


        System::Void AnalyticsButtonOnClick(System::Object^ sender, System::EventArgs^ e) {
            database_tab_->Visible = false;
            analytics_tab_->Visible = true;
            home_tab_->Visible = false;
        }

        System::Void DatabaseButtonOnClick(System::Object^ sender, System::EventArgs^ e) {
            database_tab_->Visible = true;
            analytics_tab_->Visible = false;
            home_tab_->Visible = false;
        }

        System::Void AddUserButtonOnClick(System::Object^ sender, System::EventArgs^ e) {
            NewUserForm new_user_form;
            new_user_form.ShowDialog();
        }

        System::Void DownloadsIconOnclick(System::Object^ sender, System::EventArgs^ e) {
        }

        System::Void SearchTextboxTextChanged(System::Object^ sender, System::EventArgs^ e) {
        }

        System::Void SearchIconOnClick(System::Object^ sender, System::EventArgs^ e) {
        }
    };
} // namespace CafeteriaRecordSys
