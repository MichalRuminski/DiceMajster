#pragma once


namespace Kosci {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	

	/// <summary>
	/// Podsumowanie informacji o AboutWindow
	/// </summary>
	public ref class AboutWindow : public System::Windows::Forms::Form
	{
	public:
		AboutWindow(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~AboutWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_title;




	private: System::Windows::Forms::PictureBox^ picturebox_Photo;

	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutWindow::typeid));
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->picturebox_Photo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_Photo))->BeginInit();
			this->SuspendLayout();
			// 
			// label_title
			// 
			this->label_title->AutoSize = true;
			this->label_title->Location = System::Drawing::Point(9, 9);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(761, 169);
			this->label_title->TabIndex = 0;
			this->label_title->Text = resources->GetString(L"label_title.Text");
			// 
			// picturebox_Photo
			// 
			this->picturebox_Photo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picturebox_Photo.BackgroundImage")));
			this->picturebox_Photo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->picturebox_Photo->Location = System::Drawing::Point(565, 122);
			this->picturebox_Photo->Name = L"picturebox_Photo";
			this->picturebox_Photo->Size = System::Drawing::Size(140, 163);
			this->picturebox_Photo->TabIndex = 5;
			this->picturebox_Photo->TabStop = false;
			// 
			// AboutWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 355);
			this->Controls->Add(this->picturebox_Photo);
			this->Controls->Add(this->label_title);
			this->Name = L"AboutWindow";
			this->Text = L"About";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AboutWindow::AboutWindow_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_Photo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AboutWindow_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		if (e->KeyCode == System::Windows::Forms::Keys::Space) {
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
		}

		if (e->Alt && e->KeyCode == System::Windows::Forms::Keys::Q) {
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
		}
	}
};
}
