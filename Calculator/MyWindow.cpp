#include "MyWindow.h"

wxBEGIN_EVENT_TABLE(MyWindow, wxFrame)

wxEND_EVENT_TABLE()

MyWindow::MyWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(517, 490)) {
	
	buttons = new wxButton * [20];

	textbox = new wxTextCtrl(this, 11000, "", wxPoint(0, 0), wxSize(500, 50));
	btn7 = new wxButton(this, 10007, "7", wxPoint(0, 50), wxSize(100, 100));
	buttons[7] = btn7;
	btn8 = new wxButton(this, 10008, "8", wxPoint(100, 50), wxSize(100, 100));
	buttons[8] = btn8;
	btn9 = new wxButton(this, 10009, "9", wxPoint(200, 50), wxSize(100, 100));
	buttons[9] = btn9;
	btn4 = new wxButton(this, 10004, "4", wxPoint(0, 150), wxSize(100, 100));
	buttons[4] = btn4;
	btn5 = new wxButton(this, 10005, "5", wxPoint(100, 150), wxSize(100, 100));
	buttons[5] = btn5;
	btn6 = new wxButton(this, 10006, "6", wxPoint(200, 150), wxSize(100, 100));
	buttons[6] = btn6;
	btn1 = new wxButton(this, 10001, "1", wxPoint(0, 250), wxSize(100, 100));
	buttons[1] = btn1;
	btn2 = new wxButton(this, 10002, "2", wxPoint(100, 250), wxSize(100, 100));
	buttons[2] = btn2;
	btn3 = new wxButton(this, 10003, "3", wxPoint(200, 250), wxSize(100, 100));
	buttons[3] = btn3;
	btnClear = new wxButton(this, 10010, "C", wxPoint(0, 350), wxSize(100, 100));
	buttons[10] = btnClear;
	btn0 = new wxButton(this, 10000, "0", wxPoint(100, 350), wxSize(100, 100));
	buttons[0] = btn0;
	btnEqual = new wxButton(this, 10011, "=", wxPoint(200, 350), wxSize(100, 100));
	buttons[11] = btnEqual;
	btnPlus = new wxButton(this, 10012, "+", wxPoint(300, 50), wxSize(100, 100));
	buttons[12] = btnPlus;
	btnMinus = new wxButton(this, 10013, "-", wxPoint(300, 150), wxSize(100, 100));
	buttons[13] = btnMinus;
	btnMulti = new wxButton(this, 10014, "x", wxPoint(300, 250), wxSize(100, 100));
	buttons[14] = btnMulti;
	btnDiv = new wxButton(this, 10015, "/", wxPoint(300, 350), wxSize(100, 100));
	buttons[15] = btnDiv;
	btnBin = new wxButton(this, 10016, "Bin", wxPoint(400, 50), wxSize(100, 100));
	buttons[16] = btnBin;
	btnHex = new wxButton(this, 10017, "Hex", wxPoint(400, 150), wxSize(100, 100));
	buttons[17] = btnHex;
	btnDec = new wxButton(this, 10018, "Dec", wxPoint(400, 250), wxSize(100, 100));
	buttons[18] = btnDec;
	btnMod = new wxButton(this, 10019, "%", wxPoint(400, 350), wxSize(100, 100));
	buttons[19] = btnMod;

	for (int i = 0; i < 20; ++i)
	{
		buttons[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MyWindow::OnButtonClicked, this);
	}

}

void MyWindow::OnButtonClicked(wxCommandEvent& evt) {

	int Id = evt.GetId();
    switch (Id)
    {
    case 10000:
        textbox->AppendText("0");
        break;
    case 10001:
        textbox->AppendText("1");
        break;
    case 10002:
        textbox->AppendText("2");
        break;
    case 10003:
        textbox->AppendText("3");
        break;
    case 10004:
        textbox->AppendText("4");
        break;
    case 10005:
        textbox->AppendText("5");
        break;
    case 10006:
        textbox->AppendText("6");
        break;
    case 10007:
        textbox->AppendText("7");
        break;
    case 10008:
        textbox->AppendText("8");
        break;
    case 10009:
        textbox->AppendText("9");
        break;
    case 10010:
        textbox->Clear();
        break;
    case 10011:
        textbox->AppendText("=");
        break;
    case 10012:
        textbox->AppendText("+");
        break;
    case 10013:
        textbox->AppendText("-");
        break;
    case 10014:
        textbox->AppendText("x");
        break;
    case 10015:
        textbox->AppendText("/");
        break;
    case 10016:
        textbox->AppendText("Bin");
        break;
    case 10017:
        textbox->AppendText("I put a spell on you!");
        break;
    case 10018:
        textbox->AppendText("Dec");
        break;
    case 10019:
        textbox->AppendText("%");
        break;
    
    }


}