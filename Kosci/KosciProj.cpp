#include "pch.h"



//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

#include "Main.h"

using namespace System::Windows::Forms;

[System::STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Kosci::Main()); 
	return 0;
}