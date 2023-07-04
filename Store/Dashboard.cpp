#include "Dashboard.h"
#include "Sell.h"
#include "Catg.h"
#include "Login.h"
#include "Additems.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Store::Login);
}
