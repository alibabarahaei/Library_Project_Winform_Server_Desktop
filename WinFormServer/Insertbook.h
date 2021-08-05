#pragma once

#include<string>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;
using namespace std;
using namespace System::Threading;

[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
IntPtr CreateObject_API();


[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
bool checknamebook(IntPtr db, wstring name);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void InsertProduct_API(IntPtr db, int id, wstring name, wstring filename, wstring bookdescription, wstring writer, wstring genre, wstring score, wstring price,wstring picturefilename);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void Set_Profile_Picture_API(IntPtr db, wstring path, wstring username);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
int GetUsernametRowId_API(IntPtr db,wstring username);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void KillObject_API(IntPtr db);











namespace WinFormServer {

	/// <summary>
	/// Summary for Insertbook
	/// </summary>
	public ref class Insertbook : public System::Windows::Forms::UserControl
	{
	public:

		
		

		IntPtr db;

		static int time = 0;
		Panel^ mainpanel;
		Panel^ Error_panel;
		Thread^ Browsfile;
		Thread^ browsepicture;
		String^ address_file;
		String^ address_picture;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Label^ label8;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox7;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: Guna::UI::WinForms::GunaButton^ gunaButton1;
	private: Guna::UI::WinForms::GunaComboBox^ gunaComboBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label9;
	private: Guna::UI::WinForms::GunaTransition^ gunaTransition1;
	private: System::Windows::Forms::Timer^ timer1;
	private: Guna::UI::WinForms::GunaVSeparator^ gunaVSeparator2;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator2;
	private: Guna::UI::WinForms::GunaVSeparator^ gunaVSeparator1;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator1;
	private: Guna::UI::WinForms::GunaImageCheckBox^ gunaImageCheckBox1;



	private: Guna::UI::WinForms::GunaMediumCheckBox^ gunaMediumCheckBox1;
	public:
	public:
		Label^ ErrorText_panel;
		Insertbook(Panel^c, IntPtr db_help)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			db = db_help;
			mainpanel = c;
			pictureBox1->ImageLocation = "..\\temp\\addbook.png";
	
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Insertbook()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox4;

	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox6;
	private: System::Windows::Forms::Label^ label7;


	private: Guna::UI::WinForms::GunaAdvenceButton^ gunaAdvenceButton1;
	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			Guna::UI::Animation::Animation^ animation2 = (gcnew Guna::UI::Animation::Animation());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Insertbook::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox4 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox6 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->gunaAdvenceButton1 = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->gunaTextBox7 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->gunaButton1 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaComboBox1 = (gcnew Guna::UI::WinForms::GunaComboBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->gunaTransition1 = (gcnew Guna::UI::WinForms::GunaTransition(this->components));
			this->gunaVSeparator2 = (gcnew Guna::UI::WinForms::GunaVSeparator());
			this->gunaSeparator2 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->gunaVSeparator1 = (gcnew Guna::UI::WinForms::GunaVSeparator());
			this->gunaSeparator1 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->gunaImageCheckBox1 = (gcnew Guna::UI::WinForms::GunaImageCheckBox());
			this->gunaMediumCheckBox1 = (gcnew Guna::UI::WinForms::GunaMediumCheckBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->gunaTransition1->SetDecoration(this->pictureBox1, Guna::UI::Animation::DecorationType::None);
			this->pictureBox1->Location = System::Drawing::Point(112, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(149, 177);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Insertbook::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label1, Guna::UI::Animation::DecorationType::None);
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(764, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"نام کتاب";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label2, Guna::UI::Animation::DecorationType::None);
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(745, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"قیمت کتاب";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label3, Guna::UI::Animation::DecorationType::None);
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(720, 331);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 31);
			this->label3->TabIndex = 4;
			this->label3->Text = L"توضیحات کتاب";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label4, Guna::UI::Animation::DecorationType::None);
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->Location = System::Drawing::Point(784, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 31);
			this->label4->TabIndex = 5;
			this->label4->Text = L"امتیاز";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label5, Guna::UI::Animation::DecorationType::None);
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(797, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 31);
			this->label5->TabIndex = 6;
			this->label5->Text = L"ژانر";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label6, Guna::UI::Animation::DecorationType::None);
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->Location = System::Drawing::Point(767, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 31);
			this->label6->TabIndex = 7;
			this->label6->Text = L"نویسنده";
			// 
			// gunaTextBox1
			// 
			this->gunaTextBox1->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox1, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox1->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox1->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox1->Location = System::Drawing::Point(522, 49);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox1->TabIndex = 13;
			// 
			// gunaTextBox2
			// 
			this->gunaTextBox2->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox2, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox2->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox2->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox2->Location = System::Drawing::Point(522, 94);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox2->TabIndex = 14;
			// 
			// gunaTextBox3
			// 
			this->gunaTextBox3->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox3, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox3->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox3->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox3->Location = System::Drawing::Point(522, 144);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox3->TabIndex = 15;
			this->gunaTextBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Insertbook::gunaTextBox3_KeyPress);
			// 
			// gunaTextBox4
			// 
			this->gunaTextBox4->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox4, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox4->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox4->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox4->Location = System::Drawing::Point(522, 192);
			this->gunaTextBox4->Name = L"gunaTextBox4";
			this->gunaTextBox4->PasswordChar = '\0';
			this->gunaTextBox4->SelectedText = L"";
			this->gunaTextBox4->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox4->TabIndex = 16;
			this->gunaTextBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Insertbook::gunaTextBox4_KeyPress);
			// 
			// gunaTextBox6
			// 
			this->gunaTextBox6->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox6->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox6, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox6->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox6->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox6->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox6->Location = System::Drawing::Point(522, 365);
			this->gunaTextBox6->Name = L"gunaTextBox6";
			this->gunaTextBox6->PasswordChar = '\0';
			this->gunaTextBox6->SelectedText = L"";
			this->gunaTextBox6->Size = System::Drawing::Size(310, 197);
			this->gunaTextBox6->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label7, Guna::UI::Animation::DecorationType::None);
			this->label7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label7->Location = System::Drawing::Point(143, 297);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 31);
			this->label7->TabIndex = 19;
			this->label7->Text = L"تصویر کتاب";
			// 
			// gunaAdvenceButton1
			// 
			this->gunaAdvenceButton1->AnimationHoverSpeed = 0.07F;
			this->gunaAdvenceButton1->AnimationSpeed = 0.03F;
			this->gunaAdvenceButton1->BackColor = System::Drawing::Color::Transparent;
			this->gunaAdvenceButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->gunaAdvenceButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton1->CheckedBaseColor = System::Drawing::Color::Gray;
			this->gunaAdvenceButton1->CheckedBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton1->CheckedForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton1->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceButton1.CheckedImage")));
			this->gunaAdvenceButton1->CheckedLineColor = System::Drawing::Color::Firebrick;
			this->gunaTransition1->SetDecoration(this->gunaAdvenceButton1, Guna::UI::Animation::DecorationType::None);
			this->gunaAdvenceButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaAdvenceButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaAdvenceButton1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaAdvenceButton1->ForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceButton1.Image")));
			this->gunaAdvenceButton1->ImageSize = System::Drawing::Size(20, 20);
			this->gunaAdvenceButton1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceButton1->Location = System::Drawing::Point(90, 499);
			this->gunaAdvenceButton1->Name = L"gunaAdvenceButton1";
			this->gunaAdvenceButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaAdvenceButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton1->OnHoverImage = nullptr;
			this->gunaAdvenceButton1->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton1->Radius = 15;
			this->gunaAdvenceButton1->Size = System::Drawing::Size(215, 42);
			this->gunaAdvenceButton1->TabIndex = 32;
			this->gunaAdvenceButton1->Text = L"ثبت کتاب";
			this->gunaAdvenceButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaAdvenceButton1->Click += gcnew System::EventHandler(this, &Insertbook::gunaAdvenceButton1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label8, Guna::UI::Animation::DecorationType::None);
			this->label8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label8->Location = System::Drawing::Point(797, 293);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 31);
			this->label8->TabIndex = 33;
			this->label8->Text = L"ID";
			// 
			// gunaTextBox7
			// 
			this->gunaTextBox7->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox7->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox7, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox7->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox7->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox7->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox7->Location = System::Drawing::Point(522, 293);
			this->gunaTextBox7->Name = L"gunaTextBox7";
			this->gunaTextBox7->PasswordChar = '\0';
			this->gunaTextBox7->SelectedText = L"";
			this->gunaTextBox7->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox7->TabIndex = 34;
			this->gunaTextBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Insertbook::gunaTextBox7_KeyPress);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// gunaButton1
			// 
			this->gunaButton1->AnimationHoverSpeed = 0.07F;
			this->gunaButton1->AnimationSpeed = 0.03F;
			this->gunaButton1->BackColor = System::Drawing::Color::Transparent;
			this->gunaButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->gunaButton1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaButton1->BorderSize = 3;
			this->gunaTransition1->SetDecoration(this->gunaButton1, Guna::UI::Animation::DecorationType::None);
			this->gunaButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaButton1->ForeColor = System::Drawing::Color::White;
			this->gunaButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton1.Image")));
			this->gunaButton1->ImageSize = System::Drawing::Size(33, 33);
			this->gunaButton1->Location = System::Drawing::Point(110, 333);
			this->gunaButton1->Name = L"gunaButton1";
			this->gunaButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton1->OnHoverImage = nullptr;
			this->gunaButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton1->Radius = 9;
			this->gunaButton1->Size = System::Drawing::Size(160, 42);
			this->gunaButton1->TabIndex = 35;
			this->gunaButton1->Text = L"فایل کتاب";
			this->gunaButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaButton1->TextOffsetX = 4;
			this->gunaButton1->Click += gcnew System::EventHandler(this, &Insertbook::gunaButton1_Click);
			// 
			// gunaComboBox1
			// 
			this->gunaComboBox1->BackColor = System::Drawing::Color::Transparent;
			this->gunaComboBox1->BaseColor = System::Drawing::Color::White;
			this->gunaComboBox1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTransition1->SetDecoration(this->gunaComboBox1, Guna::UI::Animation::DecorationType::None);
			this->gunaComboBox1->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->gunaComboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gunaComboBox1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaComboBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaComboBox1->ForeColor = System::Drawing::Color::Black;
			this->gunaComboBox1->FormattingEnabled = true;
			this->gunaComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"عاشقانه", L"فانتزی", L"تخیلی", L"وحشت", L"تاریخی",
					L"معمایی", L"ماجراجویی", L"زندگی نامه", L"داستانی", L"درسی", L"sdasda", L" "
			});
			this->gunaComboBox1->Location = System::Drawing::Point(522, 247);
			this->gunaComboBox1->Name = L"gunaComboBox1";
			this->gunaComboBox1->OnHoverItemBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaComboBox1->OnHoverItemForeColor = System::Drawing::Color::White;
			this->gunaComboBox1->Size = System::Drawing::Size(201, 32);
			this->gunaComboBox1->TabIndex = 36;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->label9);
			this->gunaTransition1->SetDecoration(this->panel3, Guna::UI::Animation::DecorationType::None);
			this->panel3->Location = System::Drawing::Point(246, 7);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(374, 98);
			this->panel3->TabIndex = 37;
			this->panel3->Visible = false;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Insertbook::panel3_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label9, Guna::UI::Animation::DecorationType::None);
			this->label9->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label9->Location = System::Drawing::Point(87, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 31);
			this->label9->TabIndex = 0;
			this->label9->Text = L"label9";
			// 
			// gunaTransition1
			// 
			this->gunaTransition1->AnimationType = Guna::UI::Animation::AnimationType::Scale;
			this->gunaTransition1->Cursor = nullptr;
			animation2->AnimateOnlyDifferences = true;
			animation2->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.BlindCoeff")));
			animation2->LeafCoeff = 0;
			animation2->MaxTime = 1;
			animation2->MinTime = 0;
			animation2->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.MosaicCoeff")));
			animation2->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.MosaicShift")));
			animation2->MosaicSize = 0;
			animation2->Padding = System::Windows::Forms::Padding(0);
			animation2->RotateCoeff = 0;
			animation2->RotateLimit = 0;
			animation2->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.ScaleCoeff")));
			animation2->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation2.SlideCoeff")));
			animation2->TimeCoeff = 0;
			animation2->TransparencyCoeff = 0;
			this->gunaTransition1->DefaultAnimation = animation2;
			// 
			// gunaVSeparator2
			// 
			this->gunaVSeparator2->BackColor = System::Drawing::Color::Transparent;
			this->gunaVSeparator2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gunaTransition1->SetDecoration(this->gunaVSeparator2, Guna::UI::Animation::DecorationType::None);
			this->gunaVSeparator2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaVSeparator2->Location = System::Drawing::Point(261, 104);
			this->gunaVSeparator2->Name = L"gunaVSeparator2";
			this->gunaVSeparator2->Size = System::Drawing::Size(10, 177);
			this->gunaVSeparator2->TabIndex = 41;
			this->gunaVSeparator2->Thickness = 3;
			// 
			// gunaSeparator2
			// 
			this->gunaSeparator2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->gunaSeparator2, Guna::UI::Animation::DecorationType::None);
			this->gunaSeparator2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaSeparator2->Location = System::Drawing::Point(111, 284);
			this->gunaSeparator2->Name = L"gunaSeparator2";
			this->gunaSeparator2->Size = System::Drawing::Size(149, 10);
			this->gunaSeparator2->TabIndex = 40;
			this->gunaSeparator2->Thickness = 3;
			// 
			// gunaVSeparator1
			// 
			this->gunaVSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->gunaVSeparator1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gunaTransition1->SetDecoration(this->gunaVSeparator1, Guna::UI::Animation::DecorationType::None);
			this->gunaVSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaVSeparator1->Location = System::Drawing::Point(103, 104);
			this->gunaVSeparator1->Name = L"gunaVSeparator1";
			this->gunaVSeparator1->Size = System::Drawing::Size(10, 177);
			this->gunaVSeparator1->TabIndex = 39;
			this->gunaVSeparator1->Thickness = 3;
			// 
			// gunaSeparator1
			// 
			this->gunaSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->gunaSeparator1, Guna::UI::Animation::DecorationType::None);
			this->gunaSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaSeparator1->Location = System::Drawing::Point(111, 93);
			this->gunaSeparator1->Name = L"gunaSeparator1";
			this->gunaSeparator1->Size = System::Drawing::Size(149, 10);
			this->gunaSeparator1->TabIndex = 38;
			this->gunaSeparator1->Thickness = 3;
			// 
			// gunaImageCheckBox1
			// 
			this->gunaTransition1->SetDecoration(this->gunaImageCheckBox1, Guna::UI::Animation::DecorationType::None);
			this->gunaImageCheckBox1->ImageCheckedOff = nullptr;
			this->gunaImageCheckBox1->ImageCheckedOn = nullptr;
			this->gunaImageCheckBox1->ImageSize = System::Drawing::Size(20, 20);
			this->gunaImageCheckBox1->Location = System::Drawing::Point(-15, -15);
			this->gunaImageCheckBox1->Name = L"gunaImageCheckBox1";
			this->gunaImageCheckBox1->Size = System::Drawing::Size(24, 24);
			this->gunaImageCheckBox1->TabIndex = 42;
			// 
			// gunaMediumCheckBox1
			// 
			this->gunaMediumCheckBox1->BaseColor = System::Drawing::Color::White;
			this->gunaMediumCheckBox1->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaMediumCheckBox1->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTransition1->SetDecoration(this->gunaMediumCheckBox1, Guna::UI::Animation::DecorationType::None);
			this->gunaMediumCheckBox1->FillColor = System::Drawing::Color::White;
			this->gunaMediumCheckBox1->Location = System::Drawing::Point(184, 547);
			this->gunaMediumCheckBox1->Name = L"gunaMediumCheckBox1";
			this->gunaMediumCheckBox1->Size = System::Drawing::Size(20, 20);
			this->gunaMediumCheckBox1->TabIndex = 46;
			this->gunaMediumCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &Insertbook::gunaMediumCheckBox1_CheckedChanged);
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Insertbook::timer1_Tick);
			// 
			// Insertbook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->Controls->Add(this->gunaMediumCheckBox1);
			this->Controls->Add(this->gunaImageCheckBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->gunaVSeparator2);
			this->Controls->Add(this->gunaSeparator2);
			this->Controls->Add(this->gunaVSeparator1);
			this->Controls->Add(this->gunaSeparator1);
			this->Controls->Add(this->gunaComboBox1);
			this->Controls->Add(this->gunaButton1);
			this->Controls->Add(this->gunaTextBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->gunaAdvenceButton1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->gunaTextBox6);
			this->Controls->Add(this->gunaTextBox4);
			this->Controls->Add(this->gunaTextBox3);
			this->Controls->Add(this->gunaTextBox2);
			this->Controls->Add(this->gunaTextBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->gunaTransition1->SetDecoration(this, Guna::UI::Animation::DecorationType::None);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Insertbook";
			this->Size = System::Drawing::Size(900, 624);
			this->Load += gcnew System::EventHandler(this, &Insertbook::Insertbook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	


private: System::Void EXITCONTROLBOX_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void FILESELECT_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Insertbook_Load(System::Object^ sender, System::EventArgs^ e) {
}









	private: System::Void gunaAdvenceButton1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::wstring str20;
		MarshalwString(gunaTextBox1->Text, str20);
		if (gunaTextBox1->Text == "")
		{
			label9->Text = L"نام کتاب را وارد کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox2->Text == "")
		{
			label9->Text = L"نام نویسنده را وارد کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox3->Text == "")
		{
			label9->Text = L"قیمت کتاب را وارد نمایید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox4->Text == "")
		{
			label9->Text = L"امتیاز کتاب را وارد نمایید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaComboBox1->Text == "")
		{
			label9->Text = L"ژانر را انتخاب کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox7->Text == "")
		{
			label9->Text = L"شماره کتاب را وارد کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox6->Text == "")
		{
			label9->Text = L"توضیحات کتاب را وارد کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (address_file == "")
		{
			label9->Text = L"پی دی اف را انتخاب کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (address_picture == "")
		{
			label9->Text = L"عکس کتاب را انتخاب کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox7->Text->Length > 5)
		{
			
			label9->Text = L"شماره کتاب باید حداکثر 5 رقم باشد";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (checknamebook(db, str20))
		{
			label9->Text = L"نام کتاب قبلا انتخاب شده است";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else
		{

			std::wstring str1;
			std::wstring str2;
			std::wstring str3;
			std::wstring str4;
			std::wstring str5;
			std::wstring str6;
			std::wstring str7;
			std::wstring str8;
			std::wstring str9;
			MarshalwString(address_file, str1);
			MarshalwString(gunaTextBox1->Text, str2);
			MarshalwString(gunaTextBox2->Text, str3);
			MarshalwString(gunaTextBox3->Text, str4);
			MarshalwString(gunaTextBox4->Text, str5);
			MarshalwString(gunaComboBox1->Text, str6);
			MarshalwString(gunaTextBox6->Text, str7);
			MarshalwString(gunaTextBox7->Text, str8);
			MarshalwString(address_picture, str9);
			InsertProduct_API(db, stoi(str8), str2, str1, str7, str3, str6, str5, str4, str9);
			gunaTextBox1->Text = "";
			gunaTextBox2->Text = "";
			gunaTextBox3->Text = "";
			gunaTextBox4->Text = "";
			gunaComboBox1->Text =" ";
			gunaTextBox6->Text = "";
			gunaTextBox7->Text = "";
			address_file = "";
			address_picture = "";
			label9->Text = L"اطلاعات کتاب با موفقیت ذخیره شد";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			pictureBox1->ImageLocation = "..\\temp\\addbook.png";
			timer1->Start();
		
		}
	}
	private:
		void MarshalwString(String^ s, wstring& os)
		{
			using namespace Runtime::InteropServices;
			const wchar_t* chars =
				(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	void MarshalString(String^ s, string& os)
	{
	using namespace Runtime::InteropServices;
	const char* chars =(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		openFileDialog1->Title = "Browse Picture";
		openFileDialog1->Filter = "png files (*.png)|*.png";
		openFileDialog1->Multiselect = false;
		openFileDialog1->CheckFileExists = true;
		openFileDialog1->CheckPathExists = true;
		browsepicture = gcnew Thread(gcnew ThreadStart(this, &Insertbook::Browspicture));
		browsepicture->SetApartmentState(ApartmentState::STA);
		browsepicture->Start();
		browsepicture->Join();
		address_picture = openFileDialog1->FileName;
		pictureBox1->ImageLocation = address_picture;
	
		
	}
	private:void Browspicture()
	{
		openFileDialog1->ShowDialog();
	}
private: System::Void gunaButton1_Click(System::Object^ sender, System::EventArgs^ e)
{
	openFileDialog2->Title = "Browse File";
	openFileDialog2->Filter = "pdf files (*.pdf)|*.pdf";
	openFileDialog2->Multiselect = false;
	openFileDialog2->CheckFileExists = true;
	openFileDialog2->CheckPathExists = true;
	Browsfile = gcnew Thread(gcnew ThreadStart(this, &Insertbook::BrowsFile));
	Browsfile->SetApartmentState(ApartmentState::STA);
	Browsfile->Start();
	Browsfile->Join();
	address_file = openFileDialog2->FileName;
}
	private:void BrowsFile()
	{
		openFileDialog2->ShowDialog();
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	time++;
	if (time == 1)
	{
		time = 0;
		gunaTransition1->HideSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
		timer1->Stop();
	}
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void gunaTextBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8 && ch != 46)
	{
		e->Handled = true;
	}
}
private: System::Void gunaTextBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8 && ch != 46)
	{
		e->Handled = true;
	}
}
private: System::Void gunaTextBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8 && ch != 46)
	{
		e->Handled = true;
	}
}

private: System::Void gunaMediumCheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (gunaMediumCheckBox1->Checked == true)
	{
		gunaTextBox1->Text = "";
		gunaTextBox2->Text = "";
		gunaTextBox3->Text = "";
		gunaTextBox4->Text = "";
		gunaComboBox1->Text = " ";
		gunaTextBox6->Text = "";
		gunaTextBox7->Text = "";
		address_file = "";
		address_picture = "";
		gunaMediumCheckBox1->Checked = false;
	}
	if (gunaMediumCheckBox1->Checked == false)
	{

	}
}
};
}
