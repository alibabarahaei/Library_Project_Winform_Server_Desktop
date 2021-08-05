#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace WinFormServer {

	/// <summary>
	/// Summary for registerationcomplete
	/// </summary>
	public ref class registerationcomplete : public System::Windows::Forms::UserControl
	{
	public:
		registerationcomplete(void)
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
		~registerationcomplete()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI2::WinForms::Guna2TextBox^ pass1;
	protected:
	private: Guna::UI2::WinForms::Guna2TextBox^ pass4;
	private: Guna::UI2::WinForms::Guna2TextBox^ pass3;
	private: Guna::UI2::WinForms::Guna2TextBox^ pass2;
	private: System::Windows::Forms::Label^ Validationhelplabel;
	private: Guna::UI2::WinForms::Guna2Button^ Finishregistration;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button2;
	private: System::Windows::Forms::LinkLabel^ sendagainlabel;
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
			this->pass1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->pass4 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->pass3 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->pass2 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->Validationhelplabel = (gcnew System::Windows::Forms::Label());
			this->Finishregistration = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button2 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->sendagainlabel = (gcnew System::Windows::Forms::LinkLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// pass1
			// 
			this->pass1->BorderRadius = 14;
			this->pass1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->pass1->DefaultText = L"";
			this->pass1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->pass1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->pass1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->pass1->DisabledState->Parent = this->pass1;
			this->pass1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->pass1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pass1->FocusedState->Parent = this->pass1;
			this->pass1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pass1->HoverState->Parent = this->pass1;
			this->pass1->Location = System::Drawing::Point(369, 245);
			this->pass1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pass1->Name = L"pass1";
			this->pass1->PasswordChar = '\0';
			this->pass1->PlaceholderText = L"";
			this->pass1->SelectedText = L"";
			this->pass1->ShadowDecoration->Parent = this->pass1;
			this->pass1->Size = System::Drawing::Size(53, 56);
			this->pass1->TabIndex = 0;
			// 
			// pass4
			// 
			this->pass4->BorderRadius = 14;
			this->pass4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->pass4->DefaultText = L"";
			this->pass4->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->pass4->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->pass4->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->pass4->DisabledState->Parent = this->pass4;
			this->pass4->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->pass4->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pass4->FocusedState->Parent = this->pass4;
			this->pass4->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pass4->HoverState->Parent = this->pass4;
			this->pass4->Location = System::Drawing::Point(628, 245);
			this->pass4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pass4->Name = L"pass4";
			this->pass4->PasswordChar = '\0';
			this->pass4->PlaceholderText = L"";
			this->pass4->SelectedText = L"";
			this->pass4->ShadowDecoration->Parent = this->pass4;
			this->pass4->Size = System::Drawing::Size(53, 56);
			this->pass4->TabIndex = 1;
			// 
			// pass3
			// 
			this->pass3->BorderRadius = 14;
			this->pass3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->pass3->DefaultText = L"";
			this->pass3->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->pass3->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->pass3->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->pass3->DisabledState->Parent = this->pass3;
			this->pass3->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->pass3->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pass3->FocusedState->Parent = this->pass3;
			this->pass3->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pass3->HoverState->Parent = this->pass3;
			this->pass3->Location = System::Drawing::Point(537, 245);
			this->pass3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pass3->Name = L"pass3";
			this->pass3->PasswordChar = '\0';
			this->pass3->PlaceholderText = L"";
			this->pass3->SelectedText = L"";
			this->pass3->ShadowDecoration->Parent = this->pass3;
			this->pass3->Size = System::Drawing::Size(53, 56);
			this->pass3->TabIndex = 2;
			// 
			// pass2
			// 
			this->pass2->BorderRadius = 14;
			this->pass2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->pass2->DefaultText = L"";
			this->pass2->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->pass2->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->pass2->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->pass2->DisabledState->Parent = this->pass2;
			this->pass2->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->pass2->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pass2->FocusedState->Parent = this->pass2;
			this->pass2->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->pass2->HoverState->Parent = this->pass2;
			this->pass2->Location = System::Drawing::Point(455, 245);
			this->pass2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pass2->Name = L"pass2";
			this->pass2->PasswordChar = '\0';
			this->pass2->PlaceholderText = L"";
			this->pass2->SelectedText = L"";
			this->pass2->ShadowDecoration->Parent = this->pass2;
			this->pass2->Size = System::Drawing::Size(53, 56);
			this->pass2->TabIndex = 3;
			// 
			// Validationhelplabel
			// 
			this->Validationhelplabel->AutoSize = true;
			this->Validationhelplabel->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->Validationhelplabel->Location = System::Drawing::Point(190, 119);
			this->Validationhelplabel->Name = L"Validationhelplabel";
			this->Validationhelplabel->Size = System::Drawing::Size(700, 64);
			this->Validationhelplabel->TabIndex = 4;
			this->Validationhelplabel->Text = L"لطفا رمز عبور ارسال شده به ایمیل خود را وارد کنید";
			// 
			// Finishregistration
			// 
			this->Finishregistration->BorderRadius = 14;
			this->Finishregistration->CheckedState->Parent = this->Finishregistration;
			this->Finishregistration->CustomImages->Parent = this->Finishregistration;
			this->Finishregistration->FillColor = System::Drawing::Color::Lime;
			this->Finishregistration->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->Finishregistration->ForeColor = System::Drawing::Color::White;
			this->Finishregistration->HoverState->Parent = this->Finishregistration;
			this->Finishregistration->Location = System::Drawing::Point(72, 566);
			this->Finishregistration->Name = L"Finishregistration";
			this->Finishregistration->ShadowDecoration->Color = System::Drawing::Color::LightCoral;
			this->Finishregistration->ShadowDecoration->Depth = 50;
			this->Finishregistration->ShadowDecoration->Parent = this->Finishregistration;
			this->Finishregistration->Size = System::Drawing::Size(180, 45);
			this->Finishregistration->TabIndex = 5;
			this->Finishregistration->Text = L"ثبت نام";
			// 
			// guna2Button2
			// 
			this->guna2Button2->BorderRadius = 14;
			this->guna2Button2->CheckedState->Parent = this->guna2Button2;
			this->guna2Button2->CustomImages->Parent = this->guna2Button2;
			this->guna2Button2->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->guna2Button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button2->ForeColor = System::Drawing::Color::White;
			this->guna2Button2->HoverState->Parent = this->guna2Button2;
			this->guna2Button2->Location = System::Drawing::Point(294, 566);
			this->guna2Button2->Name = L"guna2Button2";
			this->guna2Button2->ShadowDecoration->Parent = this->guna2Button2;
			this->guna2Button2->Size = System::Drawing::Size(180, 45);
			this->guna2Button2->TabIndex = 6;
			this->guna2Button2->Text = L"لغو";
			// 
			// sendagainlabel
			// 
			this->sendagainlabel->AutoSize = true;
			this->sendagainlabel->Enabled = false;
			this->sendagainlabel->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->sendagainlabel->Location = System::Drawing::Point(474, 332);
			this->sendagainlabel->Name = L"sendagainlabel";
			this->sendagainlabel->Size = System::Drawing::Size(91, 26);
			this->sendagainlabel->TabIndex = 7;
			this->sendagainlabel->TabStop = true;
			this->sendagainlabel->Text = L"ارسال مجدد کد";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &registerationcomplete::timer1_Tick);
			// 
			// registerationcomplete
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->sendagainlabel);
			this->Controls->Add(this->guna2Button2);
			this->Controls->Add(this->Finishregistration);
			this->Controls->Add(this->Validationhelplabel);
			this->Controls->Add(this->pass2);
			this->Controls->Add(this->pass3);
			this->Controls->Add(this->pass4);
			this->Controls->Add(this->pass1);
			this->Name = L"registerationcomplete";
			this->Size = System::Drawing::Size(1024, 768);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	sendagainlabel->Enabled = true;
}
};
}
