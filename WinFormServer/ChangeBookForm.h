#pragma once
#include <string>
#include"nlohmann/json.hpp"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using namespace System::Runtime::InteropServices;
using json = nlohmann::json;
using namespace System::Diagnostics;
using namespace System::Threading;



[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
bool checknamebook(IntPtr db, wstring name);

[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void DeleteProduct(IntPtr db, wstring name);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
bool checknamebook(IntPtr db, wstring name);

[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void InsertProduct_API(IntPtr db, int id, wstring name, wstring filename, wstring bookdescription, wstring writer, wstring genre, wstring score, wstring price, wstring pathfilepicture);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void ReplaceProduct_API(IntPtr db, int id, wstring name, wstring filename, wstring bookdescription, wstring writer, wstring genre, wstring score, wstring price, wstring pathfilepicture);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
IntPtr CreateObject_API();
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void Select_Product_API(IntPtr db, wstring name);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void send_FW(int a, wstring& str);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void GetProductFile(IntPtr db, wstring name, wstring path);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void GetProductFile2(IntPtr db, wstring name, wstring path);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
int GetProductId(IntPtr db, wstring name);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void KillObject_API(IntPtr db);









namespace WinFormServer {
	/// <summary>
	/// Summary for ChangeBookForm
	/// </summary>
	public ref class ChangeBookForm : public System::Windows::Forms::UserControl
	{
	public:
		IntPtr db;
	
		Panel^ mainpanel;
		Process proc;
		String^ pathfile;
		String^ pathpicture;
		Thread^ Browsfile;
		Thread^ browsepicture;
		DialogResult dr;
		static int time = 0;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Guna::UI::WinForms::GunaGoogleSwitch^ gunaGoogleSwitch1;
	private: Guna::UI::WinForms::GunaVSeparator^ gunaVSeparator2;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator2;
	private: Guna::UI::WinForms::GunaVSeparator^ gunaVSeparator1;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator1;
	private: Guna::UI::WinForms::GunaTransition^ gunaTransition1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label9;
	private: Guna::UI::WinForms::GunaComboBox^ gunaComboBox1;

	public:
		String^ namebook;
	public:
		ChangeBookForm(Panel^ a,IntPtr db_help)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
	
			db = db_help;			mainpanel = a;
			gunaPictureBox1->ImageLocation = "..\\temp\\addbook.png";

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChangeBookForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	protected:



	private: Guna::UI::WinForms::GunaAdvenceButton^ gunaAdvenceButton2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox6;

	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox4;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: Guna::UI::WinForms::GunaAdvenceButton^ gunaAdvenceButton1;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox1;
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
			Guna::UI::Animation::Animation^ animation3 = (gcnew Guna::UI::Animation::Animation());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangeBookForm::typeid));
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox6 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox4 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox8 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gunaAdvenceButton1 = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
			this->gunaPictureBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaAdvenceButton2 = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->gunaGoogleSwitch1 = (gcnew Guna::UI::WinForms::GunaGoogleSwitch());
			this->gunaVSeparator2 = (gcnew Guna::UI::WinForms::GunaVSeparator());
			this->gunaSeparator2 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->gunaVSeparator1 = (gcnew Guna::UI::WinForms::GunaVSeparator());
			this->gunaSeparator1 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->gunaTransition1 = (gcnew Guna::UI::WinForms::GunaTransition(this->components));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->gunaComboBox1 = (gcnew Guna::UI::WinForms::GunaComboBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// gunaTextBox1
			// 
			this->gunaTextBox1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox1->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox1, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox1->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox1->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox1->Location = System::Drawing::Point(304, 46);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->Radius = 12;
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(324, 30);
			this->gunaTextBox1->TabIndex = 0;
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
			this->gunaTextBox6->Location = System::Drawing::Point(539, 426);
			this->gunaTextBox6->Name = L"gunaTextBox6";
			this->gunaTextBox6->PasswordChar = '\0';
			this->gunaTextBox6->SelectedText = L"";
			this->gunaTextBox6->Size = System::Drawing::Size(310, 145);
			this->gunaTextBox6->TabIndex = 46;
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
			this->gunaTextBox4->Location = System::Drawing::Point(539, 274);
			this->gunaTextBox4->Name = L"gunaTextBox4";
			this->gunaTextBox4->PasswordChar = '\0';
			this->gunaTextBox4->SelectedText = L"";
			this->gunaTextBox4->Size = System::Drawing::Size(201, 32);
			this->gunaTextBox4->TabIndex = 44;
			this->gunaTextBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ChangeBookForm::gunaTextBox4_KeyPress);
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
			this->gunaTextBox3->Location = System::Drawing::Point(539, 226);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(201, 32);
			this->gunaTextBox3->TabIndex = 43;
			this->gunaTextBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ChangeBookForm::gunaTextBox3_KeyPress);
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
			this->gunaTextBox2->Location = System::Drawing::Point(539, 176);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(201, 32);
			this->gunaTextBox2->TabIndex = 42;
			// 
			// gunaTextBox8
			// 
			this->gunaTextBox8->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox8->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox8, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox8->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox8->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox8->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox8->Location = System::Drawing::Point(539, 131);
			this->gunaTextBox8->Name = L"gunaTextBox8";
			this->gunaTextBox8->PasswordChar = '\0';
			this->gunaTextBox8->SelectedText = L"";
			this->gunaTextBox8->Size = System::Drawing::Size(201, 32);
			this->gunaTextBox8->TabIndex = 41;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label6, Guna::UI::Animation::DecorationType::None);
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->Location = System::Drawing::Point(784, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 31);
			this->label6->TabIndex = 40;
			this->label6->Text = L"نویسنده";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label5, Guna::UI::Animation::DecorationType::None);
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(814, 327);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 31);
			this->label5->TabIndex = 39;
			this->label5->Text = L"ژانر";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label4, Guna::UI::Animation::DecorationType::None);
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->Location = System::Drawing::Point(801, 275);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 31);
			this->label4->TabIndex = 38;
			this->label4->Text = L"امتیاز";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label3, Guna::UI::Animation::DecorationType::None);
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(737, 392);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 31);
			this->label3->TabIndex = 37;
			this->label3->Text = L"توضیحات کتاب";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label2, Guna::UI::Animation::DecorationType::None);
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(762, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 31);
			this->label2->TabIndex = 36;
			this->label2->Text = L"قیمت کتاب";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label1, Guna::UI::Animation::DecorationType::None);
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(781, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 31);
			this->label1->TabIndex = 35;
			this->label1->Text = L"نام کتاب";
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
			this->gunaAdvenceButton1->Location = System::Drawing::Point(87, 529);
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
			this->gunaAdvenceButton1->TabIndex = 49;
			this->gunaAdvenceButton1->Text = L"ثبت کتاب";
			this->gunaAdvenceButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaAdvenceButton1->Click += gcnew System::EventHandler(this, &ChangeBookForm::gunaAdvenceButton1_Click);
			// 
			// gunaPictureBox1
			// 
			this->gunaPictureBox1->BaseColor = System::Drawing::Color::White;
			this->gunaTransition1->SetDecoration(this->gunaPictureBox1, Guna::UI::Animation::DecorationType::None);
			this->gunaPictureBox1->Location = System::Drawing::Point(110, 124);
			this->gunaPictureBox1->Name = L"gunaPictureBox1";
			this->gunaPictureBox1->Size = System::Drawing::Size(161, 198);
			this->gunaPictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->gunaPictureBox1->TabIndex = 50;
			this->gunaPictureBox1->TabStop = false;
			this->gunaPictureBox1->Click += gcnew System::EventHandler(this, &ChangeBookForm::gunaPictureBox1_Click_1);
			// 
			// gunaAdvenceButton2
			// 
			this->gunaAdvenceButton2->AnimationHoverSpeed = 0.07F;
			this->gunaAdvenceButton2->AnimationSpeed = 0.03F;
			this->gunaAdvenceButton2->BackColor = System::Drawing::Color::Transparent;
			this->gunaAdvenceButton2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->gunaAdvenceButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton2->CheckedBaseColor = System::Drawing::Color::Gray;
			this->gunaAdvenceButton2->CheckedBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton2->CheckedForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton2->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceButton2.CheckedImage")));
			this->gunaAdvenceButton2->CheckedLineColor = System::Drawing::Color::Firebrick;
			this->gunaTransition1->SetDecoration(this->gunaAdvenceButton2, Guna::UI::Animation::DecorationType::None);
			this->gunaAdvenceButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaAdvenceButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaAdvenceButton2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaAdvenceButton2->ForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaAdvenceButton2.Image")));
			this->gunaAdvenceButton2->ImageSize = System::Drawing::Size(0, 0);
			this->gunaAdvenceButton2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceButton2->Location = System::Drawing::Point(110, 342);
			this->gunaAdvenceButton2->Name = L"gunaAdvenceButton2";
			this->gunaAdvenceButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaAdvenceButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaAdvenceButton2->OnHoverImage = nullptr;
			this->gunaAdvenceButton2->OnHoverLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->gunaAdvenceButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaAdvenceButton2->Radius = 15;
			this->gunaAdvenceButton2->Size = System::Drawing::Size(161, 42);
			this->gunaAdvenceButton2->TabIndex = 51;
			this->gunaAdvenceButton2->Text = L"تغییر کتاب";
			this->gunaAdvenceButton2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaAdvenceButton2->Click += gcnew System::EventHandler(this, &ChangeBookForm::gunaAdvenceButton2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox1
			// 
			this->gunaTransition1->SetDecoration(this->pictureBox1, Guna::UI::Animation::DecorationType::None);
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(270, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 36);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 52;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ChangeBookForm::pictureBox1_Click);
			// 
			// gunaGoogleSwitch1
			// 
			this->gunaGoogleSwitch1->BaseColor = System::Drawing::Color::Transparent;
			this->gunaGoogleSwitch1->Checked = true;
			this->gunaGoogleSwitch1->CheckedOffColor = System::Drawing::Color::Crimson;
			this->gunaGoogleSwitch1->CheckedOnColor = System::Drawing::Color::DarkGreen;
			this->gunaTransition1->SetDecoration(this->gunaGoogleSwitch1, Guna::UI::Animation::DecorationType::None);
			this->gunaGoogleSwitch1->FillColor = System::Drawing::Color::WhiteSmoke;
			this->gunaGoogleSwitch1->Location = System::Drawing::Point(170, 503);
			this->gunaGoogleSwitch1->Name = L"gunaGoogleSwitch1";
			this->gunaGoogleSwitch1->Size = System::Drawing::Size(38, 20);
			this->gunaGoogleSwitch1->TabIndex = 53;
			this->gunaGoogleSwitch1->CheckedChanged += gcnew System::EventHandler(this, &ChangeBookForm::gunaGoogleSwitch1_CheckedChanged);
			// 
			// gunaVSeparator2
			// 
			this->gunaVSeparator2->BackColor = System::Drawing::Color::Transparent;
			this->gunaVSeparator2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gunaTransition1->SetDecoration(this->gunaVSeparator2, Guna::UI::Animation::DecorationType::None);
			this->gunaVSeparator2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaVSeparator2->Location = System::Drawing::Point(273, 124);
			this->gunaVSeparator2->Name = L"gunaVSeparator2";
			this->gunaVSeparator2->Size = System::Drawing::Size(10, 198);
			this->gunaVSeparator2->TabIndex = 57;
			this->gunaVSeparator2->Thickness = 3;
			// 
			// gunaSeparator2
			// 
			this->gunaSeparator2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->gunaSeparator2, Guna::UI::Animation::DecorationType::None);
			this->gunaSeparator2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaSeparator2->Location = System::Drawing::Point(110, 326);
			this->gunaSeparator2->Name = L"gunaSeparator2";
			this->gunaSeparator2->Size = System::Drawing::Size(161, 10);
			this->gunaSeparator2->TabIndex = 56;
			this->gunaSeparator2->Thickness = 3;
			// 
			// gunaVSeparator1
			// 
			this->gunaVSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->gunaVSeparator1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gunaTransition1->SetDecoration(this->gunaVSeparator1, Guna::UI::Animation::DecorationType::None);
			this->gunaVSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaVSeparator1->Location = System::Drawing::Point(99, 124);
			this->gunaVSeparator1->Name = L"gunaVSeparator1";
			this->gunaVSeparator1->Size = System::Drawing::Size(10, 198);
			this->gunaVSeparator1->TabIndex = 55;
			this->gunaVSeparator1->Thickness = 3;
			// 
			// gunaSeparator1
			// 
			this->gunaSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->gunaSeparator1, Guna::UI::Animation::DecorationType::None);
			this->gunaSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaSeparator1->Location = System::Drawing::Point(110, 111);
			this->gunaSeparator1->Name = L"gunaSeparator1";
			this->gunaSeparator1->Size = System::Drawing::Size(161, 10);
			this->gunaSeparator1->TabIndex = 54;
			this->gunaSeparator1->Thickness = 3;
			// 
			// gunaTransition1
			// 
			this->gunaTransition1->AnimationType = Guna::UI::Animation::AnimationType::Scale;
			this->gunaTransition1->Cursor = nullptr;
			animation3->AnimateOnlyDifferences = true;
			animation3->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.BlindCoeff")));
			animation3->LeafCoeff = 0;
			animation3->MaxTime = 1;
			animation3->MinTime = 0;
			animation3->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.MosaicCoeff")));
			animation3->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.MosaicShift")));
			animation3->MosaicSize = 0;
			animation3->Padding = System::Windows::Forms::Padding(0);
			animation3->RotateCoeff = 0;
			animation3->RotateLimit = 0;
			animation3->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.ScaleCoeff")));
			animation3->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation3.SlideCoeff")));
			animation3->TimeCoeff = 0;
			animation3->TransparencyCoeff = 0;
			this->gunaTransition1->DefaultAnimation = animation3;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->label9);
			this->gunaTransition1->SetDecoration(this->panel3, Guna::UI::Animation::DecorationType::None);
			this->panel3->Location = System::Drawing::Point(254, 8);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(374, 98);
			this->panel3->TabIndex = 58;
			this->panel3->Visible = false;
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
			this->gunaComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"عاشقانه", L"فانتزی", L"تخیلی", L"وحشت", L"تاریخی",
					L"معمایی", L"ماجراجویی", L"زندگی نامه", L"داستانی", L"درسی"
			});
			this->gunaComboBox1->Location = System::Drawing::Point(539, 328);
			this->gunaComboBox1->Name = L"gunaComboBox1";
			this->gunaComboBox1->OnHoverItemBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaComboBox1->OnHoverItemForeColor = System::Drawing::Color::White;
			this->gunaComboBox1->Size = System::Drawing::Size(201, 32);
			this->gunaComboBox1->TabIndex = 59;
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &ChangeBookForm::timer1_Tick);
			// 
			// ChangeBookForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Controls->Add(this->gunaComboBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->gunaVSeparator2);
			this->Controls->Add(this->gunaSeparator2);
			this->Controls->Add(this->gunaVSeparator1);
			this->Controls->Add(this->gunaSeparator1);
			this->Controls->Add(this->gunaGoogleSwitch1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->gunaAdvenceButton2);
			this->Controls->Add(this->gunaPictureBox1);
			this->Controls->Add(this->gunaAdvenceButton1);
			this->Controls->Add(this->gunaTextBox6);
			this->Controls->Add(this->gunaTextBox4);
			this->Controls->Add(this->gunaTextBox3);
			this->Controls->Add(this->gunaTextBox2);
			this->Controls->Add(this->gunaTextBox8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->gunaTextBox1);
			this->gunaTransition1->SetDecoration(this, Guna::UI::Animation::DecorationType::None);
			this->DoubleBuffered = true;
			this->Name = L"ChangeBookForm";
			this->Size = System::Drawing::Size(900, 624);
			this->Load += gcnew System::EventHandler(this, &ChangeBookForm::ChangeBookForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void gunaPictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private:
		void MarshalString(String^ s, string& os)
		{
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	private: System::Void gunaAdvenceButton2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		openFileDialog1->Title = "Browse Picture";
		openFileDialog1->Filter = "png files (*.pdf)|*.pdf";
		openFileDialog1->Multiselect = false;
		openFileDialog1->CheckFileExists = true;
		openFileDialog1->CheckPathExists = true;
		Browsfile = gcnew Thread(gcnew ThreadStart(this, &ChangeBookForm::BrowsFile));
		Browsfile->SetApartmentState(ApartmentState::STA);
		Browsfile->Start();
		Browsfile->Join();
		if (dr == System::Windows::Forms::DialogResult::OK)
		{
			pathfile = openFileDialog1->FileName;
		}
	}

	private: System::Void gunaPictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		openFileDialog1->Title = "Browse File";
		openFileDialog1->Filter = "png files (*.png)|*.png";
		openFileDialog1->Multiselect = false;
		openFileDialog1->CheckFileExists = true;
		openFileDialog1->CheckPathExists = true;
		browsepicture = gcnew Thread(gcnew ThreadStart(this, &ChangeBookForm::Browspicture));
		browsepicture->SetApartmentState(ApartmentState::STA);
		browsepicture->Start();
		browsepicture->Join();
		if (dr == System::Windows::Forms::DialogResult::OK)
		{
			pathfile = openFileDialog1->FileName;
		}
		gunaPictureBox1->ImageLocation = pathpicture;
	}
	private:void Browspicture()
	{
		dr =openFileDialog1->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK)
		{
			pathpicture= openFileDialog1->FileName;
		}
	}
	private:void BrowsFile()
	{
		dr=openFileDialog1->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK)
		{
			pathfile = openFileDialog1->FileName;
		}
	}
	private: System::Void gunaAdvenceButton1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		wstring str;
		MarshalwString(gunaTextBox1->Text, str);
		if (!checknamebook(db,str)&& gunaTextBox1->Text != gunaTextBox8->Text)
		{
			label9->Text = L"نام کتاب قبلا انتخاب شده است";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox8->Text=="")
		{
			label9->Text = L"نام کتاب را جست و جو کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox2->Text == "")
		{
			label9->Text = L"نویسنده کتاب را وارد کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox3->Text == "")
		{
			label9->Text = L"قیمت کتاب را وارد کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox4->Text == "")
		{
			label9->Text = L"امتیاز را وارد کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaComboBox1->Text == "")
		{
			label9->Text = L"ژانر را انتخاب کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox6->Text == "")
		{
			label9->Text = L"توضیحات کتاب را وارد کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (pathfile=="")
		{
			label9->Text = L"عکس کتاب را انتخاب کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (pathpicture=="")
		{
			label9->Text = L"آدرس کتاب را انتخاب کنید";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaGoogleSwitch1->Checked == true)
		{

			

				
			wstring str;
			wstring str1;
			wstring str2;
			wstring str3;
			wstring str4;
			wstring str5;
			wstring str6;
			wstring str7;
			wstring str8;
			MarshalwString(gunaTextBox8->Text, str);
			MarshalwString(gunaTextBox2->Text, str3);
			MarshalwString(gunaTextBox3->Text, str6);
			MarshalwString(gunaTextBox4->Text, str5);
			MarshalwString(gunaTextBox6->Text, str2);
			MarshalwString(pathfile, str1);
			MarshalwString(pathpicture, str7);
			MarshalwString(namebook, str8);
			int a = GetProductId(db, str8);
			ReplaceProduct_API(db, a, str, str1, str2, str3, str4, str5, str6, str7);
			gunaTextBox1->Text = "";
			gunaTextBox8->Text = "";
			gunaTextBox2->Text = "";
			gunaTextBox3->Text = "";
			gunaTextBox4->Text = "";
			gunaTextBox6->Text = "";
			gunaComboBox1->Text = "";
			pathfile = "";
			pathpicture = "";
			namebook = "";
			label9->Text = L"اطلاعات کتاب تغییر کرد";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else 
		{
			
			DeleteProduct(db, str);
			gunaTextBox1->Text = "";
			gunaTextBox8->Text = "";
			gunaTextBox2->Text = "";
			gunaTextBox3->Text = "";
			gunaTextBox4->Text = "";
			gunaComboBox1->Text = "";
			gunaTextBox6->Text = "";
			pathfile= "";
			pathpicture = "";
			namebook = "";
			gunaPictureBox1->ImageLocation = "..\\temp\\addbook.png";
			label9->Text = L"کتاب حذف شد";
			gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
			
		}

	}
	void MarshalwString(String^ s, wstring& os)
	{
		using namespace Runtime::InteropServices;
		const wchar_t* chars =
			(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
private: System::Void ChangeBookForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	wstring str1;
	MarshalwString(gunaTextBox1->Text, str1);
	if (checknamebook(db, str1))
	{
		GetProductFile(db, str1, L"..\\temp\\x1.png");
		GetProductFile2(db, str1, L"..\\temp\\x2.pdf");
		pathpicture = "..\\temp\\x1.png";
		pathfile = "..\\temp\\x2.pdf";
		proc.Start("..\\temp\\x2.pdf");
		Select_Product_API(db, str1);
		gunaPictureBox1->ImageLocation = "..\\temp\\x1.png";
		send_FW(4, str1);
		String^ bookdescription = gcnew String(str1.c_str());
		send_FW(5, str1);
		String^ writer = gcnew String(str1.c_str());
		send_FW(6, str1);
		String^ genre = gcnew String(str1.c_str());
		send_FW(7, str1);
		String^ score = gcnew String(str1.c_str());
		send_FW(8, str1);
		String^ price = gcnew String(str1.c_str());
		send_FW(1, str1);
		String^ name = gcnew String(str1.c_str());
		namebook = gunaTextBox1->Text;
		gunaTextBox8->Text = name;
		gunaTextBox2->Text = writer;
		gunaTextBox3->Text = price;
		gunaTextBox4->Text = score;
		gunaComboBox1->Text = genre;
		gunaTextBox6->Text = bookdescription;
	}
	else
	{
		label9->Text = L"کتاب پیدا نشد";
		gunaTransition1->ShowSync(panel3, true, Guna::UI::Animation::Animation::Leaf);
		timer1->Start();
	}

}
private: System::Void gunaGoogleSwitch1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{


	


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
private: System::Void gunaTextBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 

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
};
}
