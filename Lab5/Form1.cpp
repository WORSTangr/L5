#include "Form1.h"
using namespace System;
using namespace::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab5::Form1 form;
	Application::Run(% form);
}

