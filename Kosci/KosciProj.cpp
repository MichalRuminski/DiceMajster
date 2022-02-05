#include "pch.h"
#include "StartWindow.h"

using namespace System::Windows::Forms;

[System::STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Kosci::StartWindow()); 
	return 0;
}