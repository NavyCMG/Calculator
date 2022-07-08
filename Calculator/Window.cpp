#include "Window.h"

MyWindow::MyWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(500, 490)) {
	
	textbox = new wxTextCtrl(this, 10000, "", wxPoint(0, 0), wxSize(500, 50));
	btn7 = new wxButton(this, 10001, "7", wxPoint(0, 50), wxSize(100, 100));
	btn8 = new wxButton(this, 10001, "8", wxPoint(100, 50), wxSize(100, 100));
	btn9 = new wxButton(this, 10001, "9", wxPoint(200, 50), wxSize(100, 100));
	btn4 = new wxButton(this, 10001, "4", wxPoint(0, 150), wxSize(100, 100));
	btn5 = new wxButton(this, 10001, "5", wxPoint(100, 150), wxSize(100, 100));
	btn6 = new wxButton(this, 10001, "6", wxPoint(200, 150), wxSize(100, 100));
	btn1 = new wxButton(this, 10001, "1", wxPoint(0, 250), wxSize(100, 100));
	btn2 = new wxButton(this, 10001, "2", wxPoint(100, 250), wxSize(100, 100));
	btn3 = new wxButton(this, 10001, "3", wxPoint(200, 250), wxSize(100, 100));
	btnClear = new wxButton(this, 10001, "C", wxPoint(0, 350), wxSize(100, 100));
	btn0 = new wxButton(this, 10001, "0", wxPoint(100, 350), wxSize(100, 100));
	btnEqual = new wxButton(this, 10001, "=", wxPoint(200, 350), wxSize(100, 100));

}