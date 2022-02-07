#include "pch.h"
#include "StartWindow.h"
#include "Main.h"


namespace Kosci {
		Main::Main(Game* g, StartWindow^ parent) {

		this->parent = parent;
		this->game = g;
		this->dicePictures = gcnew array<System::Drawing::Bitmap^>(6);
		this->InitializeTextures();
		this->InitializeComponent();
	}

		void Main::HandleNewGame() {
			System::Windows::Forms::DialogResult result = MessageBox::Show(gcnew System::String(L"Na pewno zakonczyc aktualna gre?"),
											gcnew System::String(L"Zakonczyc?"),System::Windows::Forms::MessageBoxButtons::YesNo);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				this->Close();
				parent->Show();
			}
		}

		void Main::HandleClosing() {
			parent->Show();
		}
}
