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
	}

		void GameWindow::HandleNewGame() {
			System::Windows::Forms::DialogResult result = MessageBox::Show(gcnew System::String(L"Na pewno zakonczyc aktualna gre?"),
											gcnew System::String(L"Zakonczyc?"),System::Windows::Forms::MessageBoxButtons::YesNo);
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
				}
				else {
					System::Windows::Forms::MessageBox::Show(gcnew System::String("Brak rzutów"), 
															gcnew System::String("Brak rzutów"),
															System::Windows::Forms::MessageBoxButtons::OK);
				}
				if (pNumber) {
					this->label_curTurnP2->Text = gcnew System::String(this->game->getCurrentTurn(pNumber).ToString());
					this->label_availRP2->Text = gcnew System::String(this->game->getAvailableRerols(pNumber).ToString());
				}
				else {
					this->label_curTurn->Text = gcnew System::String(this->game->getCurrentTurn(pNumber).ToString());
					this->label_availR->Text = gcnew System::String(this->game->getAvailableRerols(pNumber).ToString());
				}

			}
		}

		void GameWindow::HandleEndTurn(int pNumber) {

		}
}
