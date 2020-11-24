#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args){
    Console::WriteLine("####################################");
    Application::EnableVisualStyles();
    Console::WriteLine("####################################");
    Application::SetCompatibleTextRenderingDefault(false);
    Console::WriteLine("####################################");
    try {
        EIA2MININFPOOP6::MyForm mainFRM;
        Console::WriteLine("####################################");
        Application::Run(% mainFRM);
        Console::WriteLine("####################################");
    } catch (AccessViolationException^ e) {
        Console::WriteLine("####################################");
        Console::WriteLine(e);
        Console::WriteLine("####################################");
    }
}