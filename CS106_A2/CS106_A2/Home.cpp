/*Programmer:  Taih Trann 270156691
* Description: CS106 Assessment 2 - My Covid-19 Record Implementation
* Windform GUI - Graphic User Interface
*/
#include "Home.h"
#include "Sign_in.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace CS106A2;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Text::RegularExpressions;
[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	if (!File::Exists("userLogin.txt")) {
		String^ b = "admin";
		String^ c = "12345";
		String^ d = "1";

		array<String^>^ defaultData = gcnew array<String^> { b + "-" + c + "-" + d };
		File::WriteAllLines("userLogin.txt", defaultData);
	}

	//Create and run Home form

	CS106A2::Home h_form;
	Application::Run(% h_form);
}
