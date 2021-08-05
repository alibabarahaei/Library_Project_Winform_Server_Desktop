#pragma once

#include"OtherFunctionandClass.h"
#include<string>
#include"SignUpForm1.h"
#include"MainForm.h"

namespace WinFormServer {

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
	int GetUsernametRowId_API(IntPtr, std::wstring, bool ThrowExc);

#pragma region Update_Server
	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	 extern void UpdateServerUsername_API(IntPtr, std::string usernamelast, std::string usernamenew);
	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	void  UpdateServerPassword_API(IntPtr, std::string passwordlast, std::string passwordnew);
#pragma endregion
#pragma region Server_signup
	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	extern bool Signup_Admin_Username_Api(IntPtr, std::string username);
	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	extern bool Signup_Admin_Password_API(IntPtr, std::string password, bool ThrowExc);
	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	extern bool Check_Admin_Username_API(IntPtr db, string username, string password);
#pragma endregion
#pragma region Profile_Picture

	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	extern void Set_Server_FileNmaeProfilePicture_API(IntPtr, std::string username, std::string filenmaeprofilepicture, bool ThrowExc);
#pragma endregion



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		IntPtr db;
		IntPtr db1;
	private: System::Windows::Forms::Panel^ ErrorPanel;
	public:

	public:
	private: System::Windows::Forms::Label^ label4;
	private: Guna::UI::WinForms::GunaTransition^ gunaTransition1;
	private: System::Windows::Forms::Timer^ timer2;
		static int timer=0;
		static int timer12 = 0;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

		   SignUpForm1^ form_signup;
	public:

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			db = CreateObject_API();
			db1 = CreateObject_API();
			form_signup = gcnew SignUpForm1(panel1,db);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
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




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;
	private: Guna::UI::WinForms::GunaMediumCheckBox^ gunaMediumCheckBox1;
	private: Guna::UI::WinForms::GunaAdvenceButton^ gunaAdvenceButton1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::IContainer^ components;



	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaMediumCheckBox1 = (gcnew Guna::UI::WinForms::GunaMediumCheckBox());
			this->gunaAdvenceButton1 = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ErrorPanel = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->gunaTransition1 = (gcnew Guna::UI::WinForms::GunaTransition(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->ErrorPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->gunaTransition1->SetDecoration(this->label1, Guna::UI::Animation::DecorationType::None);
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(683, 384);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"یاداوری شود";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaTransition1->SetDecoration(this->button1, Guna::UI::Animation::DecorationType::None);
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->button1->Location = System::Drawing::Point(795, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 43);
			this->button1->TabIndex = 7;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaTransition1->SetDecoration(this->button2, Guna::UI::Animation::DecorationType::None);
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(541, 457);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(43, 45);
			this->button2->TabIndex = 10;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->pictureBox1, Guna::UI::Animation::DecorationType::None);
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(38, 92);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(404, 389);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
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
			this->gunaTextBox1->Location = System::Drawing::Point(572, 226);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox1->TabIndex = 12;
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
			this->gunaTextBox3->Location = System::Drawing::Point(572, 307);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox3->TabIndex = 14;
			// 
			// gunaMediumCheckBox1
			// 
			this->gunaMediumCheckBox1->BaseColor = System::Drawing::Color::White;
			this->gunaMediumCheckBox1->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaMediumCheckBox1->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTransition1->SetDecoration(this->gunaMediumCheckBox1, Guna::UI::Animation::DecorationType::None);
			this->gunaMediumCheckBox1->FillColor = System::Drawing::Color::White;
			this->gunaMediumCheckBox1->Location = System::Drawing::Point(752, 386);
			this->gunaMediumCheckBox1->Name = L"gunaMediumCheckBox1";
			this->gunaMediumCheckBox1->Size = System::Drawing::Size(20, 20);
			this->gunaMediumCheckBox1->TabIndex = 15;
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
			this->gunaAdvenceButton1->Location = System::Drawing::Point(455, 409);
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
			this->gunaAdvenceButton1->TabIndex = 20;
			this->gunaAdvenceButton1->Text = L"ورود";
			this->gunaAdvenceButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaAdvenceButton1->Click += gcnew System::EventHandler(this, &MyForm::gunaAdvenceButton1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->gunaTransition1->SetDecoration(this->label2, Guna::UI::Animation::DecorationType::None);
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(676, 345);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 24);
			this->label2->TabIndex = 21;
			this->label2->Text = L"فراموشی رمز عبور";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaTransition1->SetDecoration(this->button3, Guna::UI::Animation::DecorationType::None);
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(456, 457);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(43, 45);
			this->button3->TabIndex = 22;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaTransition1->SetDecoration(this->button4, Guna::UI::Animation::DecorationType::None);
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(628, 457);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(43, 45);
			this->button4->TabIndex = 23;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->gunaTransition1->SetDecoration(this->panel1, Guna::UI::Animation::DecorationType::None);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(26, 21);
			this->panel1->TabIndex = 24;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label3, Guna::UI::Animation::DecorationType::None);
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(694, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 43);
			this->label3->TabIndex = 25;
			this->label3->Text = L"ثبت نام";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// ErrorPanel
			// 
			this->ErrorPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ErrorPanel.BackgroundImage")));
			this->ErrorPanel->Controls->Add(this->label4);
			this->gunaTransition1->SetDecoration(this->ErrorPanel, Guna::UI::Animation::DecorationType::None);
			this->ErrorPanel->Location = System::Drawing::Point(234, 20);
			this->ErrorPanel->Name = L"ErrorPanel";
			this->ErrorPanel->Size = System::Drawing::Size(374, 98);
			this->ErrorPanel->TabIndex = 26;
			this->ErrorPanel->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label4, Guna::UI::Animation::DecorationType::None);
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(72, 32);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label4->Size = System::Drawing::Size(80, 35);
			this->label4->TabIndex = 0;
			this->label4->Text = L"label4";
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
			this->gunaTransition1->Interval = 15;
			// 
			// timer2
			// 
			this->timer2->Interval = 3000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer1
			// 
			this->timer1->Interval = 5000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label5, Guna::UI::Animation::DecorationType::None);
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(679, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 40);
			this->label5->TabIndex = 27;
			this->label5->Text = L"نام کاربری";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label6, Guna::UI::Animation::DecorationType::None);
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->Location = System::Drawing::Point(690, 264);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 40);
			this->label6->TabIndex = 28;
			this->label6->Text = L"رمز عبور";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(834, 562);
			this->Controls->Add(this->ErrorPanel);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->gunaMediumCheckBox1);
			this->Controls->Add(this->gunaTextBox3);
			this->Controls->Add(this->gunaTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->gunaAdvenceButton1);
			this->gunaTransition1->SetDecoration(this, Guna::UI::Animation::DecorationType::None);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ErrorPanel->ResumeLayout(false);
			this->ErrorPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Thread^ formasli;
void Open()
{
	Application::Run(gcnew MainForm(gunaTextBox1->Text));

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gunaTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void gunaMediumCheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   void MarshalwString(String^ s, wstring& os)
	   {
		   using namespace Runtime::InteropServices;
		   const wchar_t* chars =
			   (const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
		   os = chars;
		   Marshal::FreeHGlobal(IntPtr((void*)chars));
	   }
	//implementing functuin to open the dialog and close it by threads
	 
	private: System::Void gunaAdvenceButton1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		std::string str1;
		std::string str2;
		MarshalString(gunaTextBox1->Text, str1);
		MarshalString(gunaTextBox3->Text, str2);
		bool _check=Signup_Admin_Username_Api(db1, str1);
		if (gunaTextBox1->Text == "")
		{
		label4->Text = L"نام کاربری را وارد نمایید";
		gunaTransition1->ShowSync(ErrorPanel, false, Guna::UI::Animation::Animation::Leaf);
		timer2->Start();
		}
		else if (gunaTextBox3->Text == "")
		{
			label4->Text = L"رمز عبور را وارد نمایید";
			gunaTransition1->ShowSync(ErrorPanel, true, Guna::UI::Animation::Animation::Leaf);
			timer2->Start();
		}
		else if (_check == false)
		{
			label4->Text = L"نام کاربری وارد شده یافت نشد";
			gunaTransition1->ShowSync(ErrorPanel, true, Guna::UI::Animation::Animation::Leaf);
			timer2->Start();
		}
		else
		{
			
			bool h=Check_Admin_Username_API(db1, str1, str2);
			if (h == false)
			{
				
				label4->Text = L"رمز عبور وارد شده اشتباه است";
				gunaTransition1->ShowSync(ErrorPanel, false, Guna::UI::Animation::Animation::Leaf);
				pictureBox1->Hide();
				ErrorPanel->BringToFront();
				pictureBox1->Show();
				timer2->Start();
			
			}
			else
			{
				try
				{

					formasli = gcnew Thread(gcnew ThreadStart(this, &MyForm::Open));
					formasli->Start();
					
					//this here is Myforn.h that is going to be closed after the MainFom is opened
					//MessageBox::Show("go to next page");
					timer1->Start();

				}
				catch (Exception^ excep)
				{
					MessageBox::Show("error not handled");
				}
			}
		}
		
	

	}

private: System::Void gunaButton1_Click(System::Object^ sender, System::EventArgs^ e)
{

}

private:
	void MarshalString(String^ s, string& os)
	{
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

/*
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	*/


private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e)
{	

	panel1->Controls->Add(form_signup);
	panel1->Visible = true;
	

}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {

	timer++;
	if (timer == 1)
	{
		timer2->Stop();
		gunaTransition1->HideSync(ErrorPanel, false, Guna::UI::Animation::Animation::Leaf);
		timer = 0;
	}
	
}
	   

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	timer12++;
	if (timer12 == 1)
	{
		timer12 = 0;
		timer1->Stop();
		this->Close();
	
	}
}
};

}
