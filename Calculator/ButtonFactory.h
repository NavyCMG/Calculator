#pragma once
#include "wx/wx.h"

class ButtonFactory
{
public:

	static wxButton* CreateBtn0(wxWindow* window);
	static wxButton* CreateBtn1(wxWindow* window);
	static wxButton* CreateBtn2(wxWindow* window);
	static wxButton* CreateBtn3(wxWindow* window);
	static wxButton* CreateBtn4(wxWindow* window);
	static wxButton* CreateBtn5(wxWindow* window);
	static wxButton* CreateBtn6(wxWindow* window);
	static wxButton* CreateBtn7(wxWindow* window);
	static wxButton* CreateBtn8(wxWindow* window);
	static wxButton* CreateBtn9(wxWindow* window);
	static wxButton* CreateBtnPlus(wxWindow* window);
	static wxButton* CreateBtnMinus(wxWindow* window);
	static wxButton* CreateBtnMulti(wxWindow* window);
	static wxButton* CreateBtnDiv(wxWindow* window);
	static wxButton* CreateBtnEqual(wxWindow* window);
	static wxButton* CreateBtnClear(wxWindow* window);
	static wxButton* CreateBtnMod(wxWindow* window);
	static wxButton* CreateBtnBin(wxWindow* window);
	static wxButton* CreateBtnHex(wxWindow* window);
	static wxButton* CreateBtnDec(wxWindow* window);
};

