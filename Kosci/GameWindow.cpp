#include "pch.h"
#include "StartWindow.h"
#include "GameWindow.h"


namespace Kosci {
	GameWindow::GameWindow(Game* g, StartWindow^ parent) {

		this->parent = parent;
		this->game = g;
		this->dicePictures = gcnew array<System::Drawing::Bitmap^>(6);
		this->InitializeTextures();
		this->InitializeComponent();
		this->prevWidth = this->Size.Width;
		this->prevHeight = this->Size.Height;
	}

	void GameWindow::HandleNewGame() {
		System::Windows::Forms::DialogResult result = MessageBox::Show(gcnew System::String(L"Na pewno zakonczyc aktualna gre?"),
			gcnew System::String(L"Zakonczyc?"), System::Windows::Forms::MessageBoxButtons::YesNo);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
			parent->Show();
		}
	}

	void GameWindow::HandleClosing() {
		parent->Show();
	}

	void GameWindow::HandleRoll(int pNumber) {
		if (!this->game->isGameOver(pNumber)) {
			if (this->game->getAvailableRerols(pNumber) > 0) {
				System::Windows::Forms::GroupBox^ gameField = pNumber > 0 ? this->gamefield_p2 : this->gamefield_p1;
				this->game->rollDices(pNumber);
				for each (System::Object ^ p in gameField->Controls)
				{
					if (p->GetType() == PictureBox::typeid) {
						if (!((PictureBox^)p)->Visible) {
							((PictureBox^)p)->Visible = true;
						}
						int value = this->game->getDiceValue(pNumber, ((IndexTag^)((PictureBox^)p)->Tag)->getIndex());
						if (value > 0) {
							((PictureBox^)p)->Image = dicePictures[value - 1];
						}
						else {
							((PictureBox^)p)->Image = dicePictures[1];
						}
						((PictureBox^)p)->BorderStyle = System::Windows::Forms::BorderStyle::None;
					}
				}
			}
			else {
				System::Windows::Forms::MessageBox::Show(gcnew System::String("Brak rzutów"),
					gcnew System::String("Brak rzutów"),
					System::Windows::Forms::MessageBoxButtons::OK);
			}
			if (pNumber) {
				this->label_curTurnP2->Text = gcnew System::String(this->game->getCurrentTurn(pNumber).ToString());
				this->label_availRP2->Text = gcnew System::String(this->game->getAvailableRerols(pNumber).ToString());
				if (!this->button4->Enabled) {
					this->button4->Enabled = true;
				}
			}
			else {
				this->label_curTurn->Text = gcnew System::String(this->game->getCurrentTurn(pNumber).ToString());
				this->label_availR->Text = gcnew System::String(this->game->getAvailableRerols(pNumber).ToString());
				if (!this->button2->Enabled) {
					this->button2->Enabled = true;
				}
			}

		}
		else {
			System::Windows::Forms::MessageBox::Show(gcnew System::String("Skoñczy³y ci siê tury. \nCzekaj az drugi gracz skonczy swoja gre?"),
				gcnew System::String("Koniec gry"),
				System::Windows::Forms::MessageBoxButtons::OK);
		}
	}

	void GameWindow::HandleEndTurn(int pNumber) {
		System::Windows::Forms::DialogResult result;
		if (this->game->getAvailableRerols(pNumber) > 0 && !this->game->isGameOver(pNumber)) {
			result = System::Windows::Forms::MessageBox::Show(gcnew System::String("Masz jeszcze dostêpn¹ poprawke. \nNapewno chcesz skoñczyæ t¹ turê?"),
				gcnew System::String("Dostêpne rerolle"),
				System::Windows::Forms::MessageBoxButtons::YesNo);
		}
		else if (this->game->isGameOver(pNumber)) {
			System::Windows::Forms::MessageBox::Show(gcnew System::String("Skoñczy³y ci siê tury. \nCzekaj az drugi gracz skonczy swoja gre?"),
				gcnew System::String("Koniec gry"),
				System::Windows::Forms::MessageBoxButtons::OK);
		}

		if (result == System::Windows::Forms::DialogResult::Yes || this->game->getAvailableRerols(pNumber) < 1) {
			this->game->endTurn(pNumber);
			System::String^ t = this->game->getCurrentTurn(pNumber).ToString();
			System::String^ rr = this->game->getAvailableRerols(pNumber).ToString();
			System::String^ score = this->game->calculateScore(pNumber).ToString();
			System::String^ tScore = this->game->getTotalScore(pNumber).ToString();

			System::Windows::Forms::GroupBox^ gameField = pNumber > 0 ? this->gamefield_p2 : this->gamefield_p1;
			for each (System::Object ^ p in gameField->Controls)
			{
				if (p->GetType() == PictureBox::typeid) {
					((System::Windows::Forms::PictureBox^)p)->Visible = false;
				}
			}
			if (pNumber) {	
				this->label_curTurnP2->Text = t;
				this->label_availRP2->Text = rr;
				this->textBox2->Text += System::String::Format("Tura {0}:Zdoby³eœ {1}. Wszystkie punkty {2}\n", t, score,tScore);
				this->button4->Enabled = false;
			}
			else {
				this->label_curTurn->Text = t;
				this->label_availR->Text = rr;
				this->textBox1->Text += System::String::Format("Tura {0}:Zdoby³eœ {1}. Wszystkie punkty {2}\n", t, score, tScore);
				this->button2->Enabled = false;
			}
		}
		
	}
}
