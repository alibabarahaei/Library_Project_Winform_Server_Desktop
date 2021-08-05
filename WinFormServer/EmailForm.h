#pragma once
#include<string>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Net;
using namespace System::Net::Mail;
using namespace System::IO;
using namespace System::Text;
using namespace System::Runtime::InteropServices;
using namespace std;
using namespace System::Threading;
namespace WinFormServer {






	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	IntPtr CreateObject_API();
	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	bool InsertAdmin_API(IntPtr, std::string, std::string,std::string,std::string);

	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	void Set_Profile_Picture_API(IntPtr db, string path, string username);









	/// <summary>
	/// Summary for EmailForm
	/// </summary>
	public ref class EmailForm : public System::Windows::Forms::UserControl
	{
	public:
		String^ username;
		String^ password;
		Panel^ mainpanel;
		String^ code1=L"";
		IntPtr db1;
		String^ pathpicture;
	
		   static int time = 0;
		EmailForm(Panel^ b,String^username1,String^password1,IntPtr db)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			mainpanel = b;
			username = username1;
			password = password1;
			db1 = db;
			pathpicture = "";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EmailForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator1;
	public:
	private: Guna::UI::WinForms::GunaVSeparator^ gunaVSeparator1;
	private: Guna::UI::WinForms::GunaSeparator^ gunaSeparator2;
	private: Guna::UI::WinForms::GunaVSeparator^ gunaVSeparator2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	private: Guna::UI::WinForms::GunaAdvenceButton^ gunaAdvenceButton1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
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
			Guna::UI::Animation::Animation^ animation2 = (gcnew Guna::UI::Animation::Animation());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmailForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaAdvenceButton1 = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->gunaTransition1 = (gcnew Guna::UI::WinForms::GunaTransition(this->components));
			this->gunaSeparator1 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->gunaVSeparator1 = (gcnew Guna::UI::WinForms::GunaVSeparator());
			this->gunaSeparator2 = (gcnew Guna::UI::WinForms::GunaSeparator());
			this->gunaVSeparator2 = (gcnew Guna::UI::WinForms::GunaVSeparator());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->gunaTransition1->SetDecoration(this->pictureBox1, Guna::UI::Animation::DecorationType::None);
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(46, 95);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(381, 355);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->gunaLabel1, Guna::UI::Animation::DecorationType::None);
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel1->Location = System::Drawing::Point(649, 266);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(130, 31);
			this->gunaLabel1->TabIndex = 1;
			this->gunaLabel1->Text = L"ایمیل را وارد کنید";
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
			this->gunaTextBox1->Location = System::Drawing::Point(449, 299);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(330, 35);
			this->gunaTextBox1->TabIndex = 14;
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
			this->gunaTextBox2->Location = System::Drawing::Point(559, 380);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(120, 35);
			this->gunaTextBox2->TabIndex = 15;
			this->gunaTextBox2->Visible = false;
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->gunaLabel2, Guna::UI::Animation::DecorationType::None);
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel2->Location = System::Drawing::Point(495, 349);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(229, 28);
			this->gunaLabel2->TabIndex = 16;
			this->gunaLabel2->Text = L"کد ارسال شده به ایمیل را وارد نمایید";
			this->gunaLabel2->Visible = false;
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
			this->gunaAdvenceButton1->Location = System::Drawing::Point(500, 434);
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
			this->gunaAdvenceButton1->TabIndex = 22;
			this->gunaAdvenceButton1->Text = L"ثبت نام";
			this->gunaAdvenceButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaAdvenceButton1->Click += gcnew System::EventHandler(this, &EmailForm::gunaAdvenceButton1_Click);
			// 
			// pictureBox2
			// 
			this->gunaTransition1->SetDecoration(this->pictureBox2, Guna::UI::Animation::DecorationType::None);
			this->pictureBox2->Location = System::Drawing::Point(540, 66);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(149, 177);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &EmailForm::pictureBox2_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label3);
			this->gunaTransition1->SetDecoration(this->panel1, Guna::UI::Animation::DecorationType::None);
			this->panel1->Location = System::Drawing::Point(210, 19);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(374, 98);
			this->panel1->TabIndex = 24;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &EmailForm::panel1_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->label3, Guna::UI::Animation::DecorationType::None);
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(64, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 35);
			this->label3->TabIndex = 0;
			this->label3->Text = L"label3";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
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
			// gunaSeparator1
			// 
			this->gunaSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->gunaSeparator1, Guna::UI::Animation::DecorationType::None);
			this->gunaSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaSeparator1->Location = System::Drawing::Point(540, 55);
			this->gunaSeparator1->Name = L"gunaSeparator1";
			this->gunaSeparator1->Size = System::Drawing::Size(149, 10);
			this->gunaSeparator1->TabIndex = 25;
			this->gunaSeparator1->Thickness = 3;
			// 
			// gunaVSeparator1
			// 
			this->gunaVSeparator1->BackColor = System::Drawing::Color::Transparent;
			this->gunaVSeparator1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gunaTransition1->SetDecoration(this->gunaVSeparator1, Guna::UI::Animation::DecorationType::None);
			this->gunaVSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaVSeparator1->Location = System::Drawing::Point(532, 66);
			this->gunaVSeparator1->Name = L"gunaVSeparator1";
			this->gunaVSeparator1->Size = System::Drawing::Size(10, 177);
			this->gunaVSeparator1->TabIndex = 26;
			this->gunaVSeparator1->Thickness = 3;
			// 
			// gunaSeparator2
			// 
			this->gunaSeparator2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransition1->SetDecoration(this->gunaSeparator2, Guna::UI::Animation::DecorationType::None);
			this->gunaSeparator2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaSeparator2->Location = System::Drawing::Point(540, 246);
			this->gunaSeparator2->Name = L"gunaSeparator2";
			this->gunaSeparator2->Size = System::Drawing::Size(149, 10);
			this->gunaSeparator2->TabIndex = 27;
			this->gunaSeparator2->Thickness = 3;
			// 
			// gunaVSeparator2
			// 
			this->gunaVSeparator2->BackColor = System::Drawing::Color::Transparent;
			this->gunaVSeparator2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gunaTransition1->SetDecoration(this->gunaVSeparator2, Guna::UI::Animation::DecorationType::None);
			this->gunaVSeparator2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaVSeparator2->Location = System::Drawing::Point(690, 66);
			this->gunaVSeparator2->Name = L"gunaVSeparator2";
			this->gunaVSeparator2->Size = System::Drawing::Size(10, 177);
			this->gunaVSeparator2->TabIndex = 28;
			this->gunaVSeparator2->Thickness = 3;
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &EmailForm::timer1_Tick);
			// 
			// EmailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->gunaVSeparator2);
			this->Controls->Add(this->gunaSeparator2);
			this->Controls->Add(this->gunaVSeparator1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->gunaAdvenceButton1);
			this->Controls->Add(this->gunaLabel2);
			this->Controls->Add(this->gunaTextBox2);
			this->Controls->Add(this->gunaTextBox1);
			this->Controls->Add(this->gunaLabel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->gunaSeparator1);
			this->gunaTransition1->SetDecoration(this, Guna::UI::Animation::DecorationType::None);
			this->DoubleBuffered = true;
			this->Name = L"EmailForm";
			this->Size = System::Drawing::Size(834, 562);
			this->Load += gcnew System::EventHandler(this, &EmailForm::EmailForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*	Thread^ formasli;
		void Open()
		{

			Application::Run(gcnew MyForm());

		}*/
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void gunaAdvenceButton1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		string str;
		string str1;
		string str2;
		MarshalString(username, str);
		MarshalString(password, str1);
		string path;
		MarshalString(pathpicture, path);
		MarshalString(gunaTextBox1->Text, str2);
		Random^ RandString = gcnew Random();
		String^ code=(RandString->Next(10000, 99999)).ToString();
		if (code1 == gunaTextBox2->Text&&code1!="")
		{
			if (InsertAdmin_API(db1, str, str1, str2,path))
			{
				label3->Text = L"ثبت نام با موفقیت انجام شد";
				gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
				timer1->Start();
				mainpanel->Controls->Clear();
				mainpanel->Visible = false;
				//try
				//{

				//	formasli = gcnew Thread(gcnew ThreadStart(this, &EmailForm::Open));
				//	formasli->Start();

				//	//this here is Myforn.h that is going to be closed after the MainFom is opened
				//	//MessageBox::Show("go to next page");
				//	

				//}
				//catch (Exception^ excep)
				//{
				//	MessageBox::Show("error not handled");
				//}
				
			}
			
		}
		else if (pathpicture == "")
		{
			label3->Text = L"تصویر برای پروفایل انتخاب کنید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
			
		}
		else if (code1 != gunaTextBox2->Text)
		{
			label3->Text = L"کد وارد شده نامعتبر است";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else if (gunaTextBox1->Text == "")
		{
			label3->Text = L"جیمیل را وارد نمایید";
			gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
			timer1->Start();
		}
		else
		{
			try {
				//Sender and reciever email
				auto mail = gcnew MailMessage("libraryprojectnoreply@gmail.com", gunaTextBox1->Text);
				auto client = gcnew SmtpClient("smtp.gmail.com");
				client->Port = 587;
				//username and password for the sender
				client->Credentials = gcnew System::Net::NetworkCredential("libraryprojectnoreply@gmail.com", "Leteverythinggo");
				client->EnableSsl = true;
				//email subject
				mail->Subject =L"سلام";
				//email Text
				mail->Body = "code : "+code;
				client->Send(mail);
				gunaTextBox2->Visible = true;
				gunaLabel2->Visible = true;
				label3->Text = L"کد به ایمیل ارسال شد";
				gunaTransition1->ShowSync(panel1, true, Guna::UI::Animation::Animation::Leaf);
				timer1->Start();
				code1 = code;
			}
			catch (Exception^ error)
			{
				MessageBox::Show("error sending");
			}
		}
	
	   



	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		openFileDialog1->Title = "Browse Picture";
		openFileDialog1->Filter = "png files (*.png)|*.png";
		openFileDialog1->Multiselect = false;
		DialogResult dr = openFileDialog1->ShowDialog();
		openFileDialog1->CheckFileExists = true;
		openFileDialog1->CheckPathExists = true;

		if (dr == System::Windows::Forms::DialogResult::OK)
		{
			 pathpicture = openFileDialog1->FileName;
		}
		pictureBox2->ImageLocation = pathpicture;
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


private: System::Void EmailForm_Load(System::Object^ sender, System::EventArgs^ e) {
}



};
}
