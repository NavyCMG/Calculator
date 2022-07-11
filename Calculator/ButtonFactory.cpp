#include "ButtonFactory.h"


wxButton* ButtonFactory::CreateBtn0(wxWindow* window){
	return new wxButton(window, 10000, "0", wxPoint(100, 350), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtn1(wxWindow* window){
	return new wxButton(window, 10001, "1", wxPoint(0, 250), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtn2(wxWindow* window){
	return new wxButton(window, 10002, "2", wxPoint(100, 250), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtn3(wxWindow* window) {
	return new wxButton(window, 10003, "3", wxPoint(200, 250), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtn4(wxWindow* window) {
	return new wxButton(window, 10004, "4", wxPoint(0, 150), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtn5(wxWindow* window) {
	return new wxButton(window, 10005, "5", wxPoint(100, 150), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtn6(wxWindow* window) {
	return new wxButton(window, 10006, "6", wxPoint(200, 150), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtn7(wxWindow* window) {
	return new wxButton(window, 10007, "7", wxPoint(0, 50), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtn8(wxWindow* window) {
	return new wxButton(window, 10008, "8", wxPoint(100, 50), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtn9(wxWindow* window) {
	return new wxButton(window, 10009, "9", wxPoint(200, 50), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtnPlus(wxWindow* window) {
	return new wxButton(window, 10012, "+", wxPoint(300, 50), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtnMinus(wxWindow* window) {
	return new wxButton(window, 10013, "-", wxPoint(300, 150), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtnMulti(wxWindow* window) {
	return new wxButton(window, 10014, "x", wxPoint(300, 250), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtnDiv(wxWindow* window) {
	return new wxButton(window, 10015, "/", wxPoint(300, 350), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtnEqual(wxWindow* window) {
	return new wxButton(window, 10011, "=", wxPoint(200, 350), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtnClear(wxWindow* window) {
	return new wxButton(window, 10010, "C", wxPoint(0, 350), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtnMod(wxWindow* window) {
	return new wxButton(window, 10019, "%", wxPoint(400, 350), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtnBin(wxWindow* window) {
	return new wxButton(window, 10016, "Bin", wxPoint(400, 50), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtnHex(wxWindow* window) {
	return new wxButton(window, 10017, "Hex", wxPoint(400, 150), wxSize(100, 100));
}
wxButton* ButtonFactory::CreateBtnDec(wxWindow* window) {
	return new wxButton(window, 10018, "Dec", wxPoint(400, 250), wxSize(100, 100));
}