#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

class Coins
{
public:
	System::String^ getCoins(String^ path) {
		String^ s = L"Монеты: " + System::IO::File::ReadAllText(path);
		return s;
	};
	System::Void editCoins(bool is_Win) {
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
	};
};