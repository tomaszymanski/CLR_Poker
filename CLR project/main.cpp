#include "main.h"
#include "MainForm.h"
//#include "Enums.h"


using namespace System;
using namespace System::Windows::Forms;


void main(array<String^>^ args) {

        Application::EnableVisualStyles();
        Application::SetCompatibleTextRenderingDefault(false);
        CLRproject::MainForm form;
        Application::Run(% form);
   
}