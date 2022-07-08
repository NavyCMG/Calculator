#include "Window.h"

MyWindow::MyWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(517, 490)) {
	
	textbox = new wxTextCtrl(this, 11000, "", wxPoint(0, 0), wxSize(500, 50));
	btn7 = new wxButton(this, 10007, "7", wxPoint(0, 50), wxSize(100, 100));
	btn8 = new wxButton(this, 10008, "8", wxPoint(100, 50), wxSize(100, 100));
	btn9 = new wxButton(this, 10009, "9", wxPoint(200, 50), wxSize(100, 100));
	btn4 = new wxButton(this, 10004, "4", wxPoint(0, 150), wxSize(100, 100));
	btn5 = new wxButton(this, 10005, "5", wxPoint(100, 150), wxSize(100, 100));
	btn6 = new wxButton(this, 10006, "6", wxPoint(200, 150), wxSize(100, 100));
	btn1 = new wxButton(this, 10001, "1", wxPoint(0, 250), wxSize(100, 100));
	btn2 = new wxButton(this, 10002, "2", wxPoint(100, 250), wxSize(100, 100));
	btn3 = new wxButton(this, 10003, "3", wxPoint(200, 250), wxSize(100, 100));
	btnClear = new wxButton(this, 10010, "C", wxPoint(0, 350), wxSize(100, 100));
	btn0 = new wxButton(this, 10000, "0", wxPoint(100, 350), wxSize(100, 100));
	btnEqual = new wxButton(this, 10011, "=", wxPoint(200, 350), wxSize(100, 100));
	btnPlus = new wxButton(this, 10012, "+", wxPoint(300, 50), wxSize(100, 100));
	btnMinus = new wxButton(this, 10013, "-", wxPoint(300, 150), wxSize(100, 100));
	btnMulti = new wxButton(this, 10014, "x", wxPoint(300, 250), wxSize(100, 100));
	btnDiv = new wxButton(this, 10015, "/", wxPoint(300, 350), wxSize(100, 100));
	btnBin = new wxButton(this, 10016, "Bin", wxPoint(400, 50), wxSize(100, 100));
	btnHex = new wxButton(this, 10017, "Hex", wxPoint(400, 150), wxSize(100, 100));
	btnDec = new wxButton(this, 10018, "Dec", wxPoint(400, 250), wxSize(100, 100));
	btnMod = new wxButton(this, 10019, "%", wxPoint(400, 350), wxSize(100, 100));

}