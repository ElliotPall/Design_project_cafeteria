#pragma once

namespace CafeteriaProject {

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
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Button^ DatabaseButton;

    private: System::Windows::Forms::Button^ AnalyticsButton;

    private: System::Windows::Forms::Button^ HomeButton;








    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::Panel^ panel8;
    private: System::Windows::Forms::Panel^ panel9;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::PictureBox^ pictureBox8;

    private: System::Windows::Forms::Panel^ panel10;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::Panel^ panel11;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::PictureBox^ pictureBox10;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::Panel^ HomePannel;

    private: System::Windows::Forms::PictureBox^ pictureBox11;

    private: System::Windows::Forms::Panel^ DatabasePannel;
    private: System::Windows::Forms::TextBox^ DatabaseHeader;











    private: System::Windows::Forms::DataGridView^ dataGridView;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Group;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Gender;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Account;
    private: System::Windows::Forms::Panel^ DatabaseHeadGreayPanel;

    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Panel^ panel13;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::PictureBox^ pictureBox6;
    protected:
    protected:
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
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->DatabaseButton = (gcnew System::Windows::Forms::Button());
            this->AnalyticsButton = (gcnew System::Windows::Forms::Button());
            this->HomeButton = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->HomePannel = (gcnew System::Windows::Forms::Panel());
            this->panel13 = (gcnew System::Windows::Forms::Panel());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->DatabasePannel = (gcnew System::Windows::Forms::Panel());
            this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
            this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Group = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Account = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->DatabaseHeadGreayPanel = (gcnew System::Windows::Forms::Panel());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->DatabaseHeader = (gcnew System::Windows::Forms::TextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->panel1->SuspendLayout();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel2->SuspendLayout();
            this->HomePannel->SuspendLayout();
            this->panel13->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            this->panel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            this->panel11->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            this->panel6->SuspendLayout();
            this->panel7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            this->panel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->DatabasePannel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
            this->DatabaseHeadGreayPanel->SuspendLayout();
            this->SuspendLayout();
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button3->Location = System::Drawing::Point(0, 460);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(337, 71);
            this->button3->TabIndex = 4;
            this->button3->Text = L"Database";
            this->button3->UseVisualStyleBackColor = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(44, 385);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(46, 43);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 5;
            this->pictureBox3->TabStop = false;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->panel1->Controls->Add(this->panel3);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(294, 872);
            this->panel1->TabIndex = 0;
            // 
            // panel3
            // 
            this->panel3->Controls->Add(this->pictureBox5);
            this->panel3->Controls->Add(this->pictureBox4);
            this->panel3->Controls->Add(this->pictureBox2);
            this->panel3->Controls->Add(this->DatabaseButton);
            this->panel3->Controls->Add(this->AnalyticsButton);
            this->panel3->Controls->Add(this->HomeButton);
            this->panel3->Location = System::Drawing::Point(1, 228);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(292, 670);
            this->panel3->TabIndex = 1;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(30, 186);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(51, 50);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 5;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(30, 108);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(51, 50);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 4;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(30, 30);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(51, 50);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 3;
            this->pictureBox2->TabStop = false;
            // 
            // DatabaseButton
            // 
            this->DatabaseButton->FlatAppearance->BorderSize = 0;
            this->DatabaseButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->DatabaseButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->DatabaseButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->DatabaseButton->Location = System::Drawing::Point(9, 181);
            this->DatabaseButton->Name = L"DatabaseButton";
            this->DatabaseButton->Size = System::Drawing::Size(304, 59);
            this->DatabaseButton->TabIndex = 2;
            this->DatabaseButton->Text = L"Database";
            this->DatabaseButton->UseVisualStyleBackColor = true;
            this->DatabaseButton->Click += gcnew System::EventHandler(this, &Dashboard::button4_Click);
            // 
            // AnalyticsButton
            // 
            this->AnalyticsButton->FlatAppearance->BorderSize = 0;
            this->AnalyticsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->AnalyticsButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->AnalyticsButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->AnalyticsButton->Location = System::Drawing::Point(10, 104);
            this->AnalyticsButton->Name = L"AnalyticsButton";
            this->AnalyticsButton->Size = System::Drawing::Size(304, 59);
            this->AnalyticsButton->TabIndex = 1;
            this->AnalyticsButton->Text = L"Analytics";
            this->AnalyticsButton->UseVisualStyleBackColor = true;
            // 
            // HomeButton
            // 
            this->HomeButton->FlatAppearance->BorderSize = 0;
            this->HomeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->HomeButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->HomeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->HomeButton->Location = System::Drawing::Point(0, 27);
            this->HomeButton->Name = L"HomeButton";
            this->HomeButton->Size = System::Drawing::Size(286, 59);
            this->HomeButton->TabIndex = 0;
            this->HomeButton->Text = L"Home";
            this->HomeButton->UseVisualStyleBackColor = true;
            this->HomeButton->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->HomePannel);
            this->panel2->Controls->Add(this->textBox1);
            this->panel2->Controls->Add(this->pictureBox1);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(294, 228);
            this->panel2->TabIndex = 0;
            // 
            // HomePannel
            // 
            this->HomePannel->Controls->Add(this->panel13);
            this->HomePannel->Controls->Add(this->panel10);
            this->HomePannel->Controls->Add(this->panel8);
            this->HomePannel->Controls->Add(this->panel6);
            this->HomePannel->Controls->Add(this->panel4);
            this->HomePannel->Location = System::Drawing::Point(293, 1);
            this->HomePannel->Name = L"HomePannel";
            this->HomePannel->Size = System::Drawing::Size(946, 872);
            this->HomePannel->TabIndex = 12;
            this->HomePannel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::HomePannel_Paint);
            // 
            // panel13
            // 
            this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->panel13->Controls->Add(this->textBox2);
            this->panel13->Controls->Add(this->button5);
            this->panel13->Controls->Add(this->pictureBox6);
            this->panel13->Location = System::Drawing::Point(0, 0);
            this->panel13->Name = L"panel13";
            this->panel13->Size = System::Drawing::Size(946, 126);
            this->panel13->TabIndex = 13;
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20, System::Drawing::FontStyle::Bold));
            this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBox2->Location = System::Drawing::Point(48, 34);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(247, 54);
            this->textBox2->TabIndex = 1;
            this->textBox2->Text = L"Home";
            // 
            // button5
            // 
            this->button5->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->button5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10));
            this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button5->Location = System::Drawing::Point(658, 46);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(267, 42);
            this->button5->TabIndex = 5;
            this->button5->Text = L"Search";
            this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button5->UseVisualStyleBackColor = true;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(604, 47);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(40, 40);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox6->TabIndex = 6;
            this->pictureBox6->TabStop = false;
            // 
            // panel10
            // 
            this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel10->Controls->Add(this->pictureBox10);
            this->panel10->Controls->Add(this->textBox9);
            this->panel10->Controls->Add(this->panel11);
            this->panel10->Location = System::Drawing::Point(495, 442);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(361, 318);
            this->panel10->TabIndex = 11;
            // 
            // pictureBox10
            // 
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(32, 100);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(264, 152);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox10->TabIndex = 10;
            this->pictureBox10->TabStop = false;
            // 
            // textBox9
            // 
            this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10));
            this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBox9->Location = System::Drawing::Point(32, 268);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(139, 27);
            this->textBox9->TabIndex = 2;
            this->textBox9->Text = L"Info";
            // 
            // panel11
            // 
            this->panel11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->panel11->Controls->Add(this->textBox10);
            this->panel11->Location = System::Drawing::Point(-1, -1);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(361, 83);
            this->panel11->TabIndex = 9;
            // 
            // textBox10
            // 
            this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->textBox10->Location = System::Drawing::Point(25, 19);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(299, 48);
            this->textBox10->TabIndex = 0;
            this->textBox10->Text = L"Graphics";
            // 
            // panel8
            // 
            this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel8->Controls->Add(this->panel9);
            this->panel8->Controls->Add(this->pictureBox8);
            this->panel8->Location = System::Drawing::Point(495, 162);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(361, 237);
            this->panel8->TabIndex = 8;
            // 
            // panel9
            // 
            this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->panel9->Controls->Add(this->textBox7);
            this->panel9->Location = System::Drawing::Point(-1, -1);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(361, 83);
            this->panel9->TabIndex = 9;
            // 
            // textBox7
            // 
            this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->textBox7->Location = System::Drawing::Point(25, 18);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(330, 48);
            this->textBox7->TabIndex = 0;
            this->textBox7->Text = L"Download";
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(93, 113);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(155, 79);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox8->TabIndex = 0;
            this->pictureBox8->TabStop = false;
            // 
            // panel6
            // 
            this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel6->Controls->Add(this->textBox6);
            this->panel6->Controls->Add(this->panel7);
            this->panel6->Controls->Add(this->pictureBox7);
            this->panel6->Location = System::Drawing::Point(48, 442);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(363, 318);
            this->panel6->TabIndex = 8;
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10));
            this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBox6->Location = System::Drawing::Point(40, 268);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(139, 27);
            this->textBox6->TabIndex = 2;
            this->textBox6->Text = L"Info";
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->panel7->Controls->Add(this->textBox8);
            this->panel7->Location = System::Drawing::Point(-1, -1);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(363, 83);
            this->panel7->TabIndex = 9;
            // 
            // textBox8
            // 
            this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->textBox8->Location = System::Drawing::Point(25, 18);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(299, 48);
            this->textBox8->TabIndex = 0;
            this->textBox8->Text = L"Customers";
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(82, 100);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(182, 152);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox7->TabIndex = 10;
            this->pictureBox7->TabStop = false;
            // 
            // panel4
            // 
            this->panel4->Controls->Add(this->pictureBox11);
            this->panel4->Controls->Add(this->textBox4);
            this->panel4->Controls->Add(this->textBox11);
            this->panel4->Controls->Add(this->textBox5);
            this->panel4->Controls->Add(this->panel5);
            this->panel4->Location = System::Drawing::Point(48, 162);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(363, 237);
            this->panel4->TabIndex = 7;
            // 
            // pictureBox11
            // 
            this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
            this->pictureBox11->Location = System::Drawing::Point(212, 107);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(122, 109);
            this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox11->TabIndex = 3;
            this->pictureBox11->TabStop = false;
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBox4->Location = System::Drawing::Point(59, 108);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(147, 59);
            this->textBox4->TabIndex = 0;
            this->textBox4->Text = L"45561";
            this->textBox4->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox4_TextChanged);
            // 
            // textBox11
            // 
            this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBox11->Location = System::Drawing::Point(25, 108);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(38, 59);
            this->textBox11->TabIndex = 2;
            this->textBox11->Text = L"$";
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBox5->Location = System::Drawing::Point(41, 189);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(139, 27);
            this->textBox5->TabIndex = 1;
            this->textBox5->Text = L"Info";
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->panel5->Controls->Add(this->textBox3);
            this->panel5->Location = System::Drawing::Point(0, 0);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(363, 83);
            this->panel5->TabIndex = 8;
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->textBox3->Location = System::Drawing::Point(25, 18);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(319, 48);
            this->textBox3->TabIndex = 0;
            this->textBox3->Text = L"Earnings";
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI Semilight", 10));
            this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBox1->Location = System::Drawing::Point(63, 183);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(166, 27);
            this->textBox1->TabIndex = 1;
            this->textBox1->Text = L"Name/ID";
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(81, 34);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(131, 129);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // DatabasePannel
            // 
            this->DatabasePannel->Controls->Add(this->dataGridView);
            this->DatabasePannel->Controls->Add(this->DatabaseHeadGreayPanel);
            this->DatabasePannel->Location = System::Drawing::Point(294, 0);
            this->DatabasePannel->Name = L"DatabasePannel";
            this->DatabasePannel->Size = System::Drawing::Size(946, 872);
            this->DatabasePannel->TabIndex = 13;
            this->DatabasePannel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::DatabasePannel_Paint);
            // 
            // dataGridView
            // 
            dataGridViewCellStyle16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11));
            dataGridViewCellStyle16->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->dataGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle16;
            this->dataGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->dataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::RaisedHorizontal;
            this->dataGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
            dataGridViewCellStyle17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
            dataGridViewCellStyle17->Padding = System::Windows::Forms::Padding(10, 15, 10, 15);
            dataGridViewCellStyle17->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            dataGridViewCellStyle17->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle17;
            this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->Name, this->Group,
                    this->Gender, this->Account
            });
            dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
            dataGridViewCellStyle18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
            dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11));
            dataGridViewCellStyle18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            dataGridViewCellStyle18->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
            dataGridViewCellStyle18->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView->DefaultCellStyle = dataGridViewCellStyle18;
            this->dataGridView->EnableHeadersVisualStyles = false;
            this->dataGridView->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->dataGridView->Location = System::Drawing::Point(0, 126);
            this->dataGridView->Name = L"dataGridView";
            dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
            dataGridViewCellStyle19->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            dataGridViewCellStyle19->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            dataGridViewCellStyle19->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle19;
            this->dataGridView->RowHeadersVisible = false;
            this->dataGridView->RowHeadersWidth = 62;
            dataGridViewCellStyle20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->dataGridView->RowsDefaultCellStyle = dataGridViewCellStyle20;
            this->dataGridView->RowTemplate->Height = 40;
            this->dataGridView->Size = System::Drawing::Size(946, 654);
            this->dataGridView->TabIndex = 10;
            this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Dashboard::dataGridView1_CellContentClick_2);
            // 
            // Name
            // 
            this->Name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Name->FillWeight = 150;
            this->Name->HeaderText = L"Name";
            this->Name->MinimumWidth = 8;
            this->Name->Name = L"Name";
            // 
            // Group
            // 
            this->Group->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Group->FillWeight = 60;
            this->Group->HeaderText = L"Group";
            this->Group->MinimumWidth = 8;
            this->Group->Name = L"Group";
            // 
            // Gender
            // 
            this->Gender->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Gender->FillWeight = 80;
            this->Gender->HeaderText = L"Gender";
            this->Gender->MinimumWidth = 8;
            this->Gender->Name = L"Gender";
            // 
            // Account
            // 
            this->Account->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Account->HeaderText = L"Account";
            this->Account->MinimumWidth = 8;
            this->Account->Name = L"Account";
            // 
            // DatabaseHeadGreayPanel
            // 
            this->DatabaseHeadGreayPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->DatabaseHeadGreayPanel->Controls->Add(this->button6);
            this->DatabaseHeadGreayPanel->Controls->Add(this->DatabaseHeader);
            this->DatabaseHeadGreayPanel->Location = System::Drawing::Point(0, 1);
            this->DatabaseHeadGreayPanel->Name = L"DatabaseHeadGreayPanel";
            this->DatabaseHeadGreayPanel->Size = System::Drawing::Size(946, 126);
            this->DatabaseHeadGreayPanel->TabIndex = 12;
            this->DatabaseHeadGreayPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel12_Paint);
            // 
            // button6
            // 
            this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
            this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->button6->Location = System::Drawing::Point(751, 34);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(138, 60);
            this->button6->TabIndex = 2;
            this->button6->Text = L"Add";
            this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button6->UseVisualStyleBackColor = true;
            // 
            // DatabaseHeader
            // 
            this->DatabaseHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->DatabaseHeader->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->DatabaseHeader->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20, System::Drawing::FontStyle::Bold));
            this->DatabaseHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
                static_cast<System::Int32>(static_cast<System::Byte>(138)));
            this->DatabaseHeader->Location = System::Drawing::Point(66, 37);
            this->DatabaseHeader->Name = L"DatabaseHeader";
            this->DatabaseHeader->Size = System::Drawing::Size(247, 54);
            this->DatabaseHeader->TabIndex = 1;
            this->DatabaseHeader->Text = L"Database";
            // 
            // Dashboard
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->ClientSize = System::Drawing::Size(1240, 872);
            this->Controls->Add(this->DatabasePannel);
            this->Controls->Add(this->panel1);
            this->Name = L"Dashboard";
            this->Text = L"Dashboard";
            this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->HomePannel->ResumeLayout(false);
            this->panel13->ResumeLayout(false);
            this->panel13->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            this->panel11->ResumeLayout(false);
            this->panel11->PerformLayout();
            this->panel8->ResumeLayout(false);
            this->panel9->ResumeLayout(false);
            this->panel9->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->DatabasePannel->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
            this->DatabaseHeadGreayPanel->ResumeLayout(false);
            this->DatabaseHeadGreayPanel->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    }


    private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }


    private: System::Void HomePannel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    private: System::Void DatabasePannel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    private: System::Void dataGridView1_CellContentClick_2(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    private: System::Void panel12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void HomeButton_Click(System::Object^ sender, System::EventArgs^ e) {
        DatabaseHeader->Visible = false; // Hides the panel
    }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    DatabaseHeader->Visible = false;

}
}
};
}
/*{
    // Initialize the Form
    this.Text = "Table Grid Example";
    this.Size = new System.Drawing.Size(800, 600);

    // Initialize the DataGridView
    dataGridView = new DataGridView
    {
        Location = new System.Drawing.Point(10, 10),
        Size = new System.Drawing.Size(760, 540),
        AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill,

    };

    // Add columns to the DataGridView
    dataGridView.Columns.Add("Column1", "First Name");
    dataGridView.Columns.Add("Column2", "Last Name");
    dataGridView.Columns.Add("Column3", "Age");

    // Add some sample data
    dataGridView.Rows.Add("John", "Doe", "30");
    dataGridView.Rows.Add("Jane", "Smith", "25");
    dataGridView.Rows.Add("Sam", "Brown", "35");

    // Add the DataGridView to the Form
    this.Controls.Add(dataGridView);
}*/

//[STAThread]
/*static void Main()
{
    using namespace System;
    using namespace System::Windows::Forms;

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    CafeteriaProject::Dashboard dashboard;
    Application::Run(% dashboard);
}*/
    //}
//}
