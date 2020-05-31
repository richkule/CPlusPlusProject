#include "IsForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array< String^>^ args) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Kursovaya::IsForm form;
	Application::Run(% form);

}
