#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"

class MyWindow : public wxFrame
{
private:
	float num1 = 0;
	float num2 = 0;
	float result = 0;
	char op = ' ';
	bool justSolved = false;

public:
	MyWindow();
	//~MyWindow();
	wxButton** buttons = nullptr;

	wxTextCtrl* textbox = nullptr;
	wxButton* btn0 = nullptr;
	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;
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

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

