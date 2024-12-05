#include "ScannerInterface.h"
#include "LoginForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CafeteriaRecordSys::ScannerInterface form;
	//CafeteriaRecordSys::LoginForm form;
	Application::Run(% form);

}