#include "MainForm.h"


using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CafeteriaProject::CafeteriaForm form;
	Application::Run(% form);

	return 0;
}