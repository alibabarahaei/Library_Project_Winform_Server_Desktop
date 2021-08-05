#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace WinFormServer {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
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
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button1;
	protected:
	private: System::Windows::Forms::Label^ familyname;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ usename;
	private: System::Windows::Forms::Label^ label5;
	private: Guna::UI2::WinForms::Guna2Button^ Cancelvalidation;
	private: Guna::UI2::WinForms::Guna2Button^ validationstep;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox1;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox2;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox3;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox4;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox5;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button2;
	private: Guna::UI2::WinForms::Guna2PictureBox^ guna2PictureBox1;

	protected:

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
			this->guna2Button1 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->familyname = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->usename = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Cancelvalidation = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->validationstep = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2TextBox1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2TextBox2 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2TextBox3 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2TextBox4 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2TextBox5 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2Button2 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2PictureBox1 = (gcnew Guna::UI2::WinForms::Guna2PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// guna2Button1
			// 
			this->guna2Button1->CheckedState->Parent = this->guna2Button1;
			this->guna2Button1->CustomImages->Parent = this->guna2Button1;
			this->guna2Button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button1->ForeColor = System::Drawing::Color::White;
			this->guna2Button1->HoverState->Parent = this->guna2Button1;
			this->guna2Button1->Location = System::Drawing::Point(3, 27);
			this->guna2Button1->Name = L"guna2Button1";
			this->guna2Button1->ShadowDecoration->Parent = this->guna2Button1;
			this->guna2Button1->Size = System::Drawing::Size(973, 45);
			this->guna2Button1->TabIndex = 0;
			this->guna2Button1->Text = L"ثبت نام";
			// 
			// familyname
			// 
			this->familyname->AutoSize = true;
			this->familyname->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->familyname->Location = System::Drawing::Point(851, 242);
			this->familyname->Name = L"familyname";
			this->familyname->Size = System::Drawing::Size(90, 29);
			this->familyname->TabIndex = 1;
			this->familyname->Text = L"نام خانوادگی";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->password->Location = System::Drawing::Point(864, 346);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(65, 29);
			this->password->TabIndex = 2;
			this->password->Text = L"رمز عبور";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(846, 404);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"تکرار رمز عبور";
			// 
			// usename
			// 
			this->usename->AutoSize = true;
			this->usename->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->usename->Location = System::Drawing::Point(858, 294);
			this->usename->Name = L"usename";
			this->usename->Size = System::Drawing::Size(76, 29);
			this->usename->TabIndex = 4;
			this->usename->Text = L"نام کاربری";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->Location = System::Drawing::Point(882, 190);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 29);
			this->label5->TabIndex = 5;
			this->label5->Text = L"نام";
			// 
			// Cancelvalidation
			// 
			this->Cancelvalidation->BorderRadius = 14;
			this->Cancelvalidation->CheckedState->Parent = this->Cancelvalidation;
			this->Cancelvalidation->CustomImages->Parent = this->Cancelvalidation;
			this->Cancelvalidation->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Cancelvalidation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->Cancelvalidation->ForeColor = System::Drawing::Color::White;
			this->Cancelvalidation->HoverState->Parent = this->Cancelvalidation;
			this->Cancelvalidation->Location = System::Drawing::Point(237, 543);
			this->Cancelvalidation->Name = L"Cancelvalidation";
			this->Cancelvalidation->ShadowDecoration->Parent = this->Cancelvalidation;
			this->Cancelvalidation->Size = System::Drawing::Size(180, 45);
			this->Cancelvalidation->TabIndex = 6;
			this->Cancelvalidation->Text = L"لغو";
			// 
			// validationstep
			// 
			this->validationstep->BorderRadius = 14;
			this->validationstep->CheckedState->Parent = this->validationstep;
			this->validationstep->CustomImages->Parent = this->validationstep;
			this->validationstep->FillColor = System::Drawing::Color::Lime;
			this->validationstep->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->validationstep->ForeColor = System::Drawing::Color::White;
			this->validationstep->HoverState->Parent = this->validationstep;
			this->validationstep->Location = System::Drawing::Point(39, 543);
			this->validationstep->Name = L"validationstep";
			this->validationstep->ShadowDecoration->Parent = this->validationstep;
			this->validationstep->Size = System::Drawing::Size(180, 45);
			this->validationstep->TabIndex = 7;
			this->validationstep->Text = L"مرحله بعد";
			// 
			// guna2TextBox1
			// 
			this->guna2TextBox1->BorderRadius = 14;
			this->guna2TextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox1->DefaultText = L"";
			this->guna2TextBox1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox1->DisabledState->Parent = this->guna2TextBox1;
			this->guna2TextBox1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox1->FocusedState->Parent = this->guna2TextBox1;
			this->guna2TextBox1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox1->HoverState->Parent = this->guna2TextBox1;
			this->guna2TextBox1->Location = System::Drawing::Point(486, 404);
			this->guna2TextBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->guna2TextBox1->Name = L"guna2TextBox1";
			this->guna2TextBox1->PasswordChar = '\0';
			this->guna2TextBox1->PlaceholderText = L"";
			this->guna2TextBox1->SelectedText = L"";
			this->guna2TextBox1->ShadowDecoration->Parent = this->guna2TextBox1;
			this->guna2TextBox1->Size = System::Drawing::Size(267, 44);
			this->guna2TextBox1->TabIndex = 8;
			// 
			// guna2TextBox2
			// 
			this->guna2TextBox2->BorderRadius = 14;
			this->guna2TextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox2->DefaultText = L"";
			this->guna2TextBox2->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox2->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox2->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox2->DisabledState->Parent = this->guna2TextBox2;
			this->guna2TextBox2->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox2->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox2->FocusedState->Parent = this->guna2TextBox2;
			this->guna2TextBox2->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox2->HoverState->Parent = this->guna2TextBox2;
			this->guna2TextBox2->Location = System::Drawing::Point(486, 346);
			this->guna2TextBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->guna2TextBox2->Name = L"guna2TextBox2";
			this->guna2TextBox2->PasswordChar = '\0';
			this->guna2TextBox2->PlaceholderText = L"";
			this->guna2TextBox2->SelectedText = L"";
			this->guna2TextBox2->ShadowDecoration->Parent = this->guna2TextBox2;
			this->guna2TextBox2->Size = System::Drawing::Size(267, 44);
			this->guna2TextBox2->TabIndex = 9;
			// 
			// guna2TextBox3
			// 
			this->guna2TextBox3->BorderRadius = 14;
			this->guna2TextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox3->DefaultText = L"";
			this->guna2TextBox3->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox3->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox3->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox3->DisabledState->Parent = this->guna2TextBox3;
			this->guna2TextBox3->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox3->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox3->FocusedState->Parent = this->guna2TextBox3;
			this->guna2TextBox3->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox3->HoverState->Parent = this->guna2TextBox3;
			this->guna2TextBox3->Location = System::Drawing::Point(486, 294);
			this->guna2TextBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->guna2TextBox3->Name = L"guna2TextBox3";
			this->guna2TextBox3->PasswordChar = '\0';
			this->guna2TextBox3->PlaceholderText = L"";
			this->guna2TextBox3->SelectedText = L"";
			this->guna2TextBox3->ShadowDecoration->Parent = this->guna2TextBox3;
			this->guna2TextBox3->Size = System::Drawing::Size(267, 44);
			this->guna2TextBox3->TabIndex = 10;
			// 
			// guna2TextBox4
			// 
			this->guna2TextBox4->BorderRadius = 14;
			this->guna2TextBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox4->DefaultText = L"";
			this->guna2TextBox4->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox4->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox4->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox4->DisabledState->Parent = this->guna2TextBox4;
			this->guna2TextBox4->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox4->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox4->FocusedState->Parent = this->guna2TextBox4;
			this->guna2TextBox4->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox4->HoverState->Parent = this->guna2TextBox4;
			this->guna2TextBox4->Location = System::Drawing::Point(486, 242);
			this->guna2TextBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->guna2TextBox4->Name = L"guna2TextBox4";
			this->guna2TextBox4->PasswordChar = '\0';
			this->guna2TextBox4->PlaceholderText = L"";
			this->guna2TextBox4->SelectedText = L"";
			this->guna2TextBox4->ShadowDecoration->Parent = this->guna2TextBox4;
			this->guna2TextBox4->Size = System::Drawing::Size(267, 44);
			this->guna2TextBox4->TabIndex = 11;
			// 
			// guna2TextBox5
			// 
			this->guna2TextBox5->BorderRadius = 14;
			this->guna2TextBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox5->DefaultText = L"";
			this->guna2TextBox5->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox5->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox5->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox5->DisabledState->Parent = this->guna2TextBox5;
			this->guna2TextBox5->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox5->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox5->FocusedState->Parent = this->guna2TextBox5;
			this->guna2TextBox5->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox5->HoverState->Parent = this->guna2TextBox5;
			this->guna2TextBox5->Location = System::Drawing::Point(486, 190);
			this->guna2TextBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->guna2TextBox5->Name = L"guna2TextBox5";
			this->guna2TextBox5->PasswordChar = '\0';
			this->guna2TextBox5->PlaceholderText = L"";
			this->guna2TextBox5->SelectedText = L"";
			this->guna2TextBox5->ShadowDecoration->Parent = this->guna2TextBox5;
			this->guna2TextBox5->Size = System::Drawing::Size(267, 44);
			this->guna2TextBox5->TabIndex = 12;
			// 
			// guna2Button2
			// 
			this->guna2Button2->BorderRadius = 14;
			this->guna2Button2->BorderStyle = System::Drawing::Drawing2D::DashStyle::Dash;
			this->guna2Button2->CheckedState->Parent = this->guna2Button2;
			this->guna2Button2->CustomImages->Parent = this->guna2Button2;
			this->guna2Button2->FillColor = System::Drawing::Color::Silver;
			this->guna2Button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button2->ForeColor = System::Drawing::Color::White;
			this->guna2Button2->HoverState->Parent = this->guna2Button2;
			this->guna2Button2->Location = System::Drawing::Point(101, 345);
			this->guna2Button2->Name = L"guna2Button2";
			this->guna2Button2->ShadowDecoration->Parent = this->guna2Button2;
			this->guna2Button2->Size = System::Drawing::Size(151, 45);
			this->guna2Button2->TabIndex = 14;
			this->guna2Button2->Text = L"guna2Button2";
			// 
			// guna2PictureBox1
			// 
			this->guna2PictureBox1->BorderRadius = 14;
			this->guna2PictureBox1->Location = System::Drawing::Point(39, 105);
			this->guna2PictureBox1->Name = L"guna2PictureBox1";
			this->guna2PictureBox1->ShadowDecoration->Parent = this->guna2PictureBox1;
			this->guna2PictureBox1->Size = System::Drawing::Size(300, 200);
			this->guna2PictureBox1->TabIndex = 15;
			this->guna2PictureBox1->TabStop = false;
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->guna2PictureBox1);
			this->Controls->Add(this->guna2Button2);
			this->Controls->Add(this->guna2TextBox5);
			this->Controls->Add(this->guna2TextBox4);
			this->Controls->Add(this->guna2TextBox3);
			this->Controls->Add(this->guna2TextBox2);
			this->Controls->Add(this->guna2TextBox1);
			this->Controls->Add(this->validationstep);
			this->Controls->Add(this->Cancelvalidation);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->usename);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->password);
			this->Controls->Add(this->familyname);
			this->Controls->Add(this->guna2Button1);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(979, 636);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guna2PictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
