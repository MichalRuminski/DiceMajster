#pragma once
#include "AboutWindow.h"
#include "Game.h"
#include "IndexTag.h"
#include<msclr\marshal_cppstd.h>


namespace Kosci {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace msclr::interop;
	ref class StartWindow;

	public ref class GameWindow : public System::Windows::Forms::Form
	{

	public: GameWindow(Game* g, StartWindow^ parent);
	public:
		GameWindow(void)
		{
			dicePictures = gcnew array<System::Drawing::Bitmap^>(6);
			InitializeTextures();
			InitializeComponent();

			prevWidth = this->Size.Width;
			prevHeight = this->Size.Height;

		}

	protected:

		~GameWindow()
		{
			if (components)
			{
				delete components;
			}

			if (dicePictures) {
				delete dicePictures;
			}
			if (game) {
				delete game;
			}
		}

	private: AboutWindow^ aboutWindow;
	private: array<System::Drawing::Bitmap^>^ dicePictures;
	private: array<System::Drawing::Bitmap^>^ selectedDicePictures;
	private: Bitmap^ rzutBmp;
	private: Bitmap^ turaBmp;

	private: Game* game;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: StartWindow^ parent;
	private: void HandleNewGame();
	private: void HandleClosing();
	private: void HandleRoll(int pNumber);
	private: void HandleEndTurn(int pNumber);

	private: int prevWidth;
	private: int prevHeight;

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
	private: System::Windows::Forms::RichTextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ picturebox_D5P1;
	private: System::Windows::Forms::PictureBox^ picturebox_D4P1;
	private: System::Windows::Forms::PictureBox^ picturebox_D3P1;
	private: System::Windows::Forms::PictureBox^ picturebox_D2P1;
	private: System::Windows::Forms::PictureBox^ picturebox_D1P1;

	private: System::Windows::Forms::RichTextBox^ textBox2;
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
	private: System::Windows::Forms::Label^ label_availRP2;
	private: System::Windows::Forms::Label^ label_curTurnP2;
	private: System::Windows::Forms::Label^ label_RerolP2;
	private: System::Windows::Forms::Label^ label_turnP2;
	private: System::Windows::Forms::Label^ label_p2Name;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_availR = (gcnew System::Windows::Forms::Label());
			this->label_curTurn = (gcnew System::Windows::Forms::Label());
			this->label_Rerol = (gcnew System::Windows::Forms::Label());
			this->label_turnP1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->gamefield_p1 = (gcnew System::Windows::Forms::GroupBox());
			this->label_p1Name = (gcnew System::Windows::Forms::Label());
			this->picturebox_D5P1 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D4P1 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D3P1 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D2P1 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D1P1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_p2Name = (gcnew System::Windows::Forms::Label());
			this->label_availRP2 = (gcnew System::Windows::Forms::Label());
			this->label_curTurnP2 = (gcnew System::Windows::Forms::Label());
			this->label_RerolP2 = (gcnew System::Windows::Forms::Label());
			this->label_turnP2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->gamefield_p2 = (gcnew System::Windows::Forms::GroupBox());
			this->picturebox_D5P2 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D4P2 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D3P2 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D2P2 = (gcnew System::Windows::Forms::PictureBox());
			this->picturebox_D1P2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->menuStrip1->Size = System::Drawing::Size(945, 24);
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
			this->panel1->Controls->Add(this->label1);
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
			this->panel1->Size = System::Drawing::Size(461, 700);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(52, 391);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Zaznacz koœci, które chcesz zachowaæ";
			this->label1->Click += gcnew System::EventHandler(this, &GameWindow::label1_Click);
			// 
			// label_availR
			// 
			this->label_availR->AutoSize = true;
			this->label_availR->Location = System::Drawing::Point(129, 492);
			this->label_availR->Name = L"label_availR";
			this->label_availR->Size = System::Drawing::Size(0, 13);
			this->label_availR->TabIndex = 7;
			// 
			// label_curTurn
			// 
			this->label_curTurn->AutoSize = true;
			this->label_curTurn->Location = System::Drawing::Point(129, 473);
			this->label_curTurn->Name = L"label_curTurn";
			this->label_curTurn->Size = System::Drawing::Size(0, 13);
			this->label_curTurn->TabIndex = 6;
			// 
			// label_Rerol
			// 
			this->label_Rerol->AutoSize = true;
			this->label_Rerol->Location = System::Drawing::Point(34, 492);
			this->label_Rerol->Name = L"label_Rerol";
			this->label_Rerol->Size = System::Drawing::Size(89, 13);
			this->label_Rerol->TabIndex = 5;
			this->label_Rerol->Text = L"Dostêpne Rerolle";
			// 
			// label_turnP1
			// 
			this->label_turnP1->AutoSize = true;
			this->label_turnP1->Location = System::Drawing::Point(91, 473);
			this->label_turnP1->Name = L"label_turnP1";
			this->label_turnP1->Size = System::Drawing::Size(32, 13);
			this->label_turnP1->TabIndex = 4;
			this->label_turnP1->Text = L"Tura:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(37, 523);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(357, 162);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(319, 428);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Image = this->turaBmp;
			this->button2->Click += gcnew System::EventHandler(this, &GameWindow::button2_Click);
			this->button2->Resize += gcnew System::EventHandler(this, &GameWindow::buttonTura_Resize);
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(37, 428);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Image = this->rzutBmp;
			this->button1->Click += gcnew System::EventHandler(this, &GameWindow::button1_Click);
			this->button1->Resize += gcnew System::EventHandler(this, &GameWindow::buttonRzut_Resize);
			// 
			// gamefield_p1
			// 
			this->gamefield_p1->Controls->Add(this->label_p1Name);
			this->gamefield_p1->Controls->Add(this->picturebox_D5P1);
			this->gamefield_p1->Controls->Add(this->picturebox_D4P1);
			this->gamefield_p1->Controls->Add(this->picturebox_D3P1);
			this->gamefield_p1->Controls->Add(this->picturebox_D2P1);
			this->gamefield_p1->Controls->Add(this->picturebox_D1P1);
			this->gamefield_p1->Location = System::Drawing::Point(0, 0);
			this->gamefield_p1->Name = L"gamefield_p1";
			this->gamefield_p1->Size = System::Drawing::Size(462, 388);
			this->gamefield_p1->BackgroundImage = gcnew System::Drawing::Bitmap("Resources\\Bitmaps\\tlo.jpg");
			this->gamefield_p1->TabIndex = 0;
			this->gamefield_p1->TabStop = false;
			// 
			// label_p1Name
			// 
			this->label_p1Name->BackColor = System::Drawing::Color::Transparent;
			this->label_p1Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
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
			this->picturebox_D5P1->Tag = gcnew IndexTag(0);
			this->picturebox_D5P1->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			this->picturebox_D5P1->Resize += gcnew System::EventHandler(this, &GameWindow::picturebox_Resize);
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
			this->picturebox_D4P1->Tag = gcnew IndexTag(1);
			this->picturebox_D4P1->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			this->picturebox_D4P1->Resize += gcnew System::EventHandler(this, &GameWindow::picturebox_Resize);
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
			this->picturebox_D3P1->Tag = gcnew IndexTag(2);
			this->picturebox_D3P1->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			this->picturebox_D3P1->Resize += gcnew System::EventHandler(this, &GameWindow::picturebox_Resize);
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
			this->picturebox_D2P1->Tag = gcnew IndexTag(3);
			this->picturebox_D2P1->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			this->picturebox_D2P1->Resize += gcnew System::EventHandler(this, &GameWindow::picturebox_Resize);
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
			this->picturebox_D1P1->Tag = gcnew IndexTag(4);
			this->picturebox_D1P1->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			this->picturebox_D1P1->Resize += gcnew System::EventHandler(this, &GameWindow::picturebox_Resize);
			// 
			// label_p2Name
			// 
			this->label_p2Name->BackColor = System::Drawing::Color::Transparent;
			this->label_p2Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label_p2Name->AutoSize = true;
			this->label_p2Name->Location = System::Drawing::Point(176, 20);
			this->label_p2Name->Name = L"label_p2Name";
			this->label_p2Name->Size = System::Drawing::Size(0, 13);
			this->label_p2Name->TabIndex = 5;
			// 
			// label_availRP2
			// 
			this->label_availRP2->AutoSize = true;
			this->label_availRP2->Location = System::Drawing::Point(133, 492);
			this->label_availRP2->Name = L"label_availRP2";
			this->label_availRP2->Size = System::Drawing::Size(0, 13);
			this->label_availRP2->TabIndex = 7;
			// 
			// label_curTurnP2
			// 
			this->label_curTurnP2->AutoSize = true;
			this->label_curTurnP2->Location = System::Drawing::Point(133, 473);
			this->label_curTurnP2->Name = L"label_curTurnP2";
			this->label_curTurnP2->Size = System::Drawing::Size(0, 13);
			this->label_curTurnP2->TabIndex = 6;
			this->label_curTurnP2->Click += gcnew System::EventHandler(this, &GameWindow::label_curTurnP2_Click);
			// 
			// label_RerolP2
			// 
			this->label_RerolP2->AutoSize = true;
			this->label_RerolP2->Location = System::Drawing::Point(38, 492);
			this->label_RerolP2->Name = L"label_RerolP2";
			this->label_RerolP2->Size = System::Drawing::Size(89, 13);
			this->label_RerolP2->TabIndex = 5;
			this->label_RerolP2->Text = L"Dostêpne Rerolle";
			// 
			// label_turnP2
			// 
			this->label_turnP2->AutoSize = true;
			this->label_turnP2->Location = System::Drawing::Point(95, 473);
			this->label_turnP2->Name = L"label_turnP2";
			this->label_turnP2->Size = System::Drawing::Size(32, 13);
			this->label_turnP2->TabIndex = 4;
			this->label_turnP2->Text = L"Tura:";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label_availRP2);
			this->panel2->Controls->Add(this->label_curTurnP2);
			this->panel2->Controls->Add(this->label_RerolP2);
			this->panel2->Controls->Add(this->label_turnP2);
			this->panel2->Controls->Add(this->gamefield_p2);
			this->panel2->Location = System::Drawing::Point(462, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(483, 700);
			this->panel2->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(37, 523);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(357, 162);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"";
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(319, 428);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 35);
			this->button4->TabIndex = 2;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Image = this->turaBmp;
			this->button4->Click += gcnew System::EventHandler(this, &GameWindow::button4_Click);
			this->button4->Resize += gcnew System::EventHandler(this, &GameWindow::buttonTura_Resize);
			// 
			// button3
			// 
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(37, 428);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 1;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Image = this->rzutBmp;
			this->button3->Click += gcnew System::EventHandler(this, &GameWindow::button3_Click);
			this->button3->Resize += gcnew System::EventHandler(this, &GameWindow::buttonRzut_Resize);
			// 
			// gamefield_p2
			// 
			this->gamefield_p2->Controls->Add(this->label_p2Name);
			this->gamefield_p2->Controls->Add(this->picturebox_D5P2);
			this->gamefield_p2->Controls->Add(this->picturebox_D4P2);
			this->gamefield_p2->Controls->Add(this->picturebox_D3P2);
			this->gamefield_p2->Controls->Add(this->picturebox_D2P2);
			this->gamefield_p2->Controls->Add(this->picturebox_D1P2);
			this->gamefield_p2->Location = System::Drawing::Point(0, 0);
			this->gamefield_p2->Name = L"gamefield_p2";
			this->gamefield_p2->Size = System::Drawing::Size(483, 387);
			this->gamefield_p2->BackgroundImage = gcnew System::Drawing::Bitmap("Resources\\Bitmaps\\tlo.jpg");
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
			this->picturebox_D5P2->Tag = gcnew IndexTag(0);
			this->picturebox_D5P2->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			this->picturebox_D5P2->Resize += gcnew System::EventHandler(this, &GameWindow::picturebox_Resize);
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
			this->picturebox_D4P2->Tag = gcnew IndexTag(1);
			this->picturebox_D4P2->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			this->picturebox_D4P2->Resize += gcnew System::EventHandler(this, &GameWindow::picturebox_Resize);
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
			this->picturebox_D3P2->Tag = gcnew IndexTag(2);
			this->picturebox_D3P2->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			this->picturebox_D3P2->Resize += gcnew System::EventHandler(this, &GameWindow::picturebox_Resize);
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
			this->picturebox_D2P2->Tag = gcnew IndexTag(3);
			this->picturebox_D2P2->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			this->picturebox_D2P2->Resize += gcnew System::EventHandler(this, &GameWindow::picturebox_Resize);
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
			this->picturebox_D1P2->Tag = gcnew IndexTag(4);
			this->picturebox_D1P2->Click += gcnew System::EventHandler(this, &GameWindow::picturebox_Click);
			this->picturebox_D1P2->Resize += gcnew System::EventHandler(this, &GameWindow::picturebox_Resize);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(72, 390);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(319, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Zaznacz koœci, które chcesz zachowaæ";
			// 
			// GameWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(945, 725);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"GameWindow";
			this->Text = L"DiceMajster";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &GameWindow::Main_FormClosing);
			this->Resize += gcnew System::EventHandler(this, &GameWindow::GameWindow_Resize);
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
			this->gamefield_p2->PerformLayout();
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
			delete aboutWindow;
		}
	}
	private: System::Void nowaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		this->HandleNewGame();
	}

	private: System::Void InitializeTextures() {
		if (this->dicePictures != nullptr) {
			int index = 0;
			for each (System::String ^ f in System::IO::Directory::GetFiles("Resources\\Bitmaps\\unsel"))
			{
				this->dicePictures[index] = gcnew System::Drawing::Bitmap(f);
				index++;
			}
		}
		else {
			throw gcnew System::NullReferenceException();
		}
		if (this->selectedDicePictures != nullptr) {
			int index = 0;
			for each (System::String ^ f in System::IO::Directory::GetFiles("Resources\\Bitmaps\\sel"))
			{
				this->selectedDicePictures[index] = gcnew System::Drawing::Bitmap(f);
				index++;
			}
		}
		else {
			throw gcnew System::NullReferenceException();
		}
		this->rzutBmp = gcnew System::Drawing::Bitmap("Resources\\Bitmaps\\rzucaj.jpg");
		this->turaBmp = gcnew System::Drawing::Bitmap("Resources\\Bitmaps\\nastepna_tura.jpg");
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

		if (game->isDiceSelected(pNumber, ((IndexTag^)((PictureBox^)sender)->Tag)->getIndex())) {
			((PictureBox^)sender)->Image = this->selectedDicePictures[this->game->getDiceValue(pNumber,
				((IndexTag^)((PictureBox^)sender)->Tag)->getIndex()) - 1];
			((IndexTag^)((PictureBox^)sender)->Tag)->setIsSelected(true);
		}
		else {
			((PictureBox^)sender)->Image = this->dicePictures[this->game->getDiceValue(pNumber,
				((IndexTag^)((PictureBox^)sender)->Tag)->getIndex()) - 1];
			((IndexTag^)((PictureBox^)sender)->Tag)->setIsSelected(false);
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->HandleRoll(0);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->HandleEndTurn(0);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->HandleRoll(1);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->HandleEndTurn(1);
	}
	private: System::Void Main_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		this->HandleClosing();
	}
	private: System::Void label_curTurnP2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void GameWindow_Resize(System::Object^ sender, System::EventArgs^ e) {
		//scale factor
		float scaleWidth = this->Size.Width / (float)prevWidth;
		float scaleHeight = this->Size.Height / (float)prevHeight;
		int newWidth = this->Size.Width * scaleWidth;

		for each (System::Windows::Forms::Control ^ c in this->Controls) {

			c->Scale(scaleWidth, scaleHeight);
			if (c->GetType() == Panel::typeid) {
				if (((Panel^)c)->Name == "panel2") {
					((Panel^)c)->Location.X = this->panel1->Location.X + this->panel1->Size.Width;
					((Panel^)c)->Location.Y = this->panel1->Location.Y;
				}
			}
			else {
				c->Location.X = c->Location.X * scaleWidth;
				c->Location.Y = c->Location.Y * scaleHeight;
			}
		}
		this->prevWidth = this->Size.Width;
		this->prevHeight = this->Size.Height;
	}
	private: System::Void picturebox_Resize(System::Object^ sender, System::EventArgs^ e) {
		if (((PictureBox^)sender)->Visible) {
			int pNumber = ((PictureBox^)sender)->Parent->Name == "gamefield_p1" ? 0 : 1;
			int value = this->game->getDiceValue(pNumber, ((IndexTag^)((PictureBox^)sender)->Tag)->getIndex());
			if (((IndexTag^)((PictureBox^)sender)->Tag)->getIsSelected()) {
				((PictureBox^)sender)->Image = gcnew System::Drawing::Bitmap(
					this->selectedDicePictures[value - 1],
					((PictureBox^)sender)->Size.Width, ((PictureBox^)sender)->Size.Height);
			}
			else {
				((PictureBox^)sender)->Image = gcnew System::Drawing::Bitmap(
					this->dicePictures[value - 1],
					((PictureBox^)sender)->Size.Width, ((PictureBox^)sender)->Size.Height);
			}
		}
	}
	private: System::Void buttonTura_Resize(System::Object^ sender, System::EventArgs^ e) {
		((Button^)sender)->BackgroundImage = gcnew System::Drawing::Bitmap(this->turaBmp,
			((Button^)sender)->Size.Width, ((Button^)sender)->Size.Height);
	}
	private: System::Void buttonRzut_Resize(System::Object^ sender, System::EventArgs^ e) {
		((Button^)sender)->BackgroundImage = gcnew System::Drawing::Bitmap(this->rzutBmp,
			((Button^)sender)->Size.Width, ((Button^)sender)->Size.Height);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
