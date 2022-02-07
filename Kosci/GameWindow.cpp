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
}
