#include "MyWindow.h"
#include "ButtonFactory.h"
#include "Processor.h"

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

    Processor* processor = Processor::GetInstance();

	int Id = evt.GetId();

    switch (Id)
    {
    case 10000:
        if (justSolved == true)
        {
            num1 = 0;
            textbox->Clear();
        }
        textbox->AppendText("0");
        if (op == ' ')
        {
            num1 = (num1 * 10) + 0;
        }
        else {
            num2 = (num2 * 10) + 0;
        }
        justSolved = false;
        break;
    case 10001:
        if (justSolved == true)
        {
            num1 = 0;
            textbox->Clear();
        }
        textbox->AppendText("1");
        if (op == ' ')
        {
            num1 = (num1 * 10) + 1;
        }
        else {
            num2 = (num2 * 10) + 1;
        }
        justSolved = false;
        break;
    case 10002:
        if (justSolved == true)
        {
            num1 = 0;
            textbox->Clear();
        }
        textbox->AppendText("2");
        if (op == ' ')
        {
            num1 = (num1 * 10) + 2;
        }
        else {
            num2 = (num2 * 10) + 2;
        }
        justSolved = false;
        break;
    case 10003:
        if (justSolved == true)
        {
            num1 = 0;
            textbox->Clear();
        }
        textbox->AppendText("3");
        if (op == ' ')
        {
            num1 = (num1 * 10) + 3;
        }
        else {
            num2 = (num2 * 10) + 3;
        }
        justSolved = false;
        break;
    case 10004:
        if (justSolved == true)
        {
            num1 = 0;
            textbox->Clear();
        }
        textbox->AppendText("4");
        if (op == ' ')
        {
            num1 = (num1 * 10) + 4;
        }
        else {
            num2 = (num2 * 10) + 4;
        }
        justSolved = false;
        break;
    case 10005:
        if (justSolved == true)
        {
            num1 = 0;
            textbox->Clear();
        }
        textbox->AppendText("5");
        if (op == ' ')
        {
            num1 = (num1 * 10) + 5;
        }
        else {
            num2 = (num2 * 10) + 5;
        }
        justSolved = false;
        break;
    case 10006:
        if (justSolved == true)
        {
            num1 = 0;
            textbox->Clear();
        }
        textbox->AppendText("6");
        if (op == ' ')
        {
            num1 = (num1 * 10) + 6;
        }
        else {
            num2 = (num2 * 10) + 6;
        }
        justSolved = false;
        break;
    case 10007:
        if (justSolved == true)
        {
            num1 = 0;
            textbox->Clear();
        }
        textbox->AppendText("7");
        if (op == ' ')
        {
            num1 = (num1 * 10) + 7;
        }
        else {
            num2 = (num2 * 10) + 7;
        }
        justSolved = false;
        break;
    case 10008:
        if (justSolved == true)
        {
            num1 = 0;
            textbox->Clear();
        }
        textbox->AppendText("8");
        if (op == ' ')
        {
            num1 = (num1 * 10) + 8;
        }
        else {
            num2 = (num2 * 10) + 8;
        }
        justSolved = false;
        break;
    case 10009:
        if (justSolved == true)
        {
            num1 = 0;
            textbox->Clear();
        }
        textbox->AppendText("9");
        if (op == ' ')
        {
            num1 = (num1 * 10) + 9;
        }
        else {
            num2 = (num2 * 10) + 9;
        }
        justSolved = false;
        break;
    case 10010:
        textbox->Clear();
        num1 = 0;
        num2 = 0;
        result = 0;
        op = ' ';
        break;
    case 10011:
        result = processor->Solve(num1, num2, op);
        textbox->Clear();
        textbox->AppendText(std::to_string(result));
        op = ' ';
        num1 = result;
        num2 = 0;
        justSolved = true;
        break;
    case 10012:
        textbox->AppendText("+");
        op = '+';
        justSolved = false;
        break;
    case 10013:
        textbox->AppendText("-");
        op = '-';
        justSolved = false;
        break;
    case 10014:
        textbox->AppendText("x");
        op = '*';
        justSolved = false;
        break;
    case 10015:
        textbox->AppendText("/");
        op = '/';
        justSolved = false;
        break;
    case 10016:
        textbox->Clear();
        textbox->AppendText(processor->ToBinaryString(num1));
        justSolved = false;
        break;
    case 10017:
        textbox->Clear();
        textbox->AppendText(processor->ToHexadecimalString(num1));
        justSolved = false;
        break;
    case 10018:
        textbox->Clear();
        textbox->AppendText(std::to_string((int)num1));
        justSolved = false;
        break;
    case 10019:
        textbox->AppendText("%");
        op = '%';
        justSolved = false;
        break;
    }
}