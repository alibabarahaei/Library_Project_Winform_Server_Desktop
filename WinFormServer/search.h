#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace WinFormServer {

	/// <summary>
	/// Summary for search
	/// </summary>
	public ref class search : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^mainpanel;
		search(Panel ^mainpanel)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->mainpanel = mainpanel;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaPanel^ gunaPanel1;
	protected:
	private: Guna::UI::WinForms::GunaImageButton^ gunaImageButton1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton2;
	private: System::Windows::Forms::Panel^ panel1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: Guna::UI::WinForms::GunaPanel^ gunaPanel2;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox20;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox3;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox2;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Guna::UI::WinForms::GunaPanel^ gunaPanel3;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox16;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox15;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox5;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox4;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox14;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox13;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox12;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox11;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox10;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox6;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox7;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox8;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox9;
	private: Guna::UI::WinForms::GunaPanel^ gunaPanel4;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox19;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox18;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox17;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel3;
	private: Guna::UI::WinForms::GunaPanel^ gunaPanel5;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox5;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox4;
	private: Guna::UI::WinForms::GunaTrackBar^ gunaTrackBar2;
	private: Guna::UI::WinForms::GunaTrackBar^ gunaTrackBar1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel4;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox3;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox2;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox4;
	private: System::Windows::Forms::Panel^ panel3;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton4;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton3;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton1;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton2;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(search::typeid));
			this->gunaPanel1 = (gcnew Guna::UI::WinForms::GunaPanel());
			this->gunaImageButton1 = (gcnew Guna::UI::WinForms::GunaImageButton());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaButton1 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton2 = (gcnew Guna::UI::WinForms::GunaButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaPanel2 = (gcnew Guna::UI::WinForms::GunaPanel());
			this->gunaCheckBox20 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox3 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox2 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox1 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaPanel3 = (gcnew Guna::UI::WinForms::GunaPanel());
			this->gunaCheckBox16 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox15 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox5 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox4 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox14 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox13 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox12 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox11 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox10 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox6 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaCheckBox7 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox8 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox9 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaPanel4 = (gcnew Guna::UI::WinForms::GunaPanel());
			this->gunaCheckBox19 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox18 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox17 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaLabel3 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaPanel5 = (gcnew Guna::UI::WinForms::GunaPanel());
			this->gunaTextBox5 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox4 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTrackBar2 = (gcnew Guna::UI::WinForms::GunaTrackBar());
			this->gunaTrackBar1 = (gcnew Guna::UI::WinForms::GunaTrackBar());
			this->gunaLabel4 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaPictureBox3 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaPictureBox2 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaPictureBox4 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->gunaGradientButton3 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton1 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaCircleButton1 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaCircleButton2 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaSeparator2 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->gunaGradientButton4 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->gunaPanel2->SuspendLayout();
			this->gunaPanel3->SuspendLayout();
			this->gunaPanel4->SuspendLayout();
			this->gunaPanel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// gunaPanel1
			// 
			this->gunaPanel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->gunaPanel1->Controls->Add(this->gunaImageButton1);
			this->gunaPanel1->Controls->Add(this->gunaTextBox1);
			this->gunaPanel1->Location = System::Drawing::Point(11, 56);
			this->gunaPanel1->Name = L"gunaPanel1";
			this->gunaPanel1->Size = System::Drawing::Size(794, 103);
			this->gunaPanel1->TabIndex = 0;
			// 
			// gunaImageButton1
			// 
			this->gunaImageButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaImageButton1.BackgroundImage")));
			this->gunaImageButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaImageButton1->Image = nullptr;
			this->gunaImageButton1->ImageSize = System::Drawing::Size(64, 64);
			this->gunaImageButton1->Location = System::Drawing::Point(155, 25);
			this->gunaImageButton1->Name = L"gunaImageButton1";
			this->gunaImageButton1->OnHoverImage = nullptr;
			this->gunaImageButton1->OnHoverImageOffset = System::Drawing::Point(0, 0);
			this->gunaImageButton1->Size = System::Drawing::Size(58, 56);
			this->gunaImageButton1->TabIndex = 1;
			// 
			// gunaTextBox1
			// 
			this->gunaTextBox1->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox1->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox1->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox1->Location = System::Drawing::Point(209, 25);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(388, 56);
			this->gunaTextBox1->TabIndex = 0;
			this->gunaTextBox1->Text = L"...جستجو کتاب";
			this->gunaTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// gunaButton1
			// 
			this->gunaButton1->AnimationHoverSpeed = 0.07F;
			this->gunaButton1->AnimationSpeed = 0.03F;
			this->gunaButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaButton1->ForeColor = System::Drawing::Color::White;
			this->gunaButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton1.Image")));
			this->gunaButton1->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton1->Location = System::Drawing::Point(658, 0);
			this->gunaButton1->Name = L"gunaButton1";
			this->gunaButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton1->OnHoverImage = nullptr;
			this->gunaButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton1->Size = System::Drawing::Size(136, 45);
			this->gunaButton1->TabIndex = 1;
			this->gunaButton1->Text = L"نویسنده";
			this->gunaButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaButton2
			// 
			this->gunaButton2->AnimationHoverSpeed = 0.07F;
			this->gunaButton2->AnimationSpeed = 0.03F;
			this->gunaButton2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaButton2->ForeColor = System::Drawing::Color::White;
			this->gunaButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton2.Image")));
			this->gunaButton2->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton2->Location = System::Drawing::Point(658, 51);
			this->gunaButton2->Name = L"gunaButton2";
			this->gunaButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton2->OnHoverImage = nullptr;
			this->gunaButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton2->Size = System::Drawing::Size(134, 49);
			this->gunaButton2->TabIndex = 2;
			this->gunaButton2->Text = L"کتاب";
			this->gunaButton2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->gunaTextBox3);
			this->panel1->Controls->Add(this->gunaTextBox2);
			this->panel1->Controls->Add(this->gunaButton1);
			this->panel1->Controls->Add(this->gunaButton2);
			this->panel1->Location = System::Drawing::Point(12, 177);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(793, 100);
			this->panel1->TabIndex = 3;
			// 
			// gunaTextBox3
			// 
			this->gunaTextBox3->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox3->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox3->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox3->Location = System::Drawing::Point(0, 51);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(649, 49);
			this->gunaTextBox3->TabIndex = 4;
			this->gunaTextBox3->Text = L"...جستجو";
			this->gunaTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// gunaTextBox2
			// 
			this->gunaTextBox2->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox2->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox2->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox2->Location = System::Drawing::Point(0, 0);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(649, 45);
			this->gunaTextBox2->TabIndex = 3;
			this->gunaTextBox2->Text = L"...جستجو";
			this->gunaTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// gunaPanel2
			// 
			this->gunaPanel2->Controls->Add(this->gunaCheckBox20);
			this->gunaPanel2->Controls->Add(this->gunaCheckBox3);
			this->gunaPanel2->Controls->Add(this->gunaCheckBox2);
			this->gunaPanel2->Controls->Add(this->gunaCheckBox1);
			this->gunaPanel2->Controls->Add(this->gunaLabel1);
			this->gunaPanel2->Location = System::Drawing::Point(12, 283);
			this->gunaPanel2->Name = L"gunaPanel2";
			this->gunaPanel2->Size = System::Drawing::Size(794, 45);
			this->gunaPanel2->TabIndex = 4;
			// 
			// gunaCheckBox20
			// 
			this->gunaCheckBox20->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox20->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox20->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox20->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox20->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox20->Location = System::Drawing::Point(77, 12);
			this->gunaCheckBox20->Name = L"gunaCheckBox20";
			this->gunaCheckBox20->Size = System::Drawing::Size(55, 20);
			this->gunaCheckBox20->TabIndex = 4;
			this->gunaCheckBox20->Text = L"عربی";
			this->gunaCheckBox20->Click += gcnew System::EventHandler(this, &search::gunaCheckBox20_Click);
			// 
			// gunaCheckBox3
			// 
			this->gunaCheckBox3->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox3->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox3->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox3->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox3->Location = System::Drawing::Point(266, 12);
			this->gunaCheckBox3->Name = L"gunaCheckBox3";
			this->gunaCheckBox3->Size = System::Drawing::Size(64, 20);
			this->gunaCheckBox3->TabIndex = 3;
			this->gunaCheckBox3->Text = L"انگلیسی";
			this->gunaCheckBox3->Click += gcnew System::EventHandler(this, &search::gunaCheckBox3_Click);
			// 
			// gunaCheckBox2
			// 
			this->gunaCheckBox2->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox2->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox2->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox2->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox2->Location = System::Drawing::Point(417, 12);
			this->gunaCheckBox2->Name = L"gunaCheckBox2";
			this->gunaCheckBox2->Size = System::Drawing::Size(60, 20);
			this->gunaCheckBox2->TabIndex = 2;
			this->gunaCheckBox2->Text = L"فارسی";
			this->gunaCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &search::gunaCheckBox2_CheckedChanged);
			// 
			// gunaCheckBox1
			// 
			this->gunaCheckBox1->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox1->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox1->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox1->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox1->Location = System::Drawing::Point(586, 12);
			this->gunaCheckBox1->Name = L"gunaCheckBox1";
			this->gunaCheckBox1->Size = System::Drawing::Size(47, 20);
			this->gunaCheckBox1->TabIndex = 1;
			this->gunaCheckBox1->Text = L"همه";
			this->gunaCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &search::gunaCheckBox1_CheckedChanged);
			this->gunaCheckBox1->Click += gcnew System::EventHandler(this, &search::gunaCheckBox1_Click);
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel1->Location = System::Drawing::Point(737, 2);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(45, 32);
			this->gunaLabel1->TabIndex = 0;
			this->gunaLabel1->Text = L"زبان";
			// 
			// gunaPanel3
			// 
			this->gunaPanel3->Controls->Add(this->gunaCheckBox16);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox15);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox5);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox4);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox14);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox13);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox12);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox11);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox10);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox6);
			this->gunaPanel3->Controls->Add(this->gunaLabel2);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox7);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox8);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox9);
			this->gunaPanel3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaPanel3->Location = System::Drawing::Point(12, 334);
			this->gunaPanel3->Name = L"gunaPanel3";
			this->gunaPanel3->Size = System::Drawing::Size(794, 147);
			this->gunaPanel3->TabIndex = 5;
			// 
			// gunaCheckBox16
			// 
			this->gunaCheckBox16->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox16->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox16->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox16->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox16->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox16->Location = System::Drawing::Point(55, 89);
			this->gunaCheckBox16->Name = L"gunaCheckBox16";
			this->gunaCheckBox16->Size = System::Drawing::Size(51, 20);
			this->gunaCheckBox16->TabIndex = 17;
			this->gunaCheckBox16->Text = L"سایر";
			this->gunaCheckBox16->CheckedChanged += gcnew System::EventHandler(this, &search::gunaCheckBox16_CheckedChanged);
			this->gunaCheckBox16->Click += gcnew System::EventHandler(this, &search::gunaCheckBox16_Click);
			// 
			// gunaCheckBox15
			// 
			this->gunaCheckBox15->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox15->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox15->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox15->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox15->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox15->Location = System::Drawing::Point(236, 91);
			this->gunaCheckBox15->Name = L"gunaCheckBox15";
			this->gunaCheckBox15->Size = System::Drawing::Size(63, 20);
			this->gunaCheckBox15->TabIndex = 16;
			this->gunaCheckBox15->Text = L"ترسناک";
			this->gunaCheckBox15->Click += gcnew System::EventHandler(this, &search::gunaCheckBox15_Click);
			// 
			// gunaCheckBox5
			// 
			this->gunaCheckBox5->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox5->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox5->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox5->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox5->Location = System::Drawing::Point(643, 39);
			this->gunaCheckBox5->Name = L"gunaCheckBox5";
			this->gunaCheckBox5->Size = System::Drawing::Size(54, 20);
			this->gunaCheckBox5->TabIndex = 6;
			this->gunaCheckBox5->Text = L"کمدی";
			this->gunaCheckBox5->CheckedChanged += gcnew System::EventHandler(this, &search::gunaCheckBox5_CheckedChanged);
			this->gunaCheckBox5->Click += gcnew System::EventHandler(this, &search::gunaCheckBox5_Click);
			// 
			// gunaCheckBox4
			// 
			this->gunaCheckBox4->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox4->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox4->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox4->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox4->Location = System::Drawing::Point(586, 16);
			this->gunaCheckBox4->Name = L"gunaCheckBox4";
			this->gunaCheckBox4->Size = System::Drawing::Size(47, 20);
			this->gunaCheckBox4->TabIndex = 5;
			this->gunaCheckBox4->Text = L"همه";
			this->gunaCheckBox4->CheckedChanged += gcnew System::EventHandler(this, &search::gunaCheckBox4_CheckedChanged);
			this->gunaCheckBox4->Click += gcnew System::EventHandler(this, &search::gunaCheckBox4_Click);
			// 
			// gunaCheckBox14
			// 
			this->gunaCheckBox14->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox14->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox14->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox14->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox14->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox14->Location = System::Drawing::Point(424, 89);
			this->gunaCheckBox14->Name = L"gunaCheckBox14";
			this->gunaCheckBox14->Size = System::Drawing::Size(78, 20);
			this->gunaCheckBox14->TabIndex = 15;
			this->gunaCheckBox14->Text = L"زندگی نامه";
			this->gunaCheckBox14->Click += gcnew System::EventHandler(this, &search::gunaCheckBox14_Click);
			// 
			// gunaCheckBox13
			// 
			this->gunaCheckBox13->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox13->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox13->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox13->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox13->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox13->Location = System::Drawing::Point(643, 89);
			this->gunaCheckBox13->Name = L"gunaCheckBox13";
			this->gunaCheckBox13->Size = System::Drawing::Size(51, 20);
			this->gunaCheckBox13->TabIndex = 14;
			this->gunaCheckBox13->Text = L"مقاله";
			this->gunaCheckBox13->Click += gcnew System::EventHandler(this, &search::gunaCheckBox13_Click);
			// 
			// gunaCheckBox12
			// 
			this->gunaCheckBox12->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox12->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox12->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox12->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox12->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox12->Location = System::Drawing::Point(55, 63);
			this->gunaCheckBox12->Name = L"gunaCheckBox12";
			this->gunaCheckBox12->Size = System::Drawing::Size(59, 20);
			this->gunaCheckBox12->TabIndex = 13;
			this->gunaCheckBox12->Text = L"فانتزی";
			this->gunaCheckBox12->Click += gcnew System::EventHandler(this, &search::gunaCheckBox12_Click);
			// 
			// gunaCheckBox11
			// 
			this->gunaCheckBox11->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox11->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox11->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox11->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox11->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox11->Location = System::Drawing::Point(236, 65);
			this->gunaCheckBox11->Name = L"gunaCheckBox11";
			this->gunaCheckBox11->Size = System::Drawing::Size(64, 20);
			this->gunaCheckBox11->TabIndex = 12;
			this->gunaCheckBox11->Text = L"عاشقانه";
			this->gunaCheckBox11->Click += gcnew System::EventHandler(this, &search::gunaCheckBox11_Click);
			// 
			// gunaCheckBox10
			// 
			this->gunaCheckBox10->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox10->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox10->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox10->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox10->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox10->Location = System::Drawing::Point(424, 56);
			this->gunaCheckBox10->Name = L"gunaCheckBox10";
			this->gunaCheckBox10->Size = System::Drawing::Size(66, 29);
			this->gunaCheckBox10->TabIndex = 11;
			this->gunaCheckBox10->Text = L"کمیک";
			this->gunaCheckBox10->Click += gcnew System::EventHandler(this, &search::gunaCheckBox10_Click);
			// 
			// gunaCheckBox6
			// 
			this->gunaCheckBox6->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox6->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox6->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox6->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox6->Location = System::Drawing::Point(424, 30);
			this->gunaCheckBox6->Name = L"gunaCheckBox6";
			this->gunaCheckBox6->Size = System::Drawing::Size(98, 29);
			this->gunaCheckBox6->TabIndex = 7;
			this->gunaCheckBox6->Text = L"علمی تخیلی";
			this->gunaCheckBox6->Click += gcnew System::EventHandler(this, &search::gunaCheckBox6_Click);
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel2->Location = System::Drawing::Point(663, 7);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(128, 29);
			this->gunaLabel2->TabIndex = 4;
			this->gunaLabel2->Text = L"دسته بندی موضوع";
			// 
			// gunaCheckBox7
			// 
			this->gunaCheckBox7->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox7->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox7->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox7->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox7->Location = System::Drawing::Point(236, 39);
			this->gunaCheckBox7->Name = L"gunaCheckBox7";
			this->gunaCheckBox7->Size = System::Drawing::Size(57, 20);
			this->gunaCheckBox7->TabIndex = 8;
			this->gunaCheckBox7->Text = L"مذهبی";
			this->gunaCheckBox7->Click += gcnew System::EventHandler(this, &search::gunaCheckBox7_Click);
			// 
			// gunaCheckBox8
			// 
			this->gunaCheckBox8->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox8->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox8->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox8->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox8->Location = System::Drawing::Point(55, 39);
			this->gunaCheckBox8->Name = L"gunaCheckBox8";
			this->gunaCheckBox8->Size = System::Drawing::Size(57, 20);
			this->gunaCheckBox8->TabIndex = 9;
			this->gunaCheckBox8->Text = L"درسی";
			this->gunaCheckBox8->Click += gcnew System::EventHandler(this, &search::gunaCheckBox8_Click);
			// 
			// gunaCheckBox9
			// 
			this->gunaCheckBox9->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox9->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox9->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox9->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox9->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox9->Location = System::Drawing::Point(643, 65);
			this->gunaCheckBox9->Name = L"gunaCheckBox9";
			this->gunaCheckBox9->Size = System::Drawing::Size(62, 20);
			this->gunaCheckBox9->TabIndex = 10;
			this->gunaCheckBox9->Text = L"تاریخی";
			this->gunaCheckBox9->Click += gcnew System::EventHandler(this, &search::gunaCheckBox9_Click);
			// 
			// gunaPanel4
			// 
			this->gunaPanel4->Controls->Add(this->gunaCheckBox19);
			this->gunaPanel4->Controls->Add(this->gunaCheckBox18);
			this->gunaPanel4->Controls->Add(this->gunaCheckBox17);
			this->gunaPanel4->Controls->Add(this->gunaLabel3);
			this->gunaPanel4->Location = System::Drawing::Point(12, 487);
			this->gunaPanel4->Name = L"gunaPanel4";
			this->gunaPanel4->Size = System::Drawing::Size(794, 49);
			this->gunaPanel4->TabIndex = 6;
			// 
			// gunaCheckBox19
			// 
			this->gunaCheckBox19->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox19->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox19->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox19->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox19->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox19->Location = System::Drawing::Point(80, 10);
			this->gunaCheckBox19->Name = L"gunaCheckBox19";
			this->gunaCheckBox19->Size = System::Drawing::Size(59, 29);
			this->gunaCheckBox19->TabIndex = 8;
			this->gunaCheckBox19->Text = L"چاپی";
			this->gunaCheckBox19->Click += gcnew System::EventHandler(this, &search::gunaCheckBox19_Click);
			// 
			// gunaCheckBox18
			// 
			this->gunaCheckBox18->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox18->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox18->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox18->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox18->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox18->Location = System::Drawing::Point(344, 9);
			this->gunaCheckBox18->Name = L"gunaCheckBox18";
			this->gunaCheckBox18->Size = System::Drawing::Size(80, 29);
			this->gunaCheckBox18->TabIndex = 7;
			this->gunaCheckBox18->Text = L"دیجیتالی";
			this->gunaCheckBox18->Click += gcnew System::EventHandler(this, &search::gunaCheckBox18_Click);
			// 
			// gunaCheckBox17
			// 
			this->gunaCheckBox17->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox17->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox17->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox17->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox17->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox17->Location = System::Drawing::Point(586, 9);
			this->gunaCheckBox17->Name = L"gunaCheckBox17";
			this->gunaCheckBox17->Size = System::Drawing::Size(54, 29);
			this->gunaCheckBox17->TabIndex = 6;
			this->gunaCheckBox17->Text = L"همه";
			this->gunaCheckBox17->Click += gcnew System::EventHandler(this, &search::gunaCheckBox17_Click);
			// 
			// gunaLabel3
			// 
			this->gunaLabel3->AutoSize = true;
			this->gunaLabel3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel3->Location = System::Drawing::Point(697, 7);
			this->gunaLabel3->Name = L"gunaLabel3";
			this->gunaLabel3->Size = System::Drawing::Size(80, 32);
			this->gunaLabel3->TabIndex = 5;
			this->gunaLabel3->Text = L"نوع کتاب";
			// 
			// gunaPanel5
			// 
			this->gunaPanel5->Controls->Add(this->gunaTextBox5);
			this->gunaPanel5->Controls->Add(this->gunaTextBox4);
			this->gunaPanel5->Controls->Add(this->gunaTrackBar2);
			this->gunaPanel5->Controls->Add(this->gunaTrackBar1);
			this->gunaPanel5->Controls->Add(this->gunaLabel4);
			this->gunaPanel5->Location = System::Drawing::Point(12, 542);
			this->gunaPanel5->Name = L"gunaPanel5";
			this->gunaPanel5->Size = System::Drawing::Size(792, 163);
			this->gunaPanel5->TabIndex = 7;
			// 
			// gunaTextBox5
			// 
			this->gunaTextBox5->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox5->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox5->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox5->Location = System::Drawing::Point(38, 90);
			this->gunaTextBox5->Name = L"gunaTextBox5";
			this->gunaTextBox5->PasswordChar = '\0';
			this->gunaTextBox5->SelectedText = L"";
			this->gunaTextBox5->Size = System::Drawing::Size(687, 33);
			this->gunaTextBox5->TabIndex = 10;
			this->gunaTextBox5->Text = L"999";
			this->gunaTextBox5->TextChanged += gcnew System::EventHandler(this, &search::gunaTextBox5_TextChanged);
			// 
			// gunaTextBox4
			// 
			this->gunaTextBox4->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox4->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox4->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox4->Location = System::Drawing::Point(38, 23);
			this->gunaTextBox4->Name = L"gunaTextBox4";
			this->gunaTextBox4->PasswordChar = '\0';
			this->gunaTextBox4->SelectedText = L"";
			this->gunaTextBox4->Size = System::Drawing::Size(687, 33);
			this->gunaTextBox4->TabIndex = 9;
			this->gunaTextBox4->Text = L"0";
			this->gunaTextBox4->TextChanged += gcnew System::EventHandler(this, &search::gunaTextBox4_TextChanged);
			// 
			// gunaTrackBar2
			// 
			this->gunaTrackBar2->Location = System::Drawing::Point(38, 128);
			this->gunaTrackBar2->Maximum = 100000;
			this->gunaTrackBar2->Name = L"gunaTrackBar2";
			this->gunaTrackBar2->Size = System::Drawing::Size(685, 23);
			this->gunaTrackBar2->TabIndex = 8;
			this->gunaTrackBar2->TrackColor = System::Drawing::Color::DimGray;
			this->gunaTrackBar2->TrackHoverColor = System::Drawing::Color::Gray;
			this->gunaTrackBar2->TrackIdleColor = System::Drawing::Color::Silver;
			this->gunaTrackBar2->TrackPressedColor = System::Drawing::Color::Black;
			this->gunaTrackBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &search::gunaTrackBar2_Scroll);
			// 
			// gunaTrackBar1
			// 
			this->gunaTrackBar1->Location = System::Drawing::Point(38, 61);
			this->gunaTrackBar1->Maximum = 100000;
			this->gunaTrackBar1->Name = L"gunaTrackBar1";
			this->gunaTrackBar1->Size = System::Drawing::Size(685, 23);
			this->gunaTrackBar1->TabIndex = 7;
			this->gunaTrackBar1->TrackColor = System::Drawing::Color::DimGray;
			this->gunaTrackBar1->TrackHoverColor = System::Drawing::Color::Gray;
			this->gunaTrackBar1->TrackIdleColor = System::Drawing::Color::Silver;
			this->gunaTrackBar1->TrackPressedColor = System::Drawing::Color::Black;
			this->gunaTrackBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &search::gunaTrackBar1_Scroll);
			// 
			// gunaLabel4
			// 
			this->gunaLabel4->AutoSize = true;
			this->gunaLabel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel4->Location = System::Drawing::Point(732, 23);
			this->gunaLabel4->Name = L"gunaLabel4";
			this->gunaLabel4->Size = System::Drawing::Size(45, 20);
			this->gunaLabel4->TabIndex = 6;
			this->gunaLabel4->Text = L"قیمت";
			// 
			// gunaPictureBox3
			// 
			this->gunaPictureBox3->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox3.Image")));
			this->gunaPictureBox3->Location = System::Drawing::Point(822, 2);
			this->gunaPictureBox3->Name = L"gunaPictureBox3";
			this->gunaPictureBox3->Size = System::Drawing::Size(77, 48);
			this->gunaPictureBox3->TabIndex = 26;
			this->gunaPictureBox3->TabStop = false;
			// 
			// gunaPictureBox2
			// 
			this->gunaPictureBox2->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox2.Image")));
			this->gunaPictureBox2->Location = System::Drawing::Point(905, 2);
			this->gunaPictureBox2->Name = L"gunaPictureBox2";
			this->gunaPictureBox2->Size = System::Drawing::Size(51, 48);
			this->gunaPictureBox2->TabIndex = 25;
			this->gunaPictureBox2->TabStop = false;
			// 
			// gunaPictureBox4
			// 
			this->gunaPictureBox4->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox4.Image")));
			this->gunaPictureBox4->Location = System::Drawing::Point(964, 2);
			this->gunaPictureBox4->Name = L"gunaPictureBox4";
			this->gunaPictureBox4->Size = System::Drawing::Size(51, 48);
			this->gunaPictureBox4->TabIndex = 24;
			this->gunaPictureBox4->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->panel3->Controls->Add(this->gunaGradientButton4);
			this->panel3->Controls->Add(this->gunaGradientButton3);
			this->panel3->Controls->Add(this->gunaGradientButton1);
			this->panel3->Controls->Add(this->gunaGradientButton2);
			this->panel3->Controls->Add(this->gunaCircleButton1);
			this->panel3->Controls->Add(this->gunaCircleButton2);
			this->panel3->Controls->Add(this->gunaSeparator2);
			this->panel3->Location = System::Drawing::Point(811, 166);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(213, 558);
			this->panel3->TabIndex = 23;
			// 
			// gunaGradientButton3
			// 
			this->gunaGradientButton3->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton3->AnimationSpeed = 0.03F;
			this->gunaGradientButton3->BaseColor1 = System::Drawing::Color::MediumBlue;
			this->gunaGradientButton3->BaseColor2 = System::Drawing::Color::Black;
			this->gunaGradientButton3->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton3->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton3.Image")));
			this->gunaGradientButton3->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton3->ImageSize = System::Drawing::Size(50, 50);
			this->gunaGradientButton3->Location = System::Drawing::Point(0, 191);
			this->gunaGradientButton3->Name = L"gunaGradientButton3";
			this->gunaGradientButton3->OnHoverBaseColor1 = System::Drawing::Color::DarkBlue;
			this->gunaGradientButton3->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->OnHoverImage = nullptr;
			this->gunaGradientButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->Size = System::Drawing::Size(213, 94);
			this->gunaGradientButton3->TabIndex = 13;
			this->gunaGradientButton3->Text = L"تنظیمات";
			// 
			// gunaGradientButton1
			// 
			this->gunaGradientButton1->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton1->AnimationSpeed = 0.03F;
			this->gunaGradientButton1->BaseColor1 = System::Drawing::Color::MediumBlue;
			this->gunaGradientButton1->BaseColor2 = System::Drawing::Color::Black;
			this->gunaGradientButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton1->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton1.Image")));
			this->gunaGradientButton1->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton1->ImageSize = System::Drawing::Size(50, 50);
			this->gunaGradientButton1->Location = System::Drawing::Point(1, 95);
			this->gunaGradientButton1->Name = L"gunaGradientButton1";
			this->gunaGradientButton1->OnHoverBaseColor1 = System::Drawing::Color::DarkBlue;
			this->gunaGradientButton1->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton1->OnHoverImage = nullptr;
			this->gunaGradientButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->Size = System::Drawing::Size(214, 90);
			this->gunaGradientButton1->TabIndex = 12;
			this->gunaGradientButton1->Text = L"تغییر کتاب";
			// 
			// gunaGradientButton2
			// 
			this->gunaGradientButton2->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton2->AnimationSpeed = 0.03F;
			this->gunaGradientButton2->BaseColor1 = System::Drawing::Color::MediumBlue;
			this->gunaGradientButton2->BaseColor2 = System::Drawing::Color::Black;
			this->gunaGradientButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton2->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton2.Image")));
			this->gunaGradientButton2->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton2->ImageSize = System::Drawing::Size(50, 50);
			this->gunaGradientButton2->Location = System::Drawing::Point(1, 0);
			this->gunaGradientButton2->Name = L"gunaGradientButton2";
			this->gunaGradientButton2->OnHoverBaseColor1 = System::Drawing::Color::DarkBlue;
			this->gunaGradientButton2->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->OnHoverImage = nullptr;
			this->gunaGradientButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->Size = System::Drawing::Size(212, 89);
			this->gunaGradientButton2->TabIndex = 11;
			this->gunaGradientButton2->Text = L"ثبت کتاب";
			// 
			// gunaCircleButton1
			// 
			this->gunaCircleButton1->AnimationHoverSpeed = 0.07F;
			this->gunaCircleButton1->AnimationSpeed = 0.03F;
			this->gunaCircleButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton1.BackgroundImage")));
			this->gunaCircleButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaCircleButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->gunaCircleButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaCircleButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaCircleButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaCircleButton1->ForeColor = System::Drawing::Color::White;
			this->gunaCircleButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton1.Image")));
			this->gunaCircleButton1->ImageSize = System::Drawing::Size(25, 25);
			this->gunaCircleButton1->Location = System::Drawing::Point(4, 415);
			this->gunaCircleButton1->Margin = System::Windows::Forms::Padding(4);
			this->gunaCircleButton1->Name = L"gunaCircleButton1";
			this->gunaCircleButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaCircleButton1->OnHoverImage = nullptr;
			this->gunaCircleButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->Size = System::Drawing::Size(40, 37);
			this->gunaCircleButton1->TabIndex = 10;
			// 
			// gunaCircleButton2
			// 
			this->gunaCircleButton2->AnimationHoverSpeed = 0.07F;
			this->gunaCircleButton2->AnimationSpeed = 0.03F;
			this->gunaCircleButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton2.BackgroundImage")));
			this->gunaCircleButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaCircleButton2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->gunaCircleButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaCircleButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaCircleButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaCircleButton2->ForeColor = System::Drawing::Color::White;
			this->gunaCircleButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCircleButton2.Image")));
			this->gunaCircleButton2->ImageSize = System::Drawing::Size(25, 25);
			this->gunaCircleButton2->Location = System::Drawing::Point(163, 415);
			this->gunaCircleButton2->Margin = System::Windows::Forms::Padding(4);
			this->gunaCircleButton2->Name = L"gunaCircleButton2";
			this->gunaCircleButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaCircleButton2->OnHoverImage = nullptr;
			this->gunaCircleButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->Size = System::Drawing::Size(46, 37);
			this->gunaCircleButton2->TabIndex = 11;
			// 
			// gunaSeparator2
			// 
			this->gunaSeparator2->BackColor = System::Drawing::Color::Transparent;
			this->gunaSeparator2->LineColor = System::Drawing::Color::Blue;
			this->gunaSeparator2->Location = System::Drawing::Point(0, 425);
			this->gunaSeparator2->Margin = System::Windows::Forms::Padding(4);
			this->gunaSeparator2->Name = L"gunaSeparator2";
			this->gunaSeparator2->Size = System::Drawing::Size(155, 17);
			this->gunaSeparator2->TabIndex = 8;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->flowLayoutPanel1->Location = System::Drawing::Point(812, 56);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(214, 669);
			this->flowLayoutPanel1->TabIndex = 22;
			// 
			// gunaGradientButton4
			// 
			this->gunaGradientButton4->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton4->AnimationSpeed = 0.03F;
			this->gunaGradientButton4->BaseColor1 = System::Drawing::Color::MediumBlue;
			this->gunaGradientButton4->BaseColor2 = System::Drawing::Color::Black;
			this->gunaGradientButton4->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton4->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton4->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton4.Image")));
			this->gunaGradientButton4->ImageAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton4->ImageSize = System::Drawing::Size(50, 50);
			this->gunaGradientButton4->Location = System::Drawing::Point(0, 291);
			this->gunaGradientButton4->Name = L"gunaGradientButton4";
			this->gunaGradientButton4->OnHoverBaseColor1 = System::Drawing::Color::DarkBlue;
			this->gunaGradientButton4->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientButton4->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->OnHoverImage = nullptr;
			this->gunaGradientButton4->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->Size = System::Drawing::Size(213, 94);
			this->gunaGradientButton4->TabIndex = 14;
			this->gunaGradientButton4->Text = L"جستجو";
			// 
			// search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->gunaPictureBox3);
			this->Controls->Add(this->gunaPanel5);
			this->Controls->Add(this->gunaPanel4);
			this->Controls->Add(this->gunaPictureBox2);
			this->Controls->Add(this->gunaPanel3);
			this->Controls->Add(this->gunaPanel2);
			this->Controls->Add(this->gunaPictureBox4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->gunaPanel1);
			this->Name = L"search";
			this->Size = System::Drawing::Size(1024, 724);
			this->gunaPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->gunaPanel2->ResumeLayout(false);
			this->gunaPanel2->PerformLayout();
			this->gunaPanel3->ResumeLayout(false);
			this->gunaPanel3->PerformLayout();
			this->gunaPanel4->ResumeLayout(false);
			this->gunaPanel4->PerformLayout();
			this->gunaPanel5->ResumeLayout(false);
			this->gunaPanel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void check()
	{
		if (gunaCheckBox2->Checked == false || gunaCheckBox3->Checked == false || gunaCheckBox4->Checked == false)
		{
			gunaCheckBox1->Checked = false;
		}
		if (gunaCheckBox2->Checked == true && gunaCheckBox3->Checked == true && gunaCheckBox4->Checked == true)
		{
			gunaCheckBox1->Checked = true;
		}
	}
	private: System::Void gunaCheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void gunaCheckBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (gunaCheckBox1->Checked == true)
	{
		gunaCheckBox3->Checked = true;
		gunaCheckBox2->Checked = true;
		gunaCheckBox20->Checked = true;
	}
	else
	{
		gunaCheckBox3->Checked = false;
		gunaCheckBox2->Checked = false;
		gunaCheckBox20->Checked = false;
	}
}

private: System::Void gunaCheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	check();
}

private: System::Void gunaCheckBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	check();
}

private: System::Void gunaCheckBox20_Click(System::Object^ sender, System::EventArgs^ e) {
	check();
}
private: void check_Book()
{
	if (gunaCheckBox5->Checked == true && gunaCheckBox6->Checked == true && gunaCheckBox7->Checked == true && gunaCheckBox8->Checked == true && gunaCheckBox9->Checked == true && gunaCheckBox10->Checked == true && gunaCheckBox11->Checked == true && gunaCheckBox12->Checked == true && gunaCheckBox13->Checked == true && gunaCheckBox14->Checked == true && gunaCheckBox15->Checked == true && gunaCheckBox16->Checked == true)
	{
		gunaCheckBox4->Checked = true;
	}
	if (gunaCheckBox5->Checked == false || gunaCheckBox6->Checked == false || gunaCheckBox7->Checked == false || gunaCheckBox8->Checked == false || gunaCheckBox9->Checked == false || gunaCheckBox10->Checked == false || gunaCheckBox11->Checked == false || gunaCheckBox12->Checked == false || gunaCheckBox13->Checked == false || gunaCheckBox14->Checked == false || gunaCheckBox15->Checked == false || gunaCheckBox16->Checked == false)
	{
		gunaCheckBox4->Checked = false;
	}
}
private: System::Void gunaCheckBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaCheckBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (gunaCheckBox4->Checked == true)
	{
		gunaCheckBox5->Checked = true;
		gunaCheckBox6->Checked = true;
		gunaCheckBox7->Checked = true;
		gunaCheckBox8->Checked = true;
		gunaCheckBox9->Checked = true;
		gunaCheckBox10->Checked = true;
		gunaCheckBox11->Checked = true;
		gunaCheckBox12->Checked = true;
		gunaCheckBox13->Checked = true;
		gunaCheckBox14->Checked = true;
		gunaCheckBox15->Checked = true;
		gunaCheckBox16->Checked = true;
	}
	else
	{
		gunaCheckBox5->Checked = false;
		gunaCheckBox6->Checked = false;
		gunaCheckBox7->Checked = false;
		gunaCheckBox8->Checked = false;
		gunaCheckBox9->Checked = false;
		gunaCheckBox10->Checked = false;
		gunaCheckBox11->Checked = false;
		gunaCheckBox12->Checked = false;
		gunaCheckBox13->Checked = false;
		gunaCheckBox14->Checked = false;
		gunaCheckBox15->Checked = false;
		gunaCheckBox16->Checked = false;
	}
}
private: System::Void gunaCheckBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaCheckBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void gunaCheckBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void gunaCheckBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void gunaCheckBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void gunaCheckBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void gunaCheckBox10_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void gunaCheckBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void gunaCheckBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void gunaCheckBox13_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void gunaCheckBox14_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void gunaCheckBox15_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
private: System::Void gunaCheckBox16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaCheckBox16_Click(System::Object^ sender, System::EventArgs^ e) {
	check_Book();
}
	private:void check_type()
	{
		if (gunaCheckBox18->Checked == true && gunaCheckBox19->Checked == true)
		{
		   gunaCheckBox17->Checked = true;
		}
		if (gunaCheckBox18->Checked == false || gunaCheckBox19->Checked == false)
		{
			gunaCheckBox17->Checked = false;
		}
	}

private: System::Void gunaCheckBox17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (gunaCheckBox17->Checked == true)
	{
		gunaCheckBox18->Checked = true;
		gunaCheckBox19->Checked = true;
	}
	else
	{
		gunaCheckBox18->Checked = false;
		gunaCheckBox19->Checked = false;
	}
}

private: System::Void gunaCheckBox18_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type();
}
private: System::Void gunaCheckBox19_Click(System::Object^ sender, System::EventArgs^ e) {
	check_type();
}
private: System::Void gunaTrackBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	if (gunaTrackBar1->Value >= gunaTrackBar2->Value)
	{
		gunaTextBox5->Text = gunaTrackBar1->Value.ToString();
		gunaTrackBar2->Value = gunaTrackBar1->Value;
	}
}
private: System::Void gunaTrackBar2_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	gunaTextBox4->Text = gunaTrackBar1->Value.ToString();
	if (gunaTrackBar1->Value >= gunaTrackBar2->Value)
	{
		gunaTextBox5->Text = gunaTrackBar1->Value.ToString();
		gunaTrackBar2->Value = gunaTrackBar1->Value;
	}
	else
	{
		gunaTextBox5->Text = gunaTrackBar2->Value.ToString();
	}
}

private: System::Void gunaTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	double a;
	if (gunaTextBox4->Text == "")
	{
		//a = 0;
		gunaTextBox4->Text = "0";
	}
	System::String^ string_system = gunaTextBox4->Text;
	//std::string std_system = msclr::interop::marshal_as<std::string>(string_system);
	//a = Convert::ToDouble(string_system);
	a = Double::Parse(string_system);
	if (a >= 1000000)
	{
		a = 1000000;
	}
	gunaTrackBar1->Value = a;
	if (gunaTrackBar1->Value >= gunaTrackBar2->Value)
	{
		gunaTrackBar2->Value = gunaTrackBar1->Value;
		//PLtractbar->Value = PHtrackbar->Value;
	}
}

private: System::Void gunaTextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	double a;
	System::String^ string_system = gunaTextBox5->Text;
	a = Double::Parse(string_system);
	if (a >= 1000000)
	{
		a = 1000000;
	}
	gunaTrackBar2->Value = a;
	if (gunaTrackBar1->Value > gunaTrackBar2->Value)
	{
		gunaTrackBar2->Value = gunaTrackBar1->Value;
		a = gunaTrackBar1->Value;

	}
}
};
}
