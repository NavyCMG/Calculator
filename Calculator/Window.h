#pragma once
#include "wx/wx.h"

class MyWindow : public wxFrame
{
private:

public:
	MyWindow();
	//~MyWindow();
	wxTextCtrl* textbox = nullptr;
	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;
	wxButton* btn0 = nullptr;
	wxButton* btnPlus = nullptr;
	wxButton* btnMinus = nullptr;
	wxButton* btnMulti = nullptr;
	wxButton* btnDiv = nullptr;
	wxButton* btnEqual = nullptr;
	wxButton* btnClear = nullptr;
	wxButton* btnMod = nullptr;
	wxButton* btnBin = nullptr;
	wxButton* btnHex = nullptr;
	wxButton* btnDec = nullptr;

};

