#pragma once
#include <string>
#include <array>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Threading;
using namespace System::IO;
using namespace System::Runtime::InteropServices;
using namespace System::Configuration;

delegate void DelADDCLIENT(String^, bool);
delegate void DelADDQUEUE(cli::array<String^>^);
delegate void DelProgressBar(int, int);
delegate void DelCompelete(int);
delegate std::string MarshalString_dg(String^);
delegate void send_message_dg(String^, String^);

[UnmanagedFunctionPointerAttribute(CallingConvention::Cdecl)]
delegate void UIChangeProgress(int queueid, int value);
[UnmanagedFunctionPointerAttribute(CallingConvention::Cdecl)]
delegate void UINewClient(std::string, bool flag);
[UnmanagedFunctionPointerAttribute(CallingConvention::Cdecl)]
delegate void UINewRecieve(int Queueid, std::string Name, std::string Extention);
[UnmanagedFunctionPointerAttribute(CallingConvention::Cdecl)]
delegate void UIMessage(std::string user, std::string message);

[DllImport("ServerDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void  Startup(std::string, int, UIChangeProgress^, UINewClient^, UINewRecieve^, UIMessage^);

[DllImport("ServerDLL.dll", CallingConvention = CallingConvention::Cdecl)]
int SendFile(std::string path, std::string username);

[DllImport("ServerDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void StartDownload(int queueid);

[DllImport("ServerDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void sendmessage(std::string message, std::string username);

namespace WinFormServer {
	/// <summary>
	/// Summary for SocketForm
	/// </summary>
	public ref class SocketForm : public System::Windows::Forms::UserControl
	{
		DelADDCLIENT^ Event_ADDCLIENT;
		DelADDQUEUE^ Event_ADDQUEUE;
		DelProgressBar^ Event_Progress;
		send_message_dg^ Event_write;
		UIChangeProgress^ Event_UIChangeProgress;
		UINewClient^ Event_UINewClient;
		UINewRecieve^ Event_UINewRecieve;
		DelCompelete^ Event_Compelete;
		UIMessage^ Event_message;
		MarshalString_dg^ convert;
		bool IsRunning;
		Thread^ Browsfile;
		String^ path;
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;

		bool IsTransfer;
	public:

		SocketForm(void)
		{
			InitializeComponent();
			Rigster();
			IsRunning = false;
			IsTransfer = false;
		}
		void Rigster()
		{
			Event_ADDCLIENT += gcnew DelADDCLIENT(this, &SocketForm::AddClient);
			Event_ADDQUEUE += gcnew DelADDQUEUE(this, &SocketForm::AddNewQueue);
			Event_Progress += gcnew DelProgressBar(this, &SocketForm::ChangeProgress);
			Event_UIChangeProgress += gcnew UIChangeProgress(this, &SocketForm::ChangeProgress);
			Event_UINewClient += gcnew UINewClient(this, &SocketForm::ChangeClient);
			Event_UINewRecieve += gcnew UINewRecieve(this, &SocketForm::NewQueueRow);
			Event_Compelete += gcnew DelCompelete(this, &SocketForm::CompeleteTransfer);
			convert += gcnew MarshalString_dg(this, &SocketForm::MarshalString);
			Event_message += gcnew UIMessage(this, &SocketForm::user_message);
			Event_write += gcnew send_message_dg(this, &SocketForm::user_message_dg);
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SocketForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ColumnHeader^ QueueType;
	private: System::Windows::Forms::ColumnHeader^ Condition;
	private: System::Windows::Forms::ColumnHeader^ FileExtention;
	private: System::Windows::Forms::ColumnHeader^ FileName;
	private: System::Windows::Forms::ColumnHeader^ ID;
	private: System::Windows::Forms::ToolStripMenuItem^ messageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ uploadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ dataModeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ClientMode;
	private: System::Windows::Forms::TextBox^ IP;
	private: System::Windows::Forms::ToolStripMenuItem^ ServerMode;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ColumnHeader^ DateTime;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ Port;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ColumnHeader^ Date;
	private: System::Windows::Forms::ListView^ QueueList;
	private: System::Windows::Forms::ColumnHeader^ Time;
	private: System::Windows::Forms::ColumnHeader^ Type;
	private: System::Windows::Forms::ColumnHeader^ Tenasferd;
	private: System::Windows::Forms::ColumnHeader^ Name2;

	private: System::Windows::Forms::ColumnHeader^ RowIndex;
	private: Guna::UI::WinForms::GunaComboBox^ gunaComboBox1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton1;
	private: Guna::UI::WinForms::GunaProgressBar^ gunaProgressBar1;

	private: Guna::UI::WinForms::GunaWinCircleProgressIndicator^ gunaWinCircleProgressIndicator1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton2;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton3;
	private: Guna::UI::WinForms::GunaComboBox^ gunaComboBox2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SocketForm::typeid));
			this->QueueType = (gcnew System::Windows::Forms::ColumnHeader());
			this->Condition = (gcnew System::Windows::Forms::ColumnHeader());
			this->FileExtention = (gcnew System::Windows::Forms::ColumnHeader());
			this->FileName = (gcnew System::Windows::Forms::ColumnHeader());
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->messageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uploadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataModeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ClientMode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->IP = (gcnew System::Windows::Forms::TextBox());
			this->ServerMode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DateTime = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Port = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::ColumnHeader());
			this->QueueList = (gcnew System::Windows::Forms::ListView());
			this->Time = (gcnew System::Windows::Forms::ColumnHeader());
			this->Type = (gcnew System::Windows::Forms::ColumnHeader());
			this->Tenasferd = (gcnew System::Windows::Forms::ColumnHeader());
			this->Name2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->RowIndex = (gcnew System::Windows::Forms::ColumnHeader());
			this->gunaComboBox1 = (gcnew Guna::UI::WinForms::GunaComboBox());
			this->gunaButton1 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaProgressBar1 = (gcnew Guna::UI::WinForms::GunaProgressBar());
			this->gunaWinCircleProgressIndicator1 = (gcnew Guna::UI::WinForms::GunaWinCircleProgressIndicator());
			this->gunaButton2 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaButton3 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaComboBox2 = (gcnew Guna::UI::WinForms::GunaComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// QueueType
			// 
			this->QueueType->Text = L"QueueType";
			this->QueueType->Width = 142;
			// 
			// Condition
			// 
			this->Condition->Text = L"Condition";
			this->Condition->Width = 94;
			// 
			// FileExtention
			// 
			this->FileExtention->Text = L"Extention";
			this->FileExtention->Width = 94;
			// 
			// FileName
			// 
			this->FileName->Text = L"Name";
			this->FileName->Width = 96;
			// 
			// ID
			// 
			this->ID->Text = L"ID";
			this->ID->Width = 49;
			// 
			// messageToolStripMenuItem
			// 
			this->messageToolStripMenuItem->Enabled = false;
			this->messageToolStripMenuItem->Name = L"messageToolStripMenuItem";
			this->messageToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->messageToolStripMenuItem->Text = L"Message";
			// 
			// uploadToolStripMenuItem
			// 
			this->uploadToolStripMenuItem->Name = L"uploadToolStripMenuItem";
			this->uploadToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->uploadToolStripMenuItem->Text = L"Upload";
			this->uploadToolStripMenuItem->Click += gcnew System::EventHandler(this, &SocketForm::uploadToolStripMenuItem_Click);
			// 
			// fileToolStripMenuItem1
			// 
			this->fileToolStripMenuItem1->Checked = true;
			this->fileToolStripMenuItem1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->fileToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->uploadToolStripMenuItem });
			this->fileToolStripMenuItem1->Name = L"fileToolStripMenuItem1";
			this->fileToolStripMenuItem1->Size = System::Drawing::Size(120, 22);
			this->fileToolStripMenuItem1->Text = L"File";
			// 
			// dataModeToolStripMenuItem
			// 
			this->dataModeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem1,
					this->messageToolStripMenuItem
			});
			this->dataModeToolStripMenuItem->Name = L"dataModeToolStripMenuItem";
			this->dataModeToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->dataModeToolStripMenuItem->Text = L"Data Mode";
			// 
			// ClientMode
			// 
			this->ClientMode->Name = L"ClientMode";
			this->ClientMode->Size = System::Drawing::Size(106, 22);
			this->ClientMode->Text = L"Client";
			this->ClientMode->Click += gcnew System::EventHandler(this, &SocketForm::ClientMode_Click);
			// 
			// IP
			// 
			this->IP->Location = System::Drawing::Point(110, 55);
			this->IP->Name = L"IP";
			this->IP->Size = System::Drawing::Size(94, 20);
			this->IP->TabIndex = 23;
			this->IP->Text = L"127.0.0.1";
			// 
			// ServerMode
			// 
			this->ServerMode->Checked = true;
			this->ServerMode->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ServerMode->Name = L"ServerMode";
			this->ServerMode->Size = System::Drawing::Size(106, 22);
			this->ServerMode->Text = L"Server";
			this->ServerMode->Click += gcnew System::EventHandler(this, &SocketForm::ServerMode_Click);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ServerMode,
					this->ClientMode
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->fileToolStripMenuItem->Text = L"Mode";
			// 
			// DateTime
			// 
			this->DateTime->Text = L"Date and Time";
			this->DateTime->Width = 116;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->dataModeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(900, 24);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Port";
			// 
			// Port
			// 
			this->Port->Location = System::Drawing::Point(110, 94);
			this->Port->Name = L"Port";
			this->Port->Size = System::Drawing::Size(94, 20);
			this->Port->TabIndex = 25;
			this->Port->Text = L"7071";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"IP";
			// 
			// Date
			// 
			this->Date->Text = L"Date";
			this->Date->Width = 104;
			// 
			// QueueList
			// 
			this->QueueList->BackColor = System::Drawing::Color::White;
			this->QueueList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->ID, this->FileName,
					this->FileExtention, this->Condition, this->DateTime, this->QueueType
			});
			this->QueueList->HideSelection = false;
			this->QueueList->Location = System::Drawing::Point(279, 48);
			this->QueueList->Name = L"QueueList";
			this->QueueList->Size = System::Drawing::Size(560, 237);
			this->QueueList->TabIndex = 19;
			this->QueueList->UseCompatibleStateImageBehavior = false;
			this->QueueList->View = System::Windows::Forms::View::Details;
			this->QueueList->SelectedIndexChanged += gcnew System::EventHandler(this, &SocketForm::QueueList_SelectedIndexChanged);
			// 
			// Time
			// 
			this->Time->Text = L"Time";
			this->Time->Width = 80;
			// 
			// Type
			// 
			this->Type->Text = L"Type";
			// 
			// Tenasferd
			// 
			this->Tenasferd->Text = L"Tenasferd";
			this->Tenasferd->Width = 66;
			// 
			// Name2
			// 
			this->Name2->Text = L"File Name";
			this->Name2->Width = 118;
			// 
			// RowIndex
			// 
			this->RowIndex->Text = L"Index";
			this->RowIndex->Width = 42;
			// 
			// gunaComboBox1
			// 
			this->gunaComboBox1->BackColor = System::Drawing::Color::Transparent;
			this->gunaComboBox1->BaseColor = System::Drawing::Color::White;
			this->gunaComboBox1->BorderColor = System::Drawing::Color::Silver;
			this->gunaComboBox1->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->gunaComboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gunaComboBox1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaComboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->gunaComboBox1->ForeColor = System::Drawing::Color::Black;
			this->gunaComboBox1->FormattingEnabled = true;
			this->gunaComboBox1->Location = System::Drawing::Point(46, 133);
			this->gunaComboBox1->Name = L"gunaComboBox1";
			this->gunaComboBox1->OnHoverItemBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaComboBox1->OnHoverItemForeColor = System::Drawing::Color::White;
			this->gunaComboBox1->Size = System::Drawing::Size(158, 26);
			this->gunaComboBox1->TabIndex = 29;
			// 
			// gunaButton1
			// 
			this->gunaButton1->AnimationHoverSpeed = 0.07F;
			this->gunaButton1->AnimationSpeed = 0.03F;
			this->gunaButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->gunaButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaButton1->ForeColor = System::Drawing::Color::White;
			this->gunaButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton1.Image")));
			this->gunaButton1->ImageSize = System::Drawing::Size(25, 25);
			this->gunaButton1->Location = System::Drawing::Point(110, 554);
			this->gunaButton1->Name = L"gunaButton1";
			this->gunaButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton1->OnHoverImage = nullptr;
			this->gunaButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton1->Size = System::Drawing::Size(119, 32);
			this->gunaButton1->TabIndex = 30;
			this->gunaButton1->Text = L"start";
			this->gunaButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaButton1->Click += gcnew System::EventHandler(this, &SocketForm::gunaButton1_Click);
			// 
			// gunaProgressBar1
			// 
			this->gunaProgressBar1->BorderColor = System::Drawing::Color::Black;
			this->gunaProgressBar1->ColorStyle = Guna::UI::WinForms::ColorStyle::Default;
			this->gunaProgressBar1->IdleColor = System::Drawing::Color::Gainsboro;
			this->gunaProgressBar1->Location = System::Drawing::Point(279, 302);
			this->gunaProgressBar1->Name = L"gunaProgressBar1";
			this->gunaProgressBar1->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaProgressBar1->ProgressMinColor = System::Drawing::Color::DodgerBlue;
			this->gunaProgressBar1->Size = System::Drawing::Size(464, 23);
			this->gunaProgressBar1->TabIndex = 31;
			this->gunaProgressBar1->Click += gcnew System::EventHandler(this, &SocketForm::gunaProgressBar1_Click);
			// 
			// gunaWinCircleProgressIndicator1
			// 
			this->gunaWinCircleProgressIndicator1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gunaWinCircleProgressIndicator1->Location = System::Drawing::Point(140, 484);
			this->gunaWinCircleProgressIndicator1->Name = L"gunaWinCircleProgressIndicator1";
			this->gunaWinCircleProgressIndicator1->ProgressColor = System::Drawing::Color::DodgerBlue;
			this->gunaWinCircleProgressIndicator1->Size = System::Drawing::Size(64, 64);
			this->gunaWinCircleProgressIndicator1->TabIndex = 33;
			this->gunaWinCircleProgressIndicator1->Visible = false;
			// 
			// gunaButton2
			// 
			this->gunaButton2->AnimationHoverSpeed = 0.07F;
			this->gunaButton2->AnimationSpeed = 0.03F;
			this->gunaButton2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->gunaButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton2->ForeColor = System::Drawing::Color::White;
			this->gunaButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton2.Image")));
			this->gunaButton2->ImageAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaButton2->ImageSize = System::Drawing::Size(0, 0);
			this->gunaButton2->Location = System::Drawing::Point(749, 302);
			this->gunaButton2->Name = L"gunaButton2";
			this->gunaButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton2->OnHoverImage = nullptr;
			this->gunaButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton2->Size = System::Drawing::Size(100, 23);
			this->gunaButton2->TabIndex = 34;
			this->gunaButton2->Text = L"Download";
			this->gunaButton2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaButton2->Click += gcnew System::EventHandler(this, &SocketForm::gunaButton2_Click);
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
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox1->Location = System::Drawing::Point(279, 428);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(450, 158);
			this->gunaTextBox1->TabIndex = 35;
			// 
			// gunaButton3
			// 
			this->gunaButton3->AnimationHoverSpeed = 0.07F;
			this->gunaButton3->AnimationSpeed = 0.03F;
			this->gunaButton3->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->gunaButton3->BorderColor = System::Drawing::Color::Black;
			this->gunaButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaButton3->ForeColor = System::Drawing::Color::White;
			this->gunaButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton3.Image")));
			this->gunaButton3->ImageSize = System::Drawing::Size(25, 25);
			this->gunaButton3->Location = System::Drawing::Point(735, 554);
			this->gunaButton3->Name = L"gunaButton3";
			this->gunaButton3->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton3->OnHoverImage = nullptr;
			this->gunaButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton3->Size = System::Drawing::Size(119, 32);
			this->gunaButton3->TabIndex = 36;
			this->gunaButton3->Text = L"send";
			this->gunaButton3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaButton3->Click += gcnew System::EventHandler(this, &SocketForm::gunaButton3_Click);
			// 
			// gunaComboBox2
			// 
			this->gunaComboBox2->BackColor = System::Drawing::Color::Transparent;
			this->gunaComboBox2->BaseColor = System::Drawing::Color::White;
			this->gunaComboBox2->BorderColor = System::Drawing::Color::Silver;
			this->gunaComboBox2->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawFixed;
			this->gunaComboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gunaComboBox2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaComboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->gunaComboBox2->ForeColor = System::Drawing::Color::Black;
			this->gunaComboBox2->FormattingEnabled = true;
			this->gunaComboBox2->Location = System::Drawing::Point(735, 428);
			this->gunaComboBox2->Name = L"gunaComboBox2";
			this->gunaComboBox2->OnHoverItemBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaComboBox2->OnHoverItemForeColor = System::Drawing::Color::White;
			this->gunaComboBox2->Size = System::Drawing::Size(119, 26);
			this->gunaComboBox2->TabIndex = 37;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 165);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(94, 20);
			this->textBox1->TabIndex = 38;
			this->textBox1->Text = L"7071";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 13);
			this->label3->TabIndex = 39;
			this->label3->Text = L"id";
			this->label3->Click += gcnew System::EventHandler(this, &SocketForm::label3_Click);
			// 
			// SocketForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->gunaComboBox2);
			this->Controls->Add(this->gunaButton3);
			this->Controls->Add(this->gunaTextBox1);
			this->Controls->Add(this->gunaButton2);
			this->Controls->Add(this->gunaWinCircleProgressIndicator1);
			this->Controls->Add(this->gunaProgressBar1);
			this->Controls->Add(this->gunaButton1);
			this->Controls->Add(this->gunaComboBox1);
			this->Controls->Add(this->IP);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Port);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->QueueList);
			this->Name = L"SocketForm";
			this->Size = System::Drawing::Size(900, 624);
			this->Load += gcnew System::EventHandler(this, &SocketForm::SocketForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::string MarshalString(String^ s)
		{
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			std::string os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return os;
		}

		void AddClient(String^ Username, bool flag)
		{
			if (flag)
			{
				if (this->InvokeRequired)
				{
					this->Invoke(Event_ADDCLIENT, Username, flag);
					return;
				}
				gunaComboBox1->Items->Add(Username);
				gunaComboBox2->Items->Add(Username);
			}
			else
			{
				if (this->InvokeRequired)
					this->Invoke(Event_ADDCLIENT, Username, flag);
				gunaComboBox1->Items->Remove(Username);
				gunaComboBox2->Items->Remove(Username);
			}
		}

		void user_message(std::string user, std::string message)
		{
			String^ u = gcnew String(user.c_str());
			String^ m = gcnew String(message.c_str());
			user_message_dg(u, m);
		}
		void user_message_dg(String^ user, String^ message)
		{
			if (this->InvokeRequired)
				this->Invoke(Event_write, user, message);
			gunaTextBox1->Text = user + message;
		}
		void ChangeClient(std::string username, bool flag)
		{
			AddClient(gcnew String(username.c_str()), flag);
		}
		void AddNewQueue(cli::array<String^>^ row)
		{
			if (this->InvokeRequired)
			{
				this->Invoke(Event_ADDQUEUE, gcnew cli::array<Object^> { row });
				return;
			}
			ListViewItem^ item = gcnew ListViewItem(row);
			QueueList->Items->Add(item);
		}
		void NewQueueRow(int Queueid, String^ Name1, String^ Extention)
		{
			cli::array<String^>^ row = { Queueid.ToString() , Name1 , Extention , "0" , DateTime::Now.ToString() , "Upload" };
			AddNewQueue(row);
		}
		void NewQueueRow(int Queueid, std::string Name1, std::string Extention)
		{
			cli::array<String^>^ row = { Queueid.ToString() , gcnew String(Name1.c_str()) , gcnew String(Extention.c_str()) , "0" , DateTime::Now.ToString() , "Download" };
			Event_ADDQUEUE(row);
		}
		void CompeleteTransfer(int Queueid)
		{
			if (this->InvokeRequired)
			{
				this->Invoke(Event_Compelete, Queueid);
				return;
			}
			IsTransfer = false;
			for each (ListViewItem ^ var in QueueList->Items)
			{
				if (var->SubItems[0]->Text == Queueid.ToString())
					var->SubItems[3]->Text = "1";
			}
		}

	private: System::Void ClientMode_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ServerMode->Checked = false;
		ClientMode->Checked = true;
		gunaComboBox1->Visible = false;
		gunaButton1->Text = "Connect";
	}

	private: System::Void ServerMode_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ServerMode->Checked = true;
		ClientMode->Checked = false;
		gunaComboBox1->Visible = true;
		gunaButton1->Text = "Start";
	}
		   void StartServer()
		   {
			   std::string ip;
			   ip = MarshalString(IP->Text);

			   int port = Convert::ToInt32(Port->Text);
			   IsRunning = true;
			   Startup(ip, port, Event_UIChangeProgress, Event_UINewClient, Event_UINewRecieve, Event_message);
		   }

	private: System::Void uploadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			if (IsRunning && !IsTransfer)
			{
				ofd->Multiselect = false;
				ofd->CheckFileExists = true;
				ofd->CheckPathExists = true;
				ofd->Title = "Uplaod File";
				Browsfile = gcnew Thread(gcnew ThreadStart(this, &SocketForm::BrowsFile));
				Browsfile->SetApartmentState(ApartmentState::STA);
				Browsfile->Start();
				Browsfile->Join();

				std::string str;
				str = MarshalString(gunaComboBox1->SelectedItem->ToString());
				std::string path1 = MarshalString(path);
				int queueid = SendFile(path1, str);
				IsTransfer = true;
				NewQueueRow(queueid, Path::GetFileNameWithoutExtension(ofd->FileName), Path::GetExtension(ofd->FileName));
				//if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				//{
				//	try
				//	{
				//		std::string path;
				//		path=MarshalString(ofd->FileName);
				//		std::string str="Amirreza0";
				//		//str = MarshalString(gunaComboBox1->Text);
				//		int queueid = SendFile(path, str);
				//		IsTransfer = true;
				//		NewQueueRow(queueid, Path::GetFileNameWithoutExtension(ofd->FileName), Path::GetExtension(ofd->FileName));
				//	}
				//	catch (const std::exception& ex)
				//	{
				//		throw gcnew Exception(gcnew String(ex.what()));
				//	}
				//}
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void BTNStart_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Thread^ thread = gcnew Thread(gcnew ThreadStart(this, &SocketForm::StartServer));
		thread->Start();
		gunaButton1->Enabled = false;
	}

	private: System::Void QueueList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if ((((ListView^)sender)->SelectedItems->Count == 1) && IsRunning && !IsTransfer)
		{
			ListViewItem^ item = ((ListView^)sender)->SelectedItems[0];
			if (item->SubItems[5]->Text == "Download" && item->SubItems[3]->Text == "0")
			{
				gunaButton2->Enabled = true;
			}
			else
				gunaButton2->Enabled = false;
		}
		else
			gunaButton2->Enabled = false;
	}

		   void ChangeProgress(int queuid, int value)
		   {
			   if (this->InvokeRequired)
				   this->Invoke(Event_Progress, queuid, value);
			   gunaProgressBar1->Value = value;
			   if (gunaProgressBar1->Value == 100)
			   {
				   CompeleteTransfer(queuid);
				   gunaProgressBar1->Value == 0;
			   }
		   }

	private: System::Void BTNDonwload_Click(System::Object^ sender, System::EventArgs^ e)
	{
		gunaButton2->Enabled = false;
		int queueid = Convert::ToInt32(QueueList->SelectedItems[0]->SubItems[1]->Text);
		StartDownload(queueid);
	}
	private:void BrowsFile()
	{
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try
			{
				path = ofd->FileName;

				//  str= MarshalString(gunaComboBox1->Text);
			}
			catch (const std::exception& ex)
			{
				throw gcnew Exception(gcnew String(ex.what()));
			}
		}
	}
	private: System::Void gunaButton1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Thread^ thread = gcnew Thread(gcnew ThreadStart(this, &SocketForm::StartServer));
		thread->Start();
		gunaButton1->Enabled = false;
		gunaWinCircleProgressIndicator1->Visible = true;
	}
	private: System::Void gunaButton2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		gunaProgressBar1->Value = 0;
		int queueid = Convert::ToInt32(textBox1->Text);
		StartDownload(queueid);
	}
	private: System::Void gunaCircleProgressBar1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show(QueueList->SelectedItems[0]->SubItems[0]->Text);
	}

	private: System::Void gunaButton3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::string mess = MarshalString(gunaTextBox1->Text);
		std::string user = MarshalString(gunaComboBox2->SelectedItem->ToString());
		sendmessage(mess, user);
	}
	private: System::Void gunaProgressBar1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		

		
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void SocketForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}