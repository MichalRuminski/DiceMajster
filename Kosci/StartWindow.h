#pragma once
#include "Game.h"
#include "GameWindow.h"
#include<msclr\marshal_cppstd.h>

namespace Kosci {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace msclr::interop;
	
	public ref class StartWindow : public System::Windows::Forms::Form
	{
	public:
		StartWindow(void)
		{
			InitializeComponent();
		}

	protected:
		~StartWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Kosci::GameWindow^ gameWindow;
	private: System::Windows::Forms::Label^ label_p1Name;

	protected:
	private: System::Windows::Forms::Label^ label_p2Name;
	private: System::Windows::Forms::Label^ label_turnNum;
	private: System::Windows::Forms::Label^ label_rrollNum;
	private: System::Windows::Forms::ComboBox^ comboBox_turnNum;
	private: System::Windows::Forms::ComboBox^ comboBox_rrollsNum;
	private: System::Windows::Forms::Button^ button_StartGame;
	private: System::Windows::Forms::TextBox^ textBox_p1Name;
	private: System::Windows::Forms::TextBox^ textBox_p2Name;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartWindow::typeid));
			this->label_p1Name = (gcnew System::Windows::Forms::Label());
			this->label_p2Name = (gcnew System::Windows::Forms::Label());
			this->label_turnNum = (gcnew System::Windows::Forms::Label());
			this->label_rrollNum = (gcnew System::Windows::Forms::Label());
			this->comboBox_turnNum = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_rrollsNum = (gcnew System::Windows::Forms::ComboBox());
			this->button_StartGame = (gcnew System::Windows::Forms::Button());
			this->textBox_p1Name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_p2Name = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label_p1Name
			// 
			this->label_p1Name->AutoSize = true;
			this->label_p1Name->BackColor = System::Drawing::Color::Transparent;
			this->label_p1Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_p1Name->Location = System::Drawing::Point(7, 26);
			this->label_p1Name->Name = L"label_p1Name";
			this->label_p1Name->Size = System::Drawing::Size(60, 16);
			this->label_p1Name->TabIndex = 0;
			this->label_p1Name->Text = L"Gracz 1";
			// 
			// label_p2Name
			// 
			this->label_p2Name->AutoSize = true;
			this->label_p2Name->BackColor = System::Drawing::Color::Transparent;
			this->label_p2Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_p2Name->Location = System::Drawing::Point(7, 51);
			this->label_p2Name->Name = L"label_p2Name";
			this->label_p2Name->Size = System::Drawing::Size(60, 16);
			this->label_p2Name->TabIndex = 1;
			this->label_p2Name->Text = L"Gracz 2";
			// 
			// label_turnNum
			// 
			this->label_turnNum->AutoSize = true;
			this->label_turnNum->BackColor = System::Drawing::Color::Transparent;
			this->label_turnNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_turnNum->Location = System::Drawing::Point(187, 27);
			this->label_turnNum->Name = L"label_turnNum";
			this->label_turnNum->Size = System::Drawing::Size(62, 16);
			this->label_turnNum->TabIndex = 2;
			this->label_turnNum->Text = L"Ilo�� tur";
			// 
			// label_rrollNum
			// 
			this->label_rrollNum->AutoSize = true;
			this->label_rrollNum->BackColor = System::Drawing::Color::Transparent;
			this->label_rrollNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_rrollNum->Location = System::Drawing::Point(382, 31);
			this->label_rrollNum->Name = L"label_rrollNum";
			this->label_rrollNum->Size = System::Drawing::Size(124, 16);
			this->label_rrollNum->TabIndex = 3;
			this->label_rrollNum->Text = L"Ilo�� pow. rzut�w";
			// 
			// comboBox_turnNum
			// 
			this->comboBox_turnNum->FormattingEnabled = true;
			this->comboBox_turnNum->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"3", L"4", L"5", L"6", L"7" });
			this->comboBox_turnNum->Location = System::Drawing::Point(255, 26);
			this->comboBox_turnNum->Name = L"comboBox_turnNum";
			this->comboBox_turnNum->Size = System::Drawing::Size(121, 21);
			this->comboBox_turnNum->TabIndex = 4;
			// 
			// comboBox_rrollsNum
			// 
			this->comboBox_rrollsNum->FormattingEnabled = true;
			this->comboBox_rrollsNum->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1", L"2", L"3", L"4" });
			this->comboBox_rrollsNum->Location = System::Drawing::Point(509, 27);
			this->comboBox_rrollsNum->Name = L"comboBox_rrollsNum";
			this->comboBox_rrollsNum->Size = System::Drawing::Size(121, 21);
			this->comboBox_rrollsNum->TabIndex = 5;
			// 
			// button_StartGame
			// 
			this->button_StartGame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_StartGame.BackgroundImage")));
			this->button_StartGame->Location = System::Drawing::Point(321, 313);
			this->button_StartGame->Name = L"button_StartGame";
			this->button_StartGame->Size = System::Drawing::Size(168, 54);
			this->button_StartGame->TabIndex = 6;
			this->button_StartGame->UseVisualStyleBackColor = true;
			this->button_StartGame->Click += gcnew System::EventHandler(this, &StartWindow::button_StartGame_Click);
			// 
			// textBox_p1Name
			// 
			this->textBox_p1Name->Location = System::Drawing::Point(68, 26);
			this->textBox_p1Name->Name = L"textBox_p1Name";
			this->textBox_p1Name->Size = System::Drawing::Size(100, 20);
			this->textBox_p1Name->TabIndex = 7;
			// 
			// textBox_p2Name
			// 
			this->textBox_p2Name->Location = System::Drawing::Point(68, 51);
			this->textBox_p2Name->Name = L"textBox_p2Name";
			this->textBox_p2Name->Size = System::Drawing::Size(100, 20);
			this->textBox_p2Name->TabIndex = 8;
			// 
			// StartWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(638, 409);
			this->Controls->Add(this->textBox_p2Name);
			this->Controls->Add(this->textBox_p1Name);
			this->Controls->Add(this->button_StartGame);
			this->Controls->Add(this->comboBox_rrollsNum);
			this->Controls->Add(this->comboBox_turnNum);
			this->Controls->Add(this->label_rrollNum);
			this->Controls->Add(this->label_turnNum);
			this->Controls->Add(this->label_p1Name);
			this->Controls->Add(this->label_p2Name);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"StartWindow";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Dice Majster";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &StartWindow::StartWindow_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_StartGame_Click(System::Object^ sender, System::EventArgs^ e) {
	
		System::String^ maxTurns = (System::String^)(this->comboBox_turnNum)->SelectedItem;
		System::String^ maxReroll = (System::String^)(this->comboBox_rrollsNum)->SelectedItem;

		Game* g = new Game(marshal_as<std::string>(this->textBox_p1Name->Text), marshal_as<std::string>(this->textBox_p2Name->Text),
																			Convert::ToInt32(maxTurns), Convert::ToInt32(maxReroll));

		this->gameWindow = gcnew GameWindow(g,this);
		this->gameWindow->Show();
		this->Hide();
		if (this->gameWindow == nullptr) {
			delete g;
			this->Show();
		}
	}
private: System::Void StartWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
}


};
}
