#pragma once
#include "AboutWindow.h"
#include "StartWindow.h"
#include "Game.h"
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
			InitializeComponent();
			
		}

	protected:
		
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ graToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nowaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wyjœcieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;

	private: AboutWindow^ aboutWindow;
	private: StartWindow^ startWindow;

	private: Game *game;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ gamnefield_p1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::GroupBox^ gamefield_p2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;

	private:
		
		System::ComponentModel::Container ^components;
		

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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->gamnefield_p1 = (gcnew System::Windows::Forms::GroupBox());
			this->gamefield_p2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->gamnefield_p1->SuspendLayout();
			this->gamefield_p2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
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
			this->panel1->Name = L"panel_P1";
			this->panel1->Size = System::Drawing::Size(461, 661);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->gamefield_p2);
			this->panel2->Location = System::Drawing::Point(462, 28);
			this->panel2->Name = L"panel_P2";
			this->panel2->Size = System::Drawing::Size(462, 661);
			this->panel2->TabIndex = 2;
			// 
			// gamnefield_p1
			// 
			this->gamnefield_p1->Controls->Add(this->pictureBox5);
			this->gamnefield_p1->Controls->Add(this->pictureBox4);
			this->gamnefield_p1->Controls->Add(this->pictureBox3);
			this->gamnefield_p1->Controls->Add(this->pictureBox2);
			this->gamnefield_p1->Controls->Add(this->pictureBox1);
			this->gamnefield_p1->Location = System::Drawing::Point(0, 7);
			this->gamnefield_p1->Name = L"gamnefield_p1";
			this->gamnefield_p1->Size = System::Drawing::Size(462, 381);
			this->gamnefield_p1->TabIndex = 0;
			this->gamnefield_p1->TabStop = false;
			// 
			// gamefield_p2
			// 
			this->gamefield_p2->Controls->Add(this->pictureBox10);
			this->gamefield_p2->Controls->Add(this->pictureBox9);
			this->gamefield_p2->Controls->Add(this->pictureBox8);
			this->gamefield_p2->Controls->Add(this->pictureBox7);
			this->gamefield_p2->Controls->Add(this->pictureBox6);
			this->gamefield_p2->Location = System::Drawing::Point(0, 5);
			this->gamefield_p2->Name = L"gamefield_p2";
			this->gamefield_p2->Size = System::Drawing::Size(462, 382);
			this->gamefield_p2->TabIndex = 0;
			this->gamefield_p2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 435);
			this->button1->Name = L"button_p1Roll";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Rzucaj";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(319, 435);
			this->button2->Name = L"button_p1Turn";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nastepna tura";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(37, 490);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textbox_p1Score";
			this->textBox1->Size = System::Drawing::Size(357, 162);
			this->textBox1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(33, 434);
			this->button3->Name = L"button_p2Roll";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Rzucaj";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(315, 435);
			this->button4->Name = L"button_p2Turn";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Nastepna tura";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 490);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"texbox_p2Score";
			this->textBox2->Size = System::Drawing::Size(357, 162);
			this->textBox2->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(37, 106);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(176, 105);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(319, 104);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 50);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(56, 252);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 50);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(294, 252);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(100, 50);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(52, 106);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(100, 50);
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(219, 107);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(100, 50);
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(342, 108);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(100, 50);
			this->pictureBox8->TabIndex = 2;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(76, 254);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(100, 50);
			this->pictureBox9->TabIndex = 3;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(315, 254);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(100, 50);
			this->pictureBox10->TabIndex = 4;
			this->pictureBox10->TabStop = false;
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
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->gamnefield_p1->ResumeLayout(false);
			this->gamefield_p2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
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
		
	System::String^ p1Name;
	System::String^ p2Name;

	int maxTurns = 3;
	int maxRolls = 2;

	startWindow = gcnew StartWindow();
	startWindow->Show();

		//here get values for player names, max turns and max re-rolls
	//game = new Game("Mihau", "Ala");
}
};
}
