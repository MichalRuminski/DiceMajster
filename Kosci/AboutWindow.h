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
	private: System::Windows::Forms::Label^ label_projS;
	private: System::Windows::Forms::Label^ label_progS;
	private: System::Windows::Forms::Label^ label_proj;
	private: System::Windows::Forms::Label^ label_prog;
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
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->label_projS = (gcnew System::Windows::Forms::Label());
			this->label_progS = (gcnew System::Windows::Forms::Label());
			this->label_proj = (gcnew System::Windows::Forms::Label());
			this->label_prog = (gcnew System::Windows::Forms::Label());
			this->picturebox_Photo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox_Photo))->BeginInit();
			this->SuspendLayout();
			// 
			// label_title
			// 
			this->label_title->AutoSize = true;
			this->label_title->Location = System::Drawing::Point(36, 19);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(81, 13);
			this->label_title->TabIndex = 0;
			this->label_title->Text = L"Koœciany Poker";
			// 
			// label_projS
			// 
			this->label_projS->AutoSize = true;
			this->label_projS->Location = System::Drawing::Point(39, 125);
			this->label_projS->Name = L"label_projS";
			this->label_projS->Size = System::Drawing::Size(40, 13);
			this->label_projS->TabIndex = 1;
			this->label_projS->Text = L"Projekt";
			// 
			// label_ProgS
			// 
			this->label_progS->AutoSize = true;
			this->label_progS->Location = System::Drawing::Point(36, 168);
			this->label_progS->Name = L"label_ProgS";
			this->label_progS->Size = System::Drawing::Size(80, 13);
			this->label_progS->TabIndex = 2;
			this->label_progS->Text = L"Programowanie";
			// 
			// label_proj
			// 
			this->label_proj->AutoSize = true;
			this->label_proj->Location = System::Drawing::Point(168, 125);
			this->label_proj->Name = L"label_proj";
			this->label_proj->Size = System::Drawing::Size(86, 13);
			this->label_proj->TabIndex = 3;
			this->label_proj->Text = L"Micha³ Rumiñski";
			// 
			// label_prog
			// 
			this->label_prog->AutoSize = true;
			this->label_prog->Location = System::Drawing::Point(171, 168);
			this->label_prog->Name = L"label_prog";
			this->label_prog->Size = System::Drawing::Size(86, 13);
			this->label_prog->TabIndex = 4;
			this->label_prog->Text = L"Micha³ Rumiñski";
			// 
			// picturebox_Photo
			// 
			this->picturebox_Photo->Location = System::Drawing::Point(450, 12);
			this->picturebox_Photo->Name = L"picturebox_Photo";
			this->picturebox_Photo->Size = System::Drawing::Size(140, 163);
			this->picturebox_Photo->TabIndex = 5;
			this->picturebox_Photo->TabStop = false;
			// 
			// AboutWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 326);
			this->Controls->Add(this->picturebox_Photo);
			this->Controls->Add(this->label_prog);
			this->Controls->Add(this->label_proj);
			this->Controls->Add(this->label_progS);
			this->Controls->Add(this->label_projS);
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
