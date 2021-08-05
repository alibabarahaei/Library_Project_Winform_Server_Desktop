#pragma once
#include<string>
#include"EmailForm.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using namespace System::Runtime::InteropServices;






[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
IntPtr CreateObject_API();
[DllImport("Registdll.dll", CallingConvention = CallingConvention::Cdecl)]
IntPtr  CreatObject();
[DllImport("Registdll.dll", CallingConvention = CallingConvention::Cdecl)]
bool Let_Username_API(IntPtr, string Username);
[DllImport("Registdll.dll", CallingConvention = CallingConvention::Cdecl)]
bool Let_Password_API(IntPtr, string Password);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
extern bool Signup_Admin_Username_Api(IntPtr, string username);
[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
extern bool Signup_Admin_Password_API(IntPtr, string password);






namespace WinFormServer {

	/// <summary>
	/// Summary for SignUpForm1
	/// </summary>
	public ref class SignUpForm1 : public System::Windows::Forms::UserControl
	{
	private:
		IntPtr ch;
		IntPtr db1;
		Panel^ mainpanel;
		static int time = 0;
		   EmailForm^ form_email;
	public:
		SignUpForm1(Panel^a,IntPtr db)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ch = CreatObject();
			db1 = db;
			mainpanel = a;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignUpForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: Guna::UI::WinForms::GunaAdvenceButton^ gunaAdvenceButton1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Guna::UI::WinForms::GunaTransition^ gunaTransition1;
	private: System::Windows::Forms::Timer^ timer1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignUpForm1::typeid));
			Guna::UI::Animation::Animation^ animation2 = (gcnew Guna::UI::Animation::Animation());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->gunaAdvenceButton1 = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->gunaTransition1 = (gcnew Guna::UI::WinForms::GunaTransition(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->gunaLabel1, Guna::UI::Animation::DecorationType::None);
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel1->Location = System::Drawing::Point(739, 97);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(48, 35);
			this->gunaLabel1->TabIndex = 33;
			this->gunaLabel1->Text = L"ورود";
			this->gunaLabel1->Click += gcnew System::EventHandler(this, &SignUpForm1::gunaLabel1_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label3);
			this->gunaTransition1->SetDecoration(this->panel1, Guna::UI::Animation::DecorationType::None);
			this->panel1->Location = System::Drawing::Point(229, 18);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(374, 98);
			this->panel1->TabIndex = 32;
			this->panel1->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label3, Guna::UI::Animation::DecorationType::None);
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(105, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 31);
			this->label3->TabIndex = 0;
			this->label3->Text = L"label3";
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
			this->gunaAdvenceButton1->Location = System::Drawing::Point(385, 446);
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
			this->gunaAdvenceButton1->TabIndex = 31;
			this->gunaAdvenceButton1->Text = L"ثبت نام";
			this->gunaAdvenceButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaAdvenceButton1->Click += gcnew System::EventHandler(this, &SignUpForm1::gunaAdvenceButton1_Click);
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
			this->gunaTextBox3->Location = System::Drawing::Point(586, 352);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox3->TabIndex = 30;
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
			this->gunaTextBox2->Location = System::Drawing::Point(586, 271);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox2->TabIndex = 29;
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
			this->gunaTextBox1->Location = System::Drawing::Point(586, 190);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(201, 35);
			this->gunaTextBox1->TabIndex = 28;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label5, Guna::UI::Animation::DecorationType::None);
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(651, 309);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 40);
			this->label5->TabIndex = 27;
			this->label5->Text = L"تکرار رمز عبور";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label2, Guna::UI::Animation::DecorationType::None);
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(699, 228);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 40);
			this->label2->TabIndex = 26;
			this->label2->Text = L"رمز عبور";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label1, Guna::UI::Animation::DecorationType::None);
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(686, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 40);
			this->label1->TabIndex = 25;
			this->label1->Text = L"نام کاربری";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->pictureBox1, Guna::UI::Animation::DecorationType::None);
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(71, 97);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(379, 362);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 24;
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
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &SignUpForm1::timer1_Tick);
			// 
			// SignUpForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->gunaLabel1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->gunaAdvenceButton1);
			this->Controls->Add(this->gunaTextBox3);
			this->Controls->Add(this->gunaTextBox2);
			this->Controls->Add(this->gunaTextBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->gunaTransition1->SetDecoration(this, Guna::UI::Animation::DecorationType::None);
			this->DoubleBuffered = true;
			this->Name = L"SignUpForm1";
			this->Size = System::Drawing::Size(834, 562);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void gunaAdvenceButton1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		string str1;
		string str2;
		string str3;
		MarshalString(gunaTextBox1->Text, str1);
		MarshalString(gunaTextBox2->Text, str2);
		MarshalString(gunaTextBox3->Text, str3);
		bool check_username = Let_Username_API(ch, str1);
		bool check_password = Let_Username_API(ch, str2);
		if (gunaTextBox1->Text == "")
		{
			label3->Text = L"نام کاربری را وارد نمایید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox2->Text == "")
		{
			label3->Text = L"رمز عبور را وارد نمایید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox3->Text == "")
		{
			label3->Text = L"رمز عبور را وارد نمایید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (check_username == false)
		{
			label3->Text = L"فرمت نام کاربری اشتباه وارد شده است";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if(check_password == false)
		{
			label3->Text = L"فرمت رمز عبور اشتباه وارد شده است";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox2->Text != gunaTextBox3->Text)
		{
			label3->Text = L"رمز عبور متفاوت هست";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (Signup_Admin_Username_Api(db1, str1) == true)
		{
			label3->Text = L"نام کاربری قبلا انتخاب شده است";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else
		{
			form_email = gcnew EmailForm(mainpanel, gunaTextBox1->Text, gunaTextBox2->Text,db1);
			mainpanel->Controls->Clear();
			mainpanel->Controls->Add(form_email);
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
private: System::Void gunaLabel1_Click(System::Object^ sender, System::EventArgs^ e)
{
	mainpanel->Visible = false;
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	time++;
	if (time == 1)
	{
		timer1->Stop();
		time = 0;
		gunaTransition1->HideSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
	}
}

};
}
