#pragma once
#include "WinScreen.h"
namespace wordl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для Level1
	/// </summary>
	public ref class Level1 : public System::Windows::Forms::Form
	{
	public:
		Level1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			fillLetters();
			coinsLabel->Text = getCoins("coins.txt");
		}
	private: System::Windows::Forms::Button^ checkWordBtn;
	public:
	private: System::Windows::Forms::Button^ tipBtn;

		   array<TextBox^>^ letters = gcnew array<TextBox^>(30);
		   array<String^>^ lines = System::IO::File::ReadAllLines("words5.txt");
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ coinsLabel;
		   Random^ rnd = gcnew Random;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Level1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::TextBox^ let25;

	private: System::Windows::Forms::TextBox^ let24;

	private: System::Windows::Forms::TextBox^ let23;

	private: System::Windows::Forms::TextBox^ let22;

	private: System::Windows::Forms::TextBox^ let21;
	private: System::Windows::Forms::TextBox^ let45;


	private: System::Windows::Forms::TextBox^ let44;

	private: System::Windows::Forms::TextBox^ let43;

	private: System::Windows::Forms::TextBox^ let42;

	private: System::Windows::Forms::TextBox^ let41;

	private: System::Windows::Forms::TextBox^ let31;
	private: System::Windows::Forms::TextBox^ let32;
	private: System::Windows::Forms::TextBox^ let33;
	private: System::Windows::Forms::TextBox^ let34;
	private: System::Windows::Forms::TextBox^ let35;





	private: System::Windows::Forms::TextBox^ let55;

	private: System::Windows::Forms::TextBox^ let54;

	private: System::Windows::Forms::TextBox^ let53;

	private: System::Windows::Forms::TextBox^ let52;

	private: System::Windows::Forms::TextBox^ let51;
	private: System::Windows::Forms::TextBox^ let65;


	private: System::Windows::Forms::TextBox^ let64;

	private: System::Windows::Forms::TextBox^ let63;

	private: System::Windows::Forms::TextBox^ let62;

	private: System::Windows::Forms::TextBox^ let61;

	private: System::Windows::Forms::TextBox^ let15;

	private: System::Windows::Forms::TextBox^ let14;

	private: System::Windows::Forms::TextBox^ let13;

	private: System::Windows::Forms::TextBox^ let12;

	private: System::Windows::Forms::TextBox^ let11;
	private: System::Windows::Forms::TextBox^ wordInput;



	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Level1::typeid));
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->let25 = (gcnew System::Windows::Forms::TextBox());
			this->let24 = (gcnew System::Windows::Forms::TextBox());
			this->let23 = (gcnew System::Windows::Forms::TextBox());
			this->let22 = (gcnew System::Windows::Forms::TextBox());
			this->let21 = (gcnew System::Windows::Forms::TextBox());
			this->let45 = (gcnew System::Windows::Forms::TextBox());
			this->let44 = (gcnew System::Windows::Forms::TextBox());
			this->let43 = (gcnew System::Windows::Forms::TextBox());
			this->let42 = (gcnew System::Windows::Forms::TextBox());
			this->let41 = (gcnew System::Windows::Forms::TextBox());
			this->let31 = (gcnew System::Windows::Forms::TextBox());
			this->let32 = (gcnew System::Windows::Forms::TextBox());
			this->let33 = (gcnew System::Windows::Forms::TextBox());
			this->let34 = (gcnew System::Windows::Forms::TextBox());
			this->let35 = (gcnew System::Windows::Forms::TextBox());
			this->let55 = (gcnew System::Windows::Forms::TextBox());
			this->let54 = (gcnew System::Windows::Forms::TextBox());
			this->let53 = (gcnew System::Windows::Forms::TextBox());
			this->let52 = (gcnew System::Windows::Forms::TextBox());
			this->let51 = (gcnew System::Windows::Forms::TextBox());
			this->let65 = (gcnew System::Windows::Forms::TextBox());
			this->let64 = (gcnew System::Windows::Forms::TextBox());
			this->let63 = (gcnew System::Windows::Forms::TextBox());
			this->let62 = (gcnew System::Windows::Forms::TextBox());
			this->let61 = (gcnew System::Windows::Forms::TextBox());
			this->let15 = (gcnew System::Windows::Forms::TextBox());
			this->let14 = (gcnew System::Windows::Forms::TextBox());
			this->let13 = (gcnew System::Windows::Forms::TextBox());
			this->let12 = (gcnew System::Windows::Forms::TextBox());
			this->let11 = (gcnew System::Windows::Forms::TextBox());
			this->wordInput = (gcnew System::Windows::Forms::TextBox());
			this->checkWordBtn = (gcnew System::Windows::Forms::Button());
			this->tipBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->coinsLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->AutoSize = true;
			this->btnBack->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(140)), static_cast<System::Int32>(static_cast<System::Byte>(140)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->btnBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBack->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnBack->Location = System::Drawing::Point(417, 10);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(61, 29);
			this->btnBack->TabIndex = 0;
			this->btnBack->Text = L"Назад";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &Level1::back_Click);
			// 
			// let25
			// 
			this->let25->BackColor = System::Drawing::SystemColors::Window;
			this->let25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let25->Cursor = System::Windows::Forms::Cursors::Default;
			this->let25->Enabled = false;
			this->let25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let25->ForeColor = System::Drawing::Color::Black;
			this->let25->Location = System::Drawing::Point(390, 182);
			this->let25->Multiline = true;
			this->let25->Name = L"let25";
			this->let25->ReadOnly = true;
			this->let25->Size = System::Drawing::Size(60, 60);
			this->let25->TabIndex = 10;
			this->let25->Text = L"\r\n\r\n";
			this->let25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let24
			// 
			this->let24->BackColor = System::Drawing::SystemColors::Window;
			this->let24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let24->Cursor = System::Windows::Forms::Cursors::Default;
			this->let24->Enabled = false;
			this->let24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let24->ForeColor = System::Drawing::Color::Black;
			this->let24->Location = System::Drawing::Point(305, 182);
			this->let24->Multiline = true;
			this->let24->Name = L"let24";
			this->let24->ReadOnly = true;
			this->let24->Size = System::Drawing::Size(60, 60);
			this->let24->TabIndex = 9;
			this->let24->Text = L"\r\n\r\n";
			this->let24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let23
			// 
			this->let23->BackColor = System::Drawing::SystemColors::Window;
			this->let23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let23->Cursor = System::Windows::Forms::Cursors::Default;
			this->let23->Enabled = false;
			this->let23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let23->ForeColor = System::Drawing::Color::Black;
			this->let23->Location = System::Drawing::Point(220, 182);
			this->let23->Multiline = true;
			this->let23->Name = L"let23";
			this->let23->ReadOnly = true;
			this->let23->Size = System::Drawing::Size(60, 60);
			this->let23->TabIndex = 8;
			this->let23->Text = L"\r\n\r\n";
			this->let23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let22
			// 
			this->let22->BackColor = System::Drawing::SystemColors::Window;
			this->let22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let22->Cursor = System::Windows::Forms::Cursors::Default;
			this->let22->Enabled = false;
			this->let22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let22->ForeColor = System::Drawing::Color::Black;
			this->let22->Location = System::Drawing::Point(135, 182);
			this->let22->Multiline = true;
			this->let22->Name = L"let22";
			this->let22->ReadOnly = true;
			this->let22->Size = System::Drawing::Size(60, 60);
			this->let22->TabIndex = 7;
			this->let22->Text = L"\r\n\r\n";
			this->let22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let21
			// 
			this->let21->BackColor = System::Drawing::SystemColors::Window;
			this->let21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let21->Cursor = System::Windows::Forms::Cursors::Default;
			this->let21->Enabled = false;
			this->let21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let21->ForeColor = System::Drawing::Color::Black;
			this->let21->Location = System::Drawing::Point(50, 182);
			this->let21->Multiline = true;
			this->let21->Name = L"let21";
			this->let21->ReadOnly = true;
			this->let21->Size = System::Drawing::Size(60, 60);
			this->let21->TabIndex = 6;
			this->let21->Text = L"\r\n\r\n";
			this->let21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let45
			// 
			this->let45->BackColor = System::Drawing::SystemColors::Window;
			this->let45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let45->Cursor = System::Windows::Forms::Cursors::Default;
			this->let45->Enabled = false;
			this->let45->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let45->ForeColor = System::Drawing::Color::Black;
			this->let45->Location = System::Drawing::Point(390, 346);
			this->let45->Multiline = true;
			this->let45->Name = L"let45";
			this->let45->ReadOnly = true;
			this->let45->Size = System::Drawing::Size(60, 60);
			this->let45->TabIndex = 20;
			this->let45->Text = L"\r\n\r\n";
			this->let45->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let44
			// 
			this->let44->BackColor = System::Drawing::SystemColors::Window;
			this->let44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let44->Cursor = System::Windows::Forms::Cursors::Default;
			this->let44->Enabled = false;
			this->let44->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let44->ForeColor = System::Drawing::Color::Black;
			this->let44->Location = System::Drawing::Point(305, 346);
			this->let44->Multiline = true;
			this->let44->Name = L"let44";
			this->let44->ReadOnly = true;
			this->let44->Size = System::Drawing::Size(60, 60);
			this->let44->TabIndex = 19;
			this->let44->Text = L"\r\n\r\n";
			this->let44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let43
			// 
			this->let43->BackColor = System::Drawing::SystemColors::Window;
			this->let43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let43->Cursor = System::Windows::Forms::Cursors::Default;
			this->let43->Enabled = false;
			this->let43->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let43->ForeColor = System::Drawing::Color::Black;
			this->let43->Location = System::Drawing::Point(220, 346);
			this->let43->Multiline = true;
			this->let43->Name = L"let43";
			this->let43->ReadOnly = true;
			this->let43->Size = System::Drawing::Size(60, 60);
			this->let43->TabIndex = 18;
			this->let43->Text = L"\r\n\r\n";
			this->let43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let42
			// 
			this->let42->BackColor = System::Drawing::SystemColors::Window;
			this->let42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let42->Cursor = System::Windows::Forms::Cursors::Default;
			this->let42->Enabled = false;
			this->let42->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let42->ForeColor = System::Drawing::Color::Black;
			this->let42->Location = System::Drawing::Point(135, 346);
			this->let42->Multiline = true;
			this->let42->Name = L"let42";
			this->let42->ReadOnly = true;
			this->let42->Size = System::Drawing::Size(60, 60);
			this->let42->TabIndex = 17;
			this->let42->Text = L"\r\n\r\n";
			this->let42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let41
			// 
			this->let41->BackColor = System::Drawing::SystemColors::Window;
			this->let41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let41->Cursor = System::Windows::Forms::Cursors::Default;
			this->let41->Enabled = false;
			this->let41->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let41->ForeColor = System::Drawing::Color::Black;
			this->let41->Location = System::Drawing::Point(50, 346);
			this->let41->Multiline = true;
			this->let41->Name = L"let41";
			this->let41->ReadOnly = true;
			this->let41->Size = System::Drawing::Size(60, 60);
			this->let41->TabIndex = 16;
			this->let41->Text = L"\r\n\r\n";
			this->let41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let31
			// 
			this->let31->BackColor = System::Drawing::SystemColors::Window;
			this->let31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let31->Cursor = System::Windows::Forms::Cursors::Default;
			this->let31->Enabled = false;
			this->let31->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let31->ForeColor = System::Drawing::Color::Black;
			this->let31->Location = System::Drawing::Point(50, 264);
			this->let31->Multiline = true;
			this->let31->Name = L"let31";
			this->let31->ReadOnly = true;
			this->let31->Size = System::Drawing::Size(60, 60);
			this->let31->TabIndex = 11;
			this->let31->Text = L"\r\n\r\n";
			this->let31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let32
			// 
			this->let32->BackColor = System::Drawing::SystemColors::Window;
			this->let32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let32->Cursor = System::Windows::Forms::Cursors::Default;
			this->let32->Enabled = false;
			this->let32->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let32->ForeColor = System::Drawing::Color::Black;
			this->let32->Location = System::Drawing::Point(135, 264);
			this->let32->Multiline = true;
			this->let32->Name = L"let32";
			this->let32->ReadOnly = true;
			this->let32->Size = System::Drawing::Size(60, 60);
			this->let32->TabIndex = 12;
			this->let32->Text = L"\r\n\r\n";
			this->let32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let33
			// 
			this->let33->BackColor = System::Drawing::SystemColors::Window;
			this->let33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let33->Cursor = System::Windows::Forms::Cursors::Default;
			this->let33->Enabled = false;
			this->let33->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let33->ForeColor = System::Drawing::Color::Black;
			this->let33->Location = System::Drawing::Point(220, 264);
			this->let33->Multiline = true;
			this->let33->Name = L"let33";
			this->let33->ReadOnly = true;
			this->let33->Size = System::Drawing::Size(60, 60);
			this->let33->TabIndex = 13;
			this->let33->Text = L"\r\n\r\n";
			this->let33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let34
			// 
			this->let34->BackColor = System::Drawing::SystemColors::Window;
			this->let34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let34->Cursor = System::Windows::Forms::Cursors::Default;
			this->let34->Enabled = false;
			this->let34->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let34->ForeColor = System::Drawing::Color::Black;
			this->let34->Location = System::Drawing::Point(305, 264);
			this->let34->Multiline = true;
			this->let34->Name = L"let34";
			this->let34->ReadOnly = true;
			this->let34->Size = System::Drawing::Size(60, 60);
			this->let34->TabIndex = 14;
			this->let34->Text = L"\r\n\r\n";
			this->let34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let35
			// 
			this->let35->BackColor = System::Drawing::SystemColors::Window;
			this->let35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let35->Cursor = System::Windows::Forms::Cursors::Default;
			this->let35->Enabled = false;
			this->let35->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let35->ForeColor = System::Drawing::Color::Black;
			this->let35->Location = System::Drawing::Point(390, 264);
			this->let35->Multiline = true;
			this->let35->Name = L"let35";
			this->let35->ReadOnly = true;
			this->let35->Size = System::Drawing::Size(60, 60);
			this->let35->TabIndex = 15;
			this->let35->Text = L"\r\n\r\n";
			this->let35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let55
			// 
			this->let55->BackColor = System::Drawing::SystemColors::Window;
			this->let55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let55->Cursor = System::Windows::Forms::Cursors::Default;
			this->let55->Enabled = false;
			this->let55->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let55->ForeColor = System::Drawing::Color::Black;
			this->let55->Location = System::Drawing::Point(390, 428);
			this->let55->Multiline = true;
			this->let55->Name = L"let55";
			this->let55->ReadOnly = true;
			this->let55->Size = System::Drawing::Size(60, 60);
			this->let55->TabIndex = 25;
			this->let55->Text = L"\r\n\r\n";
			this->let55->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let54
			// 
			this->let54->BackColor = System::Drawing::SystemColors::Window;
			this->let54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let54->Cursor = System::Windows::Forms::Cursors::Default;
			this->let54->Enabled = false;
			this->let54->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let54->ForeColor = System::Drawing::Color::Black;
			this->let54->Location = System::Drawing::Point(305, 428);
			this->let54->Multiline = true;
			this->let54->Name = L"let54";
			this->let54->ReadOnly = true;
			this->let54->Size = System::Drawing::Size(60, 60);
			this->let54->TabIndex = 24;
			this->let54->Text = L"\r\n\r\n";
			this->let54->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let53
			// 
			this->let53->BackColor = System::Drawing::SystemColors::Window;
			this->let53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let53->Cursor = System::Windows::Forms::Cursors::Default;
			this->let53->Enabled = false;
			this->let53->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let53->ForeColor = System::Drawing::Color::Black;
			this->let53->Location = System::Drawing::Point(220, 428);
			this->let53->Multiline = true;
			this->let53->Name = L"let53";
			this->let53->ReadOnly = true;
			this->let53->Size = System::Drawing::Size(60, 60);
			this->let53->TabIndex = 23;
			this->let53->Text = L"\r\n\r\n";
			this->let53->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let52
			// 
			this->let52->BackColor = System::Drawing::SystemColors::Window;
			this->let52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let52->Cursor = System::Windows::Forms::Cursors::Default;
			this->let52->Enabled = false;
			this->let52->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let52->ForeColor = System::Drawing::Color::Black;
			this->let52->Location = System::Drawing::Point(135, 428);
			this->let52->Multiline = true;
			this->let52->Name = L"let52";
			this->let52->ReadOnly = true;
			this->let52->Size = System::Drawing::Size(60, 60);
			this->let52->TabIndex = 22;
			this->let52->Text = L"\r\n\r\n";
			this->let52->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let51
			// 
			this->let51->BackColor = System::Drawing::SystemColors::Window;
			this->let51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let51->Cursor = System::Windows::Forms::Cursors::Default;
			this->let51->Enabled = false;
			this->let51->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let51->ForeColor = System::Drawing::Color::Black;
			this->let51->Location = System::Drawing::Point(50, 428);
			this->let51->Multiline = true;
			this->let51->Name = L"let51";
			this->let51->ReadOnly = true;
			this->let51->Size = System::Drawing::Size(60, 60);
			this->let51->TabIndex = 21;
			this->let51->Text = L"\r\n\r\n";
			this->let51->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let65
			// 
			this->let65->BackColor = System::Drawing::SystemColors::Window;
			this->let65->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let65->Cursor = System::Windows::Forms::Cursors::Default;
			this->let65->Enabled = false;
			this->let65->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let65->ForeColor = System::Drawing::Color::Black;
			this->let65->Location = System::Drawing::Point(390, 510);
			this->let65->Multiline = true;
			this->let65->Name = L"let65";
			this->let65->ReadOnly = true;
			this->let65->Size = System::Drawing::Size(60, 60);
			this->let65->TabIndex = 30;
			this->let65->Text = L"\r\n\r\n";
			this->let65->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let64
			// 
			this->let64->BackColor = System::Drawing::SystemColors::Window;
			this->let64->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let64->Cursor = System::Windows::Forms::Cursors::Default;
			this->let64->Enabled = false;
			this->let64->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let64->ForeColor = System::Drawing::Color::Black;
			this->let64->Location = System::Drawing::Point(305, 510);
			this->let64->Multiline = true;
			this->let64->Name = L"let64";
			this->let64->ReadOnly = true;
			this->let64->Size = System::Drawing::Size(60, 60);
			this->let64->TabIndex = 29;
			this->let64->Text = L"\r\n\r\n";
			this->let64->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let63
			// 
			this->let63->BackColor = System::Drawing::SystemColors::Window;
			this->let63->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let63->Cursor = System::Windows::Forms::Cursors::Default;
			this->let63->Enabled = false;
			this->let63->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let63->ForeColor = System::Drawing::Color::Black;
			this->let63->Location = System::Drawing::Point(220, 510);
			this->let63->Multiline = true;
			this->let63->Name = L"let63";
			this->let63->ReadOnly = true;
			this->let63->Size = System::Drawing::Size(60, 60);
			this->let63->TabIndex = 28;
			this->let63->Text = L"\r\n\r\n";
			this->let63->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let62
			// 
			this->let62->BackColor = System::Drawing::SystemColors::Window;
			this->let62->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let62->Cursor = System::Windows::Forms::Cursors::Default;
			this->let62->Enabled = false;
			this->let62->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let62->ForeColor = System::Drawing::Color::Black;
			this->let62->Location = System::Drawing::Point(135, 510);
			this->let62->Multiline = true;
			this->let62->Name = L"let62";
			this->let62->ReadOnly = true;
			this->let62->Size = System::Drawing::Size(60, 60);
			this->let62->TabIndex = 27;
			this->let62->Text = L"\r\n\r\n";
			this->let62->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let61
			// 
			this->let61->BackColor = System::Drawing::SystemColors::Window;
			this->let61->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let61->Cursor = System::Windows::Forms::Cursors::Default;
			this->let61->Enabled = false;
			this->let61->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let61->ForeColor = System::Drawing::Color::Black;
			this->let61->Location = System::Drawing::Point(50, 510);
			this->let61->Multiline = true;
			this->let61->Name = L"let61";
			this->let61->ReadOnly = true;
			this->let61->Size = System::Drawing::Size(60, 60);
			this->let61->TabIndex = 26;
			this->let61->Text = L"\r\n\r\n";
			this->let61->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let15
			// 
			this->let15->BackColor = System::Drawing::SystemColors::Window;
			this->let15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let15->Cursor = System::Windows::Forms::Cursors::Default;
			this->let15->Enabled = false;
			this->let15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let15->ForeColor = System::Drawing::Color::Black;
			this->let15->Location = System::Drawing::Point(390, 100);
			this->let15->Multiline = true;
			this->let15->Name = L"let15";
			this->let15->ReadOnly = true;
			this->let15->Size = System::Drawing::Size(60, 60);
			this->let15->TabIndex = 35;
			this->let15->Text = L"\r\n\r\n";
			this->let15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let14
			// 
			this->let14->BackColor = System::Drawing::SystemColors::Window;
			this->let14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let14->Cursor = System::Windows::Forms::Cursors::Default;
			this->let14->Enabled = false;
			this->let14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let14->ForeColor = System::Drawing::Color::Black;
			this->let14->Location = System::Drawing::Point(305, 100);
			this->let14->Multiline = true;
			this->let14->Name = L"let14";
			this->let14->ReadOnly = true;
			this->let14->Size = System::Drawing::Size(60, 60);
			this->let14->TabIndex = 34;
			this->let14->Text = L"\r\n\r\n";
			this->let14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let13
			// 
			this->let13->BackColor = System::Drawing::SystemColors::Window;
			this->let13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let13->Cursor = System::Windows::Forms::Cursors::Default;
			this->let13->Enabled = false;
			this->let13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let13->ForeColor = System::Drawing::Color::Black;
			this->let13->Location = System::Drawing::Point(220, 100);
			this->let13->Multiline = true;
			this->let13->Name = L"let13";
			this->let13->ReadOnly = true;
			this->let13->Size = System::Drawing::Size(60, 60);
			this->let13->TabIndex = 33;
			this->let13->Text = L"\r\n\r\n";
			this->let13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let12
			// 
			this->let12->BackColor = System::Drawing::SystemColors::Window;
			this->let12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let12->Cursor = System::Windows::Forms::Cursors::Default;
			this->let12->Enabled = false;
			this->let12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let12->ForeColor = System::Drawing::Color::Black;
			this->let12->Location = System::Drawing::Point(135, 100);
			this->let12->Multiline = true;
			this->let12->Name = L"let12";
			this->let12->ReadOnly = true;
			this->let12->Size = System::Drawing::Size(60, 60);
			this->let12->TabIndex = 32;
			this->let12->Text = L"\r\n\r\n";
			this->let12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// let11
			// 
			this->let11->BackColor = System::Drawing::SystemColors::Window;
			this->let11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->let11->Cursor = System::Windows::Forms::Cursors::Default;
			this->let11->Enabled = false;
			this->let11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->let11->ForeColor = System::Drawing::Color::Black;
			this->let11->Location = System::Drawing::Point(50, 100);
			this->let11->Multiline = true;
			this->let11->Name = L"let11";
			this->let11->Size = System::Drawing::Size(60, 60);
			this->let11->TabIndex = 31;
			this->let11->Text = L"\r\n\r\n";
			this->let11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// wordInput
			// 
			this->wordInput->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wordInput->Location = System::Drawing::Point(50, 602);
			this->wordInput->Name = L"wordInput";
			this->wordInput->Size = System::Drawing::Size(172, 48);
			this->wordInput->TabIndex = 36;
			this->wordInput->TextChanged += gcnew System::EventHandler(this, &Level1::wordInput_TextChanged);
			this->wordInput->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Level1::Level1_KeyUp);
			// 
			// checkWordBtn
			// 
			this->checkWordBtn->AutoSize = true;
			this->checkWordBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkWordBtn->Location = System::Drawing::Point(244, 602);
			this->checkWordBtn->Name = L"checkWordBtn";
			this->checkWordBtn->Size = System::Drawing::Size(206, 50);
			this->checkWordBtn->TabIndex = 37;
			this->checkWordBtn->Text = L"Проверить";
			this->checkWordBtn->UseVisualStyleBackColor = true;
			this->checkWordBtn->Click += gcnew System::EventHandler(this, &Level1::checkWordBtn_Click);
			// 
			// tipBtn
			// 
			this->tipBtn->AutoSize = true;
			this->tipBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tipBtn->Location = System::Drawing::Point(337, 45);
			this->tipBtn->Name = L"tipBtn";
			this->tipBtn->Size = System::Drawing::Size(113, 32);
			this->tipBtn->TabIndex = 38;
			this->tipBtn->Text = L"Подсказка";
			this->tipBtn->UseVisualStyleBackColor = true;
			this->tipBtn->Click += gcnew System::EventHandler(this, &Level1::tipBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(52, 50);
			this->pictureBox1->TabIndex = 40;
			this->pictureBox1->TabStop = false;
			// 
			// coinsLabel
			// 
			this->coinsLabel->AutoSize = true;
			this->coinsLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->coinsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->coinsLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->coinsLabel->Location = System::Drawing::Point(70, 27);
			this->coinsLabel->Name = L"coinsLabel";
			this->coinsLabel->Size = System::Drawing::Size(41, 37);
			this->coinsLabel->TabIndex = 39;
			this->coinsLabel->Text = L"   ";
			// 
			// Level1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 700);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->coinsLabel);
			this->Controls->Add(this->tipBtn);
			this->Controls->Add(this->checkWordBtn);
			this->Controls->Add(this->let15);
			this->Controls->Add(this->let14);
			this->Controls->Add(this->let13);
			this->Controls->Add(this->let12);
			this->Controls->Add(this->let11);
			this->Controls->Add(this->let65);
			this->Controls->Add(this->let64);
			this->Controls->Add(this->let63);
			this->Controls->Add(this->let62);
			this->Controls->Add(this->let61);
			this->Controls->Add(this->let55);
			this->Controls->Add(this->let54);
			this->Controls->Add(this->let53);
			this->Controls->Add(this->let52);
			this->Controls->Add(this->let51);
			this->Controls->Add(this->let45);
			this->Controls->Add(this->let44);
			this->Controls->Add(this->let43);
			this->Controls->Add(this->let42);
			this->Controls->Add(this->let41);
			this->Controls->Add(this->let35);
			this->Controls->Add(this->let34);
			this->Controls->Add(this->let33);
			this->Controls->Add(this->let32);
			this->Controls->Add(this->let31);
			this->Controls->Add(this->let25);
			this->Controls->Add(this->let24);
			this->Controls->Add(this->let23);
			this->Controls->Add(this->let22);
			this->Controls->Add(this->let21);
			this->Controls->Add(this->wordInput);
			this->Controls->Add(this->btnBack);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Level1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Level1";
			this->Load += gcnew System::EventHandler(this, &Level1::Level1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void fillLetters() {
			letters[0] = let11;
			letters[1] = let12;
			letters[2] = let13;
			letters[3] = let14;
			letters[4] = let15;
			letters[5] = let21;
			letters[6] = let22;
			letters[7] = let23;
			letters[8] = let24;
			letters[9] = let25;
			letters[10] = let31;
			letters[11] = let32;
			letters[12] = let33;
			letters[13] = let34;
			letters[14] = let35;
			letters[15] = let41;
			letters[16] = let42;
			letters[17] = let43;
			letters[18] = let44;
			letters[19] = let45;
			letters[20] = let51;
			letters[21] = let52;
			letters[22] = let53;
			letters[23] = let54;
			letters[24] = let55;
			letters[25] = let61;
			letters[26] = let62;
			letters[27] = let63;
			letters[28] = let64;
			letters[29] = let65;
		}
#pragma endregion
	private: int wNum = rnd->Next(0, 3483);
	private: String^ corrWord = Convert::ToString(lines[wNum])->Replace(" ", "");
	private: int lcounter = 1;
	private: int wcounter = 0;
	private: bool wordInputTextChanged = false;
	private: char eventToChar(KeyEventArgs^ e)
	{
		int keyValue = e->KeyValue;
		return (char)keyValue;
	}
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		lcounter = 1;
		wcounter = 0;
		this->Close();
		wordInputTextChanged = false;
	}
	private: bool isLetter(int keyValue) {
		if ((keyValue >= (int)Keys::A && keyValue <= (int)Keys::Z) || keyValue == (int)Keys::OemCloseBrackets || keyValue == (int)Keys::OemOpenBrackets || keyValue == (int)Keys::OemSemicolon || keyValue == (int)Keys::OemQuotes || keyValue == (int)Keys::Oemcomma || keyValue == (int)Keys::OemPeriod)
			return true;
		return false;
	}
	private: System::Void Level1_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Level1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		int keyValue = e->KeyValue;
		if (lcounter < 7)
		{
			if (keyValue != (int)Keys::LShiftKey) {
				if ((keyValue == (int)Keys::Back || keyValue == (int)Keys::Delete) && wordInput->Text->Length > 0 && wordInputTextChanged) {
					lcounter--;
					letters[wcounter * 5 + lcounter - 1]->Text = "";
					wordInputTextChanged = false;
				}
				else if (isLetter(keyValue) && wordInput->Text->Length <= 5) {
					letters[wcounter * 5 + lcounter - 1]->Text = Convert::ToString(wordInput->Text[wordInput->Text->Length - 1]);
					lcounter++;
					wordInputTextChanged = false;
				}
				else if ((keyValue == (int)Keys::Back || keyValue == (int)Keys::Delete) && wordInput->Text->Length == 0 && wordInputTextChanged) {
					lcounter--;
					letters[wcounter * 5 + lcounter - 1]->Text = "";
					wordInputTextChanged = false;
				}
				else if ((keyValue == (int)Keys::Back || keyValue == (int)Keys::Delete) && wordInput->Text->Length == 0 && !wordInputTextChanged) {
					wordInputTextChanged = false;
				}
				else if ((keyValue == (int)Keys::Back || keyValue == (int)Keys::Delete) && wordInput->Text->Length > 0 && !wordInputTextChanged) {
					wordInputTextChanged = false;
				}
				else if (isLetter(keyValue) && wordInput->Text->Length > 5 || (!isLetter(keyValue))) {
					wordInput->Text = wordInput->Text->Substring(0, wordInput->Text->Length - 1);
					wordInput->SelectionStart = wordInput->Text->Length;
					wordInputTextChanged = false;
				}
			}
		}
		else {

		}
	}
	private: Color setColor(int r, int g, int b) {
		Color c = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(r)), static_cast<System::Int32>(static_cast<System::Byte>(g)), static_cast<System::Int32>(static_cast<System::Byte>(b)));
		return c;
	}
private: System::Void wordInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	wordInputTextChanged = true;
}

private: int max(int a, int b) {
	return(a > b ? a : b);
}

	private: System::String^ getCoins(String^ path) {
		String^ s = System::IO::File::ReadAllText(path);
		return s;
	}
private: System::Void editCoins(int is_Win) {
	StreamReader^ sre = gcnew StreamReader("coins.txt");
	int c = System::Convert::ToInt32(sre->ReadLine());
	sre->Close();
	StreamWriter^ swr = gcnew StreamWriter("coins.txt", false);
	swr->WriteLine(System::Convert::ToString(max(is_Win + c, 0)));
	swr->Close();
	return;
}

private: System::Void tipBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	StreamReader^ sre = gcnew StreamReader("coins.txt");
	int c = System::Convert::ToInt32(sre->ReadLine());
	sre->Close();
	if (Convert::ToInt32(c) >= 5) {
		editCoins(-5);
		coinsLabel->Text = getCoins("coins.txt");
		int randInt = rnd->Next(1, 5);
		MessageBox::Show(randInt + "-я буква слова: " + corrWord->Substring(randInt - 1, 1));
	}
	else {
		MessageBox::Show("Не хватает монет!");
	}
}

private: int count(String^ word, String^ letter) {
	int c = 0;
	for (int i = 0; i < word->Length; i++) {
		if (word->Substring(i, 1) == letter) c++;
	}
	return c;
}
private: System::Void checkWordBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (wordInput->Text->Length < 5)  {
		MessageBox::Show("В слове меньше 5 букв");
	}
	else {
		if (corrWord == wordInput->Text) {
			editCoins(4);
			WinScreen^ ws = gcnew WinScreen;
			ws->FormClosing += gcnew FormClosingEventHandler(this, &Level1::AnotherForm_FormClosing);
			ws->Show();
			Hide();
		}
		else {
			for (int i = 0; i < 5; i++) {
				if (corrWord->Substring(i, 1) == wordInput->Text->Substring(i, 1) /*[i * wcounter]->Text */) {
					letters[i + 5 * wcounter]->BackColor = setColor(65, 250, 32);
				}
				else if (corrWord->Contains(wordInput->Text->Substring(i, 1))
					&& count(wordInput->Text, wordInput->Text->Substring(i,1)) <= count(corrWord, corrWord->Substring(i, 1))) //(wordInput->Text->Length - wordInput->Text->Replace(wordInput->Text->Substring(i, 1), "")->Length) <= (corrWord->Length - corrWord->Replace(corrWord->Substring(i, 1), "")->Length)) 
				{
					letters[i + 5 * wcounter]->BackColor = setColor(232, 250, 32);
				}
				else letters[i + 5 * wcounter]->BackColor = setColor(200, 200, 200);
			}
			if (wcounter == 5) {
				editCoins(-6);
				MessageBox::Show("Вы проиграли\nСлово: " + corrWord);
				this->Close();
			}
		}
		wcounter += 1;
		lcounter = 1;
		wordInput->Text = "";
	}
	
}
private: System::Void AnotherForm_FormClosing(Object^ sender, FormClosingEventArgs^ e)
{
	Close();
}
	   private: Void changeTextBoxColor(TextBox^ tb, Color c) {
		   tb->BackColor = c;
		   return;
	   }
};
}
