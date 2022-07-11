#pragma once
#include "wx/wx.h"
#include "MyWindow.h"

class Calc : public wxApp
{
private:
	MyWindow *window = nullptr;

public:
	virtual bool OnInit(); //required initialization method

};

