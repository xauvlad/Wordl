#pragma once
#include "Level1.h"
#include "Level2.h"
#include "Level3.h"

namespace wordl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	/// 
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->coinsLabel->Text = getCoins("coins.txt");
			this->name->Location = Point((ClientSize.Width - this->name->Width) / 2, 120);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Label^ coinsLabel;
	private: System::Windows::Forms::Button^ test;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ credits;


	private: System::ComponentModel::IContainer^ components;






	protected:

	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->name = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->coinsLabel = (gcnew System::Windows::Forms::Label());
			this->test = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->credits = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name->Location = System::Drawing::Point(143, 166);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(215, 70);
			this->name->TabIndex = 0;
			this->name->Text = L"Вордл";
			this->name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btnClose->Location = System::Drawing::Point(450, 20);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(30, 30);
			this->btnClose->TabIndex = 1;
			this->btnClose->Text = L"X";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::close_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::Window;
			this->btn5->FlatAppearance->BorderSize = 0;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->Location = System::Drawing::Point(100, 316);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(300, 60);
			this->btn5->TabIndex = 2;
			this->btn5->Text = L"5 букв";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::lvlBtn_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::Window;
			this->btn6->FlatAppearance->BorderSize = 0;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->Location = System::Drawing::Point(100, 410);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(300, 60);
			this->btn6->TabIndex = 3;
			this->btn6->Text = L"6 букв";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::lvlBtn_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::Window;
			this->btn7->FlatAppearance->BorderSize = 0;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(100, 504);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(300, 60);
			this->btn7->TabIndex = 4;
			this->btn7->Text = L"7 букв";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::lvlBtn_Click);
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
			this->coinsLabel->TabIndex = 5;
			this->coinsLabel->Text = L"   ";
			// 
			// test
			// 
			this->test->Location = System::Drawing::Point(413, 296);
			this->test->Name = L"test";
			this->test->Size = System::Drawing::Size(75, 23);
			this->test->TabIndex = 6;
			this->test->Text = L"test";
			this->test->UseVisualStyleBackColor = true;
			this->test->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(52, 50);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// credits
			// 
			this->credits->AutoSize = true;
			this->credits->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->credits->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->credits->FlatAppearance->BorderSize = 0;
			this->credits->Location = System::Drawing::Point(464, 662);
			this->credits->Name = L"credits";
			this->credits->Size = System::Drawing::Size(24, 26);
			this->credits->TabIndex = 8;
			this->credits->Text = L"\?";
			this->credits->UseVisualStyleBackColor = true;
			this->credits->Click += gcnew System::EventHandler(this, &MyForm::credits_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->ClientSize = System::Drawing::Size(500, 700);
			this->Controls->Add(this->credits);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->test);
			this->Controls->Add(this->coinsLabel);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->name);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вордл";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void lvlBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ bt = (Button^)sender;
		switch (bt->Text[0])
		{
		case('5'):
			{
			Level1^ lvl1 = gcnew Level1();
			lvl1->FormClosing += gcnew FormClosingEventHandler(this, &MyForm::AnotherForm_FormClosing);
			lvl1->Show();

			Hide();
			break;
			}
		case('6'):
			{
			Level2^ lvl2 = gcnew Level2();
			lvl2->FormClosing += gcnew FormClosingEventHandler(this, &MyForm::AnotherForm_FormClosing);
			lvl2->Show();
			Hide();
			break;
			}
		case('7'):
			{
			Level3^ lvl3 = gcnew Level3();
			lvl3->FormClosing += gcnew FormClosingEventHandler(this, &MyForm::AnotherForm_FormClosing);
			lvl3->Show();
			Hide();
			break;
			}
		}
	}
	private: System::String^ getCoins(String^ path) {
		String^ s = System::IO::File::ReadAllText(path);
		return s;
	}
	private: System::Void editCoins(bool is_Win) {
		StreamReader^ sre = gcnew StreamReader("coins.txt");
		int c = System::Convert::ToInt32(sre->ReadLine());
		sre->Close();
		StreamWriter^ swr = gcnew StreamWriter("coins.txt", false);
		switch (is_Win)
		{
		case true: {
			swr->WriteLine(System::Convert::ToString(c + 4));
			swr->Close();
			coinsLabel->Text = getCoins("coins.txt");
			return;
		}
		case false: {
			swr->WriteLine(System::Convert::ToString(c - 10));
			swr->Close();
			coinsLabel->Text = getCoins("coins.txt");
			return;
		}

		}
	}
	private: System::Void AnotherForm_FormClosing(Object^ sender, FormClosingEventArgs^ e)
	{
		coinsLabel->Text = getCoins("coins.txt");
		Show();
	}
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Show();
		return;
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		editCoins(true);
	}
	private: System::Void tip_Click(System::Object^ sender, System::EventArgs^ e) {
		editCoins(false);

	}
	
private: System::Void credits_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Вам нужно угадать слово, состоящее из определенного количества букв, за 6 попыток.\nДоступные команды выполнены в виде кнопок:\n1) ''Проверить'': сравнивает введенное слово с загаданным.\n2) 'Подсказка': раскрывает букву, стоящую на случайном месте\n3) 'Стереть': очищает поле для ввода");
}


};
}
