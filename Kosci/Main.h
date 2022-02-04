#pragma once
#include "AboutWindow.h"
#include "StartWindow.h"
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


	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			game = new Game("hello", "world");
			dicePictures = gcnew array<System::Drawing::Bitmap^>(6);
			InitializeTextures();
			InitializeComponent();

		}

	protected:

		~Main()
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
	private: StartWindow^ startWindow;
	private: array<System::Drawing::Bitmap^>^ dicePictures;

	private: Game* game;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ graToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nowaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wyjœcieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ gamnefield_p1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->gamnefield_p1 = (gcnew System::Windows::Forms::GroupBox());
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
			this->gamnefield_p1->SuspendLayout();
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
			this->nowaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::nowaToolStripMenuItem_Click);
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
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::aboutToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->gamnefield_p1);
			this->panel1->Location = System::Drawing::Point(0, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(461, 661);
			this->panel1->TabIndex = 1;
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
			this->button2->Location = System::Drawing::Point(319, 435);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nastepna tura";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 435);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Rzucaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// gamnefield_p1
			// 
			this->gamnefield_p1->Controls->Add(this->picturebox_D5P1);
			this->gamnefield_p1->Controls->Add(this->picturebox_D4P1);
			this->gamnefield_p1->Controls->Add(this->picturebox_D3P1);
			this->gamnefield_p1->Controls->Add(this->picturebox_D2P1);
			this->gamnefield_p1->Controls->Add(this->picturebox_D1P1);
			this->gamnefield_p1->Location = System::Drawing::Point(0, 7);
			this->gamnefield_p1->Name = L"gamnefield_p1";
			this->gamnefield_p1->Size = System::Drawing::Size(462, 381);
			this->gamnefield_p1->TabIndex = 0;
			this->gamnefield_p1->TabStop = false;
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
			this->picturebox_D5P1->Tag = gcnew IndexTag(4);
			this->picturebox_D5P1->Click += gcnew System::EventHandler(this, &Main::picturebox_Click);
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
			this->picturebox_D4P1->Tag = gcnew IndexTag(3);
			this->picturebox_D4P1->Click += gcnew System::EventHandler(this, &Main::picturebox_Click);
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
			this->picturebox_D3P1->Click += gcnew System::EventHandler(this, &Main::picturebox_Click);
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
			this->picturebox_D2P1->Tag = gcnew IndexTag(1);
			this->picturebox_D2P1->Click += gcnew System::EventHandler(this, &Main::picturebox_Click);
			// 
			// picturebox_D1P1
			// 
			this->picturebox_D1P1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picturebox_D1P1->Location = System::Drawing::Point(37, 106);
			this->picturebox_D1P1->Name = L"picturebox_D1P1";
			this->picturebox_D1P1->Size = System::Drawing::Size(110, 110);
			this->picturebox_D1P1->TabIndex = 0;
			this->picturebox_D1P1->TabStop = false;
			this->picturebox_D1P1->Tag = gcnew IndexTag(0);
			this->picturebox_D1P1->Visible = false;
			this->picturebox_D1P1->Click += gcnew System::EventHandler(this, &Main::picturebox_Click);
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
			this->button4->Location = System::Drawing::Point(315, 435);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Nastepna tura";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(33, 434);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Rzucaj";
			this->button3->UseVisualStyleBackColor = true;
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
			this->picturebox_D5P2->Tag = gcnew IndexTag(4);
			this->picturebox_D5P2->Click += gcnew System::EventHandler(this, &Main::picturebox_Click);
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
			this->picturebox_D4P2->Tag = gcnew IndexTag(3);
			this->picturebox_D4P2->Click += gcnew System::EventHandler(this, &Main::picturebox_Click);
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
			this->picturebox_D3P2->Click += gcnew System::EventHandler(this, &Main::picturebox_Click);
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
			this->picturebox_D2P2->Tag = gcnew IndexTag(1);
			this->picturebox_D2P2->Click += gcnew System::EventHandler(this, &Main::picturebox_Click);
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
			this->picturebox_D1P2->Tag = gcnew IndexTag(0);
			this->picturebox_D1P2->Click += gcnew System::EventHandler(this, &Main::picturebox_Click);
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
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->gamnefield_p1->ResumeLayout(false);
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

		System::String^ p1Name = gcnew System::String(L"Hello");
		System::String^ p2Name = gcnew System::String(L"World");

		int maxTurns = 3;
		int maxRolls = 2;

		startWindow = gcnew StartWindow();
		startWindow->Show();

		//here get values for player names, max turns and max re-rolls from start window
		//game = new Game("Mihau", "Ala");
		if (this->game) {
			delete game;
		}
		game = new Game(marshal_as<std::string>(p1Name), marshal_as<std::string>(p2Name));
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
		int pNumber;
		if (((PictureBox^)sender)->Parent->Name == "gamefield_p1") {
			pNumber = 0;
		}
		if (((PictureBox^)sender)->Parent->Name == "gamefield_p2") {
			pNumber = 1;
		}
		if(((PictureBox^)sender)->BorderStyle == System::Windows::Forms::BorderStyle::Fixed3D){
			((PictureBox^)sender)->BorderStyle = System::Windows::Forms::BorderStyle::None;
		}
		else
			((PictureBox^)sender)->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		
		game->selectDice(pNumber, ((IndexTag^)((PictureBox^)sender)->Tag)->getIndex());
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	game->rollDices(0);
	for each (System::Object^ p in this->gamnefield_p1->Controls)
	{
		if (p->GetType() == PictureBox::typeid) {
			if (!((PictureBox^)p)->Visible) {
				((PictureBox^)p)->Visible = true;
			}
			IndexTag^ tag = (IndexTag^)((PictureBox^)p)->Tag;
			int index = tag->getIndex();
			int value = this->game->getDiceValue(0, index);
			if (value > 0) {
				((PictureBox^)p)->Image = dicePictures[value - 1];
			}
			else {
				((PictureBox^)p)->Image = dicePictures[1];
			}
		}
	}
}
};
}
