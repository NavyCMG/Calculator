#include "MyWindow.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(MyWindow, wxFrame)

wxEND_EVENT_TABLE()

MyWindow::MyWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(517, 490)) {
	
	buttons = new wxButton * [20];

	textbox = new wxTextCtrl(this, 11000, "", wxPoint(0, 0), wxSize(500, 50));
    btn7 = ButtonFactory::CreateBtn7(this);
	buttons[7] = btn7;
    btn8 = ButtonFactory::CreateBtn8(this);
	buttons[8] = btn8;
	btn9 = ButtonFactory::CreateBtn9(this);
	buttons[9] = btn9;
	btn4 = ButtonFactory::CreateBtn4(this);
	buttons[4] = btn4;
	btn5 = ButtonFactory::CreateBtn5(this);
	buttons[5] = btn5;
	btn6 = ButtonFactory::CreateBtn6(this);
	buttons[6] = btn6;
	btn1 = ButtonFactory::CreateBtn1(this);
	buttons[1] = btn1;
	btn2 = ButtonFactory::CreateBtn2(this);
	buttons[2] = btn2;
	btn3 = ButtonFactory::CreateBtn3(this);
	buttons[3] = btn3;
	btnClear = ButtonFactory::CreateBtnClear(this);
	buttons[10] = btnClear;
	btn0 = ButtonFactory::CreateBtn0(this);
    buttons[0] = btn0;
	btnEqual = ButtonFactory::CreateBtnEqual(this);
	buttons[11] = btnEqual;
	btnPlus = ButtonFactory::CreateBtnPlus(this);
	buttons[12] = btnPlus;
	btnMinus = ButtonFactory::CreateBtnMinus(this);
	buttons[13] = btnMinus;
	btnMulti = ButtonFactory::CreateBtnMulti(this);
	buttons[14] = btnMulti;
	btnDiv = ButtonFactory::CreateBtnDiv(this);
	buttons[15] = btnDiv;
	btnBin = ButtonFactory::CreateBtnBin(this);
	buttons[16] = btnBin;
	btnHex = ButtonFactory::CreateBtnHex(this);
	buttons[17] = btnHex;
	btnDec = ButtonFactory::CreateBtnDec(this);
	buttons[18] = btnDec;
	btnMod = ButtonFactory::CreateBtnMod(this);
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