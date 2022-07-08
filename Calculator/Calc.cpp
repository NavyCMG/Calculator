#include "Calc.h"
#include "Window.h"

wxIMPLEMENT_APP(Calc); //used to make the App the starting point of the program

bool Calc::OnInit() {
	window = new MyWindow();
	window->Show();
	return true;
}