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

[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
IntPtr CreateObject_API();
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void InsertAdmin_Other_API(IntPtr db,wstring username, wstring FirstName, wstring LastName, wstring mobilenumber, wstring address, wstring postcodehome);
[DllImport("Registdll.dll", CallingConvention = CallingConvention::Cdecl)]
bool Let_Username_API(IntPtr, string Username);
[DllImport("Registdll.dll", CallingConvention = CallingConvention::Cdecl)]
bool Let_Password_API(IntPtr, string Password);
[DllImport("Registdll.dll", CallingConvention = CallingConvention::Cdecl)]
IntPtr  CreatObject();
#pragma region Update_Server
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
extern void UpdateServerUsername_API(IntPtr, std::string usernamelast, std::string usernamenew);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void  UpdateServerPassword_API(IntPtr, std::string passwordlast, std::string passwordnew);
#pragma endregion
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
extern bool Check_Admin_Username_API(IntPtr db, string username, string password);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
extern bool Signup_Admin_Username_Api(IntPtr, std::string username);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void Get_Profile_Picture_API(IntPtr db, wstring username, wstring path);

namespace WinFormServer {

	/// <summary>
	/// Summary for setting
	/// </summary>
	public ref class setting : public System::Windows::Forms::UserControl
	{
	public:
		static int timer = 0;
		IntPtr db;
		Panel^ mainpanel;
	
		String^ usernamepast;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Guna::UI::WinForms::GunaTransition^ gunaTransition1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Timer^ timer1;
	private: Guna::UI::WinForms::GunaVSeparator^ gunaVSeparator2;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator2;
	private: Guna::UI::WinForms::GunaVSeparator^ gunaVSeparator1;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator1;
	public:
		IntPtr rg;
		setting(Panel^ a, IntPtr db_help,String^usernamepast )
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			db = db_help;
			mainpanel = a;
			this->usernamepast = usernamepast;
			rg = CreatObject();
			wstring str;
			MarshalwString(usernamepast, str);
			
			pictureBox1->ImageLocation = "..\\temp\\c1.png";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~setting()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:











































	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox12;

	private: Guna::UI::WinForms::GunaWinSwitch^ gunaWinSwitch1;
	private: System::Windows::Forms::Panel^ panel3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox6;

	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox5;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox7;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox4;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox16;

	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox15;

	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox14;


	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox13;



	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton6;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(setting::typeid));
			this->gunaTextBox12 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaWinSwitch1 = (gcnew Guna::UI::WinForms::GunaWinSwitch());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->gunaTextBox4 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox7 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->gunaTextBox6 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox5 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->gunaTextBox16 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox15 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox14 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox13 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->gunaGradientButton6 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->gunaTransition1 = (gcnew Guna::UI::WinForms::GunaTransition(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->gunaVSeparator2 = (gcnew Guna::UI::WinForms::GunaVSeparator());
			this->gunaSeparator2 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->gunaVSeparator1 = (gcnew Guna::UI::WinForms::GunaVSeparator());
			this->gunaSeparator1 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// gunaTextBox12
			// 
			this->gunaTextBox12->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox12->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox12->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox12, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox12->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox12->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox12->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox12->Location = System::Drawing::Point(34, 30);
			this->gunaTextBox12->Name = L"gunaTextBox12";
			this->gunaTextBox12->PasswordChar = '\0';
			this->gunaTextBox12->SelectedText = L"";
			this->gunaTextBox12->Size = System::Drawing::Size(128, 26);
			this->gunaTextBox12->TabIndex = 18;
			// 
			// gunaWinSwitch1
			// 
			this->gunaWinSwitch1->BackColor = System::Drawing::Color::Transparent;
			this->gunaWinSwitch1->BaseColor = System::Drawing::Color::Transparent;
			this->gunaWinSwitch1->CheckedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaWinSwitch1->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->gunaTransition1->SetDecoration(this->gunaWinSwitch1, Guna::UI::Animation::DecorationType::None);
			this->gunaWinSwitch1->FillColor = System::Drawing::Color::White;
			this->gunaWinSwitch1->Location = System::Drawing::Point(777, 93);
			this->gunaWinSwitch1->Name = L"gunaWinSwitch1";
			this->gunaWinSwitch1->Size = System::Drawing::Size(40, 22);
			this->gunaWinSwitch1->TabIndex = 22;
			this->gunaWinSwitch1->CheckedChanged += gcnew System::EventHandler(this, &setting::gunaWinSwitch1_CheckedChanged);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->gunaTextBox4);
			this->panel3->Controls->Add(this->gunaTextBox7);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->gunaTextBox6);
			this->panel3->Controls->Add(this->gunaTextBox5);
			this->panel3->Controls->Add(this->label1);
			this->gunaTransition1->SetDecoration(this->panel3, Guna::UI::Animation::DecorationType::None);
			this->panel3->Location = System::Drawing::Point(470, 164);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(344, 340);
			this->panel3->TabIndex = 23;
			this->panel3->Visible = false;
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
			this->gunaTextBox4->Location = System::Drawing::Point(22, 44);
			this->gunaTextBox4->Name = L"gunaTextBox4";
			this->gunaTextBox4->PasswordChar = '\0';
			this->gunaTextBox4->SelectedText = L"";
			this->gunaTextBox4->Size = System::Drawing::Size(128, 26);
			this->gunaTextBox4->TabIndex = 35;
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
			this->gunaTextBox7->Location = System::Drawing::Point(22, 177);
			this->gunaTextBox7->Name = L"gunaTextBox7";
			this->gunaTextBox7->PasswordChar = '\0';
			this->gunaTextBox7->SelectedText = L"";
			this->gunaTextBox7->Size = System::Drawing::Size(128, 26);
			this->gunaTextBox7->TabIndex = 28;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label4, Guna::UI::Animation::DecorationType::None);
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->Location = System::Drawing::Point(180, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 31);
			this->label4->TabIndex = 27;
			this->label4->Text = L"تکرار رمز عبور جدید";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label3, Guna::UI::Animation::DecorationType::None);
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(216, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 31);
			this->label3->TabIndex = 26;
			this->label3->Text = L"رمز عبور جدید";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label2, Guna::UI::Animation::DecorationType::None);
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(223, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 31);
			this->label2->TabIndex = 25;
			this->label2->Text = L"رمز عبور قبلی";
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
			this->gunaTextBox6->Location = System::Drawing::Point(22, 136);
			this->gunaTextBox6->Name = L"gunaTextBox6";
			this->gunaTextBox6->PasswordChar = '\0';
			this->gunaTextBox6->SelectedText = L"";
			this->gunaTextBox6->Size = System::Drawing::Size(128, 26);
			this->gunaTextBox6->TabIndex = 20;
			// 
			// gunaTextBox5
			// 
			this->gunaTextBox5->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox5, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox5->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox5->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox5->Location = System::Drawing::Point(22, 90);
			this->gunaTextBox5->Name = L"gunaTextBox5";
			this->gunaTextBox5->PasswordChar = '\0';
			this->gunaTextBox5->SelectedText = L"";
			this->gunaTextBox5->Size = System::Drawing::Size(128, 26);
			this->gunaTextBox5->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label1, Guna::UI::Animation::DecorationType::None);
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(207, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 31);
			this->label1->TabIndex = 24;
			this->label1->Text = L"نام کاربری جدید";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->gunaTextBox16);
			this->panel4->Controls->Add(this->gunaTextBox15);
			this->panel4->Controls->Add(this->gunaTextBox14);
			this->panel4->Controls->Add(this->gunaTextBox13);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->gunaTextBox12);
			this->gunaTransition1->SetDecoration(this->panel4, Guna::UI::Animation::DecorationType::None);
			this->panel4->Location = System::Drawing::Point(455, 164);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(341, 337);
			this->panel4->TabIndex = 24;
			// 
			// gunaTextBox16
			// 
			this->gunaTextBox16->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox16->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox16->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox16, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox16->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox16->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox16->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox16->Location = System::Drawing::Point(34, 227);
			this->gunaTextBox16->Name = L"gunaTextBox16";
			this->gunaTextBox16->PasswordChar = '\0';
			this->gunaTextBox16->SelectedText = L"";
			this->gunaTextBox16->Size = System::Drawing::Size(128, 26);
			this->gunaTextBox16->TabIndex = 40;
			this->gunaTextBox16->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &setting::gunaTextBox16_KeyPress);
			// 
			// gunaTextBox15
			// 
			this->gunaTextBox15->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox15->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox15->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox15, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox15->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox15->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox15->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox15->Location = System::Drawing::Point(34, 177);
			this->gunaTextBox15->Name = L"gunaTextBox15";
			this->gunaTextBox15->PasswordChar = '\0';
			this->gunaTextBox15->SelectedText = L"";
			this->gunaTextBox15->Size = System::Drawing::Size(128, 26);
			this->gunaTextBox15->TabIndex = 39;
			this->gunaTextBox15->TextChanged += gcnew System::EventHandler(this, &setting::gunaTextBox15_TextChanged);
			// 
			// gunaTextBox14
			// 
			this->gunaTextBox14->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox14->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox14->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox14, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox14->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox14->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox14->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox14->Location = System::Drawing::Point(34, 126);
			this->gunaTextBox14->Name = L"gunaTextBox14";
			this->gunaTextBox14->PasswordChar = '\0';
			this->gunaTextBox14->SelectedText = L"";
			this->gunaTextBox14->Size = System::Drawing::Size(128, 26);
			this->gunaTextBox14->TabIndex = 37;
			this->gunaTextBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &setting::gunaTextBox14_KeyPress);
			// 
			// gunaTextBox13
			// 
			this->gunaTextBox13->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox13->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaTextBox13->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTransition1->SetDecoration(this->gunaTextBox13, Guna::UI::Animation::DecorationType::None);
			this->gunaTextBox13->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox13->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox13->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox13->Location = System::Drawing::Point(34, 78);
			this->gunaTextBox13->Name = L"gunaTextBox13";
			this->gunaTextBox13->PasswordChar = '\0';
			this->gunaTextBox13->SelectedText = L"";
			this->gunaTextBox13->Size = System::Drawing::Size(128, 26);
			this->gunaTextBox13->TabIndex = 36;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label10, Guna::UI::Animation::DecorationType::None);
			this->label10->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label10->Location = System::Drawing::Point(233, 222);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(73, 31);
			this->label10->TabIndex = 34;
			this->label10->Text = L"کد پستی";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label9, Guna::UI::Animation::DecorationType::None);
			this->label9->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label9->Location = System::Drawing::Point(167, 172);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(139, 31);
			this->label9->TabIndex = 33;
			this->label9->Text = L"آدرس محل سکونت";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label7, Guna::UI::Animation::DecorationType::None);
			this->label7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label7->Location = System::Drawing::Point(207, 121);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 31);
			this->label7->TabIndex = 31;
			this->label7->Text = L"شماره موبایل";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label6, Guna::UI::Animation::DecorationType::None);
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->Location = System::Drawing::Point(212, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 31);
			this->label6->TabIndex = 30;
			this->label6->Text = L"نام خانوادگی";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label5, Guna::UI::Animation::DecorationType::None);
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(276, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 31);
			this->label5->TabIndex = 29;
			this->label5->Text = L"نام";
			// 
			// gunaGradientButton6
			// 
			this->gunaGradientButton6->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton6->AnimationSpeed = 0.03F;
			this->gunaGradientButton6->BaseColor1 = System::Drawing::Color::DarkOrchid;
			this->gunaGradientButton6->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->gunaGradientButton6->BorderColor = System::Drawing::Color::Black;
			this->gunaTransition1->SetDecoration(this->gunaGradientButton6, Guna::UI::Animation::DecorationType::None);
			this->gunaGradientButton6->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton6->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientButton6->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton6.Image")));
			this->gunaGradientButton6->ImageOffsetX = -3;
			this->gunaGradientButton6->ImageSize = System::Drawing::Size(35, 35);
			this->gunaGradientButton6->Location = System::Drawing::Point(325, 540);
			this->gunaGradientButton6->Name = L"gunaGradientButton6";
			this->gunaGradientButton6->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton6->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton6->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton6->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton6->OnHoverImage = nullptr;
			this->gunaGradientButton6->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton6->Size = System::Drawing::Size(211, 40);
			this->gunaGradientButton6->TabIndex = 36;
			this->gunaGradientButton6->Text = L"ثبت اطلاعات";
			this->gunaGradientButton6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->gunaGradientButton6->Click += gcnew System::EventHandler(this, &setting::gunaGradientButton6_Click);
			// 
			// pictureBox1
			// 
			this->gunaTransition1->SetDecoration(this->pictureBox1, Guna::UI::Animation::DecorationType::None);
			this->pictureBox1->Location = System::Drawing::Point(120, 208);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(161, 209);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
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
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label8);
			this->gunaTransition1->SetDecoration(this->panel1, Guna::UI::Animation::DecorationType::None);
			this->panel1->Location = System::Drawing::Point(249, 7);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(374, 98);
			this->panel1->TabIndex = 59;
			this->panel1->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label8, Guna::UI::Animation::DecorationType::None);
			this->label8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label8->Location = System::Drawing::Point(87, 36);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 31);
			this->label8->TabIndex = 0;
			this->label8->Text = L"label8";
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &setting::timer1_Tick);
			// 
			// gunaVSeparator2
			// 
			this->gunaVSeparator2->BackColor = System::Drawing::Color::Transparent;
			this->gunaVSeparator2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gunaTransition1->SetDecoration(this->gunaVSeparator2, Guna::UI::Animation::DecorationType::None);
			this->gunaVSeparator2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaVSeparator2->Location = System::Drawing::Point(283, 208);
			this->gunaVSeparator2->Name = L"gunaVSeparator2";
			this->gunaVSeparator2->Size = System::Drawing::Size(10, 211);
			this->gunaVSeparator2->TabIndex = 63;
			this->gunaVSeparator2->Thickness = 3;
			// 
			// gunaSeparator2
			// 
			this->gunaSeparator2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->gunaSeparator2, Guna::UI::Animation::DecorationType::None);
			this->gunaSeparator2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaSeparator2->Location = System::Drawing::Point(120, 423);
			this->gunaSeparator2->Name = L"gunaSeparator2";
			this->gunaSeparator2->Size = System::Drawing::Size(161, 10);
			this->gunaSeparator2->TabIndex = 62;
			this->gunaSeparator2->Thickness = 3;
			// 
			// gunaVSeparator1
			// 
			this->gunaVSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->gunaVSeparator1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gunaTransition1->SetDecoration(this->gunaVSeparator1, Guna::UI::Animation::DecorationType::None);
			this->gunaVSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaVSeparator1->Location = System::Drawing::Point(109, 208);
			this->gunaVSeparator1->Name = L"gunaVSeparator1";
			this->gunaVSeparator1->Size = System::Drawing::Size(10, 211);
			this->gunaVSeparator1->TabIndex = 61;
			this->gunaVSeparator1->Thickness = 3;
			// 
			// gunaSeparator1
			// 
			this->gunaSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->gunaSeparator1, Guna::UI::Animation::DecorationType::None);
			this->gunaSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaSeparator1->Location = System::Drawing::Point(120, 194);
			this->gunaSeparator1->Name = L"gunaSeparator1";
			this->gunaSeparator1->Size = System::Drawing::Size(161, 10);
			this->gunaSeparator1->TabIndex = 60;
			this->gunaSeparator1->Thickness = 3;
			// 
			// setting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->Controls->Add(this->gunaVSeparator2);
			this->Controls->Add(this->gunaSeparator2);
			this->Controls->Add(this->gunaVSeparator1);
			this->Controls->Add(this->gunaSeparator1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->gunaGradientButton6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->gunaWinSwitch1);
			this->gunaTransition1->SetDecoration(this, Guna::UI::Animation::DecorationType::None);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"setting";
			this->Padding = System::Windows::Forms::Padding(2);
			this->Size = System::Drawing::Size(900, 624);
			this->Load += gcnew System::EventHandler(this, &setting::setting_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void setting_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void gunaLabel3_Click(System::Object^ sender, System::EventArgs^ e)
{







}
	   void MarshalwString(String^ s, wstring& os)
	   {
		   using namespace Runtime::InteropServices;
		   const wchar_t* chars =
			   (const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
		   os = chars;
		   Marshal::FreeHGlobal(IntPtr((void*)chars));
	   }









private: System::Void gunaGradientButton6_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (gunaWinSwitch1->Checked == false)
	{
		if (gunaTextBox12->Text == "")
		{
			label8->Text = L"نام را وارد نمایید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox13->Text == "")
		{
			label8->Text = L"نام خانوادگی را وارد نمایید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox14->Text == "")
		{
			label8->Text = L"شماره موبایل را وارد کنید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox15->Text == "")
		{
			label8->Text = L"آدرس محل سکونت را وارد نمایید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox16->Text == "")
		{
			label8->Text = L"کد پستی را وارد نمایید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
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
			MarshalwString(gunaTextBox12->Text, str1);
			MarshalwString(gunaTextBox13->Text, str2);
			MarshalwString(gunaTextBox14->Text, str3);
			MarshalwString(gunaTextBox15->Text, str4);
			MarshalwString(gunaTextBox16->Text, str5);
			MarshalwString(usernamepast, str6);
			InsertAdmin_Other_API(db, str6, str1, str2, str3, str4, str5);
			label8->Text = L"اطلاعات با موفقیت ثبت شد";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();

		}
	}
	else
	{

		std::string str1;
		std::string str2;
		std::string str3;
		std::string str4;
		std::string str5;

		MarshalString(gunaTextBox4->Text, str1);
		MarshalString(gunaTextBox5->Text, str2);
		MarshalString(gunaTextBox6->Text, str3);
		MarshalString(gunaTextBox7->Text, str4);
		MarshalString(usernamepast, str5);

		if (gunaTextBox4->Text == "")
		{
			label8->Text = L"نام کاربری را وارد نمایید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox5->Text == "")
		{
			label8->Text = L"رمز عبور قبلی را وارد نمایید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox6->Text == "")
		{
			label8->Text = L"رمز جدید را وارد نمایید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox7->Text == "")
		{
			label8->Text = L"تکرار رمز عبور جدید را وارد نمایید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox7->Text != gunaTextBox6->Text)
		{
			label8->Text = L"رمز عبور جدید هم یکسان نیستد";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox7->Text != gunaTextBox6->Text)
		{
			label8->Text = L"رمز عبور جدید یکسان نیستد";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		 else if (Signup_Admin_Username_Api(db, str1))
		{
			 label8->Text = L"نام کاربری قبلا انتخاب شده است";
			 gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			 timer1->Start();
		}
		else if (!Check_Admin_Username_API(db, str5, str2))
		{

			 label8->Text = L"نام کاربری با رمز عبور همخوانی ندارد";
			 gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			 timer1->Start();
		}
		else if (!Let_Username_API(rg, str1))
		{

			 label8->Text = L"فرمت نام کاربری را تصحیح فرمایید";
			 gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			 timer1->Start();
		}
		else if (!Let_Password_API(rg, str3))
		{

			 label8->Text = L"فرمت رمز عبور را تصحیح فرمایید";
			 gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			 timer1->Start();
		}
		else
		{
			 UpdateServerUsername_API(db, str5, str1);
			 UpdateServerPassword_API(db, str2, str3);
			 label8->Text = L"اطلاعات با موفقیت ثبت شد";
			 gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			 timer1->Start();
			
		}


	}
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
		  



private: System::Void gunaWinSwitch1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (gunaWinSwitch1->Checked == false)
	{
		gunaTransition1->HideSync(panel3, false, Guna::UI::Animation::Animation::HorizSlide);
		gunaTransition1->ShowSync(panel4, false, Guna::UI::Animation::Animation::HorizSlide);
	}
	if (gunaWinSwitch1->Checked == true)
	{
		gunaTransition1->HideSync(panel4, false, Guna::UI::Animation::Animation::HorizSlide);
		gunaTransition1->ShowSync(panel3, false, Guna::UI::Animation::Animation::HorizSlide);
	}
}
private: System::Void gunaTextBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	timer++;
	if (timer == 1)
	{
		timer = 0;
		gunaTransition1->HideSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
		timer1->Stop();
	}
}
private: System::Void gunaTextBox14_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8 && ch != 46)
	{
		e->Handled = true;
	}
}
private: System::Void gunaTextBox16_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8 && ch != 46)
	{
		e->Handled = true;
	}
}

};
}
