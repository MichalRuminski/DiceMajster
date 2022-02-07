#pragma once
#include "AboutWindow.h"
#include "Game.h"
#include "IndexTag.h"
#include<msclr\marshal_cppstd.h>


namespace Kosci {
	ref class StartWindow ;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace msclr::interop;


	public ref class GameWindow : public System::Windows::Forms::Form
	{
		//konstruktor parametryczny
	public: GameWindow(Game* g, StartWindow^ parent);
	public:
		GameWindow(void)
		{
			dicePictures = gcnew array<System::Drawing::Bitmap^>(6);
			InitializeTextures();
			InitializeComponent();

		}

	protected:

		~GameWindow()
		{
			if (components)
			{
				delete components;
			}
			//check if member field is added to components container
			if (dicePictures) {
				delete dicePictures;
			}
		}

	private: AboutWindow^ aboutWindow;
	private: array<System::Drawing::Bitmap^>^ dicePictures;

	private: Game* game;
	private: StartWindow^ parent;
	private: void HandleNewGame();
	private: void HandleClosing();

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ graToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nowaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wyjœcieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ gamefield_p1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::GroupBox^ gamefield_p2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ picturebox_D5P1;
	private: System::Windows::Forms::PictureBox^ picturebox_D4P1;
	private: System::Windows::Forms::PictureBox^ picturebox_D3P1;
	private: System::Windows::Forms::PictureBox^ picturebox_D2P1;
	private: System::Windows::Forms::PictureBox^ picturebox_D1P1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ picturebox_D5P2;
	private: System::Windows::Forms::PictureBox^ picturebox_D4P2;
	private: System::Windows::Forms::PictureBox^ picturebox_D3P2;
	private: System::Windows::Forms::PictureBox^ picturebox_D2P2;
	private: System::Windows::Forms::PictureBox^ picturebox_D1P2;
	private: System::Windows::Forms::Label^ label_availR;
	private: System::Windows::Forms::Label^ label_curTurn;
	private: System::Windows::Forms::Label^ label_Rerol;
	private: System::Windows::Forms::Label^ label_turnP1;
	private: System::Windows::Forms::Label^ label_p1Name;


	private:

		System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->graToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nowaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyjœcieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label_availR = (gcnew System::Windows::Forms::Label());
			this->label_curTurn = (gcnew System::Windows::Forms::Label());
			this->label_Rerol = (gcnew System::Windows::Forms::Label());
			this->label_turnP1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->gamefield_p1 = (gcnew System::Windows::Forms::GroupBox());
			this->label_p1Name = (gcnew System::Windows::Forms::Label());
			this->picturebox_D5P1 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D4P1 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D3P1 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D2P1 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D1P1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->gamefield_p2 = (gcnew System::Windows::Forms::GroupBox());
			this->picturebox_D5P2 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D4P2 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D3P2 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D2P2 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D1P2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->gamefield_p1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D5P1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D4P1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D3P1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D2P1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D1P1))->BeginInit();
			this->panel2->SuspendLayout();
			this->gamefield_p2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D5P2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D4P2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D3P2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D2P2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D1P2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->graToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(924, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// graToolStripMenuItem
			// 
			this->graToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nowaToolStripMenuItem,
					this->wyjœcieToolStripMenuItem
			});
			this->graToolStripMenuItem->Name = L"graToolStripMenuItem";
			this->graToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->graToolStripMenuItem->Text = L"Gra";
			// 
			// nowaToolStripMenuItem
			// 
			this->nowaToolStripMenuItem->Name = L"nowaToolStripMenuItem";
			this->nowaToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->nowaToolStripMenuItem->Text = L"Nowa";
			this->nowaToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameWindow::nowaToolStripMenuItem_Click);
			// 
			// wyjœcieToolStripMenuItem
			// 
			this->wyjœcieToolStripMenuItem->Name = L"wyjœcieToolStripMenuItem";
			this->wyjœcieToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->wyjœcieToolStripMenuItem->Text = L"Wyjœcie";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameWindow::aboutToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label_availR);
			this->panel1->Controls->Add(this->label_curTurn);
			this->panel1->Controls->Add(this->label_Rerol);
			this->panel1->Controls->Add(this->label_turnP1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->gamefield_p1);
			this->panel1->Location = System::Drawing::Point(0, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(461, 661);
			this->panel1->TabIndex = 1;
			// 
			// label_availR
			// 
			this->label_availR->AutoSize = true;
			this->label_availR->Location = System::Drawing::Point(129, 458);
			this->label_availR->Name = L"label_availR";
			this->label_availR->Size = System::Drawing::Size(0, 13);
			this->label_availR->TabIndex = 7;
			// 
			// label_curTurn
			// 
			this->label_curTurn->AutoSize = true;
			this->label_curTurn->Location = System::Drawing::Point(129, 439);
			this->label_curTurn->Name = L"label_curTurn";
			this->label_curTurn->Size = System::Drawing::Size(0, 13);
			this->label_curTurn->TabIndex = 6;
			// 
			// label_Rerol
			// 
			this->label_Rerol->AutoSize = true;
			this->label_Rerol->Location = System::Drawing::Point(34, 458);
			this->label_Rerol->Name = L"label_Rerol";
			this->label_Rerol->Size = System::Drawing::Size(89, 13);
			this->label_Rerol->TabIndex = 5;
			this->label_Rerol->Text = L"Dostêpne Rerolle";
			// 
			// label_turnP1
			// 
			this->label_turnP1->AutoSize = true;
			this->label_turnP1->Location = System::Drawing::Point(91, 439);
			this->label_turnP1->Name = L"label_turnP1";
			this->label_turnP1->Size = System::Drawing::Size(32, 13);
			this->label_turnP1->TabIndex = 4;
			this->label_turnP1->Text = L"Tura:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(37, 490);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(357, 162);
			this->textBox1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(319, 394);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nastepna tura";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GameWindow::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 394);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Rzucaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GameWindow::button1_Click);
			// 
			// gamefield_p1
			// 
			this->gamefield_p1->Controls->Add(this->label_p1Name);
			this->gamefield_p1->Controls->Add(this->picturebox_D5P1);
			this->gamefield_p1->Controls->Add(this->picturebox_D4P1);
			this->gamefield_p1->Controls->Add(this->picturebox_D3P1);
			this->gamefield_p1->Controls->Add(this->picturebox_D2P1);
			this->gamefield_p1->Controls->Add(this->picturebox_D1P1);
			this->gamefield_p1->Location = System::Drawing::Point(0, 7);
			this->gamefield_p1->Name = L"gamefield_p1";
			this->gamefield_p1->Size = System::Drawing::Size(462, 381);
			this->gamefield_p1->TabIndex = 0;
			this->gamefield_p1->TabStop = false;
			// 
			// label_p1Name
			// 
			this->label_p1Name->AutoSize = true;
			this->label_p1Name->Location = System::Drawing::Point(176, 20);
			this->label_p1Name->Name = L"label_p1Name";
			this->label_p1Name->Size = System::Drawing::Size(0, 13);
			this->label_p1Name->TabIndex = 5;
			// 
			// picturebox_D5P1
			// 
			this->picturebox_D5P1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picturebox_D5P1->Location = System::Drawing::Point(317, 235);
			this->picturebox_D5P1->Name = L"picturebox_D5P1";
			this->picturebox_D5P1->Size = System::Drawing::Size(110, 110);
			this->picturebox_D5P1->TabIndex = 4;
			this->picturebox_D5P1->TabStop = false;
			this->picturebox_D5P1->Visible = false;
			this->picturebox_D5P1->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			// 
			// picturebox_D4P1
			// 
			this->picturebox_D4P1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picturebox_D4P1->Location = System::Drawing::Point(56, 252);
			this->picturebox_D4P1->Name = L"picturebox_D4P1";
			this->picturebox_D4P1->Size = System::Drawing::Size(110, 110);
			this->picturebox_D4P1->TabIndex = 3;
			this->picturebox_D4P1->TabStop = false;
			this->picturebox_D4P1->Visible = false;
			this->picturebox_D4P1->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			// 
			// picturebox_D3P1
			// 
			this->picturebox_D3P1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picturebox_D3P1->Location = System::Drawing::Point(319, 104);
			this->picturebox_D3P1->Name = L"picturebox_D3P1";
			this->picturebox_D3P1->Size = System::Drawing::Size(110, 110);
			this->picturebox_D3P1->TabIndex = 2;
			this->picturebox_D3P1->TabStop = false;
			this->picturebox_D3P1->Visible = false;
			this->picturebox_D3P1->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			// 
			// picturebox_D2P1
			// 
			this->picturebox_D2P1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picturebox_D2P1->Location = System::Drawing::Point(176, 105);
			this->picturebox_D2P1->Name = L"picturebox_D2P1";
			this->picturebox_D2P1->Size = System::Drawing::Size(110, 110);
			this->picturebox_D2P1->TabIndex = 1;
			this->picturebox_D2P1->TabStop = false;
			this->picturebox_D2P1->Visible = false;
			this->picturebox_D2P1->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			// 
			// picturebox_D1P1
			// 
			this->picturebox_D1P1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picturebox_D1P1->Location = System::Drawing::Point(37, 106);
			this->picturebox_D1P1->Name = L"picturebox_D1P1";
			this->picturebox_D1P1->Size = System::Drawing::Size(110, 110);
			this->picturebox_D1P1->TabIndex = 0;
			this->picturebox_D1P1->TabStop = false;
			this->picturebox_D1P1->Visible = false;
			this->picturebox_D1P1->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->gamefield_p2);
			this->panel2->Location = System::Drawing::Point(462, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(462, 661);
			this->panel2->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 490);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(357, 162);
			this->textBox2->TabIndex = 4;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(315, 394);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Nastepna tura";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GameWindow::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(33, 394);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Rzucaj";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GameWindow::button3_Click);
			// 
			// gamefield_p2
			// 
			this->gamefield_p2->Controls->Add(this->picturebox_D5P2);
			this->gamefield_p2->Controls->Add(this->picturebox_D4P2);
			this->gamefield_p2->Controls->Add(this->picturebox_D3P2);
			this->gamefield_p2->Controls->Add(this->picturebox_D2P2);
			this->gamefield_p2->Controls->Add(this->picturebox_D1P2);
			this->gamefield_p2->Location = System::Drawing::Point(0, 5);
			this->gamefield_p2->Name = L"gamefield_p2";
			this->gamefield_p2->Size = System::Drawing::Size(462, 382);
			this->gamefield_p2->TabIndex = 0;
			this->gamefield_p2->TabStop = false;
			// 
			// picturebox_D5P2
			// 
			this->picturebox_D5P2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picturebox_D5P2->Location = System::Drawing::Point(315, 254);
			this->picturebox_D5P2->Name = L"picturebox_D5P2";
			this->picturebox_D5P2->Size = System::Drawing::Size(110, 110);
			this->picturebox_D5P2->TabIndex = 4;
			this->picturebox_D5P2->TabStop = false;
			this->picturebox_D5P2->Visible = false;
			this->picturebox_D5P2->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			// 
			// picturebox_D4P2
			// 
			this->picturebox_D4P2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picturebox_D4P2->Location = System::Drawing::Point(76, 254);
			this->picturebox_D4P2->Name = L"picturebox_D4P2";
			this->picturebox_D4P2->Size = System::Drawing::Size(110, 110);
			this->picturebox_D4P2->TabIndex = 3;
			this->picturebox_D4P2->TabStop = false;
			this->picturebox_D4P2->Visible = false;
			this->picturebox_D4P2->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			// 
			// picturebox_D3P2
			// 
			this->picturebox_D3P2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picturebox_D3P2->Location = System::Drawing::Point(342, 108);
			this->picturebox_D3P2->Name = L"picturebox_D3P2";
			this->picturebox_D3P2->Size = System::Drawing::Size(110, 110);
			this->picturebox_D3P2->TabIndex = 2;
			this->picturebox_D3P2->TabStop = false;
			this->picturebox_D3P2->Visible = false;
			this->picturebox_D3P2->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			// 
			// picturebox_D2P2
			// 
			this->picturebox_D2P2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picturebox_D2P2->Location = System::Drawing::Point(219, 107);
			this->picturebox_D2P2->Name = L"picturebox_D2P2";
			this->picturebox_D2P2->Size = System::Drawing::Size(110, 110);
			this->picturebox_D2P2->TabIndex = 1;
			this->picturebox_D2P2->TabStop = false;
			this->picturebox_D2P2->Visible = false;
			this->picturebox_D2P2->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			// 
			// picturebox_D1P2
			// 
			this->picturebox_D1P2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picturebox_D1P2->Location = System::Drawing::Point(52, 106);
			this->picturebox_D1P2->Name = L"picturebox_D1P2";
			this->picturebox_D1P2->Size = System::Drawing::Size(110, 110);
			this->picturebox_D1P2->TabIndex = 0;
			this->picturebox_D1P2->TabStop = false;
			this->picturebox_D1P2->Visible = false;
			this->picturebox_D1P2->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 692);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Main";
			this->Text = L"Kosci";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &GameWindow::Main_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->gamefield_p1->ResumeLayout(false);
			this->gamefield_p1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D5P1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D4P1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D3P1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D2P1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D1P1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->gamefield_p2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D5P2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D4P2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D3P2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D2P2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_D1P2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		aboutWindow = gcnew AboutWindow();

		aboutWindow->ShowDialog();
		if (aboutWindow->DialogResult == System::Windows::Forms::DialogResult::OK) {
			//aboutWindow->Close();
			delete aboutWindow;
		}
	}
	private: System::Void nowaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->HandleNewGame();
	}

	private: System::Void InitializeTextures() {
		if (dicePictures != nullptr) {
			int index = 0;
			for each (System::String ^ f in System::IO::Directory::GetFiles("Resources\\Bitmaps\\"))
			{
				this->dicePictures[index] = gcnew System::Drawing::Bitmap(f);
				index++;
			}
		}
		else {
			throw gcnew System::NullReferenceException();
		}
	}
	private: System::Void picturebox_Click(System::Object^ sender, System::EventArgs^ e) {
		int pNumber = 0;
		if (((PictureBox^)sender)->Parent->Name == "gamefield_p1") {
			pNumber = 0;
		}
		if (((PictureBox^)sender)->Parent->Name == "gamefield_p2") {
			pNumber = 1;
		}
			game->selectDice(pNumber, ((IndexTag^)((PictureBox^)sender)->Tag)->getIndex());

		if (game->isDiceSelected(pNumber, ((IndexTag^)((PictureBox^)sender)->Tag)->getIndex())){
			((PictureBox^)sender)->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		}
		else {
			((PictureBox^)sender)->BorderStyle = System::Windows::Forms::BorderStyle::None;
		}
		
		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	game->rollDices(0);
	for each (System::Object^ p in this->gamefield_p1->Controls)
	{
		if (p->GetType() == PictureBox::typeid) {
			if (!((PictureBox^)p)->Visible) {
				((PictureBox^)p)->Visible = true;
			}
			
			int value = this->game->getDiceValue(0, ((IndexTag^)((PictureBox^)p)->Tag)->getIndex());
			if (value > 0) {
				((PictureBox^)p)->Image = dicePictures[value - 1];
			}
			else {
				((PictureBox^)p)->Image = dicePictures[1];
			}
				((PictureBox^)p)->BorderStyle = System::Windows::Forms::BorderStyle::None;
		}
	}
	if(game->getAvailableRerols(0) == 0){
		//update score
		this->textBox1->Text += gcnew System::String(this->game->calculateScore(0).ToString());
	}

	//update rest of information here
	this->label_curTurn->Text = gcnew System::String(this->game->getCurrentTurn(0).ToString());
	this->label_availR->Text = gcnew System::String(this->game->getAvailableRerols(0).ToString());
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	game->endTurn(0);
	this->textBox1->Text += gcnew System::String(this->game->calculateScore(0).ToString());
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Main_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->HandleClosing();
}
};
}
