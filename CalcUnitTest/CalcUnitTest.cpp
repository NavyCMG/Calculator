
#include <string>
#include "CppUnitTest.h"
#include "../Calculator/Processor.h"
#include "../Calculator/ButtonFactory.h"
#include "wx/wx.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalcUnitTest
{
	TEST_CLASS(ProcessorTests)
	{
	public:
		
		Processor* processor = Processor::GetInstance();
		TEST_METHOD(Adding45and89)
		{
			float result = processor->Solve(45, 89, '+');
			Assert::IsTrue((float)134 == result);
		}
		TEST_METHOD(Subtracting33from66)
		{
			float result = processor->Solve(66, 33, '-');
			Assert::IsTrue((float)33 == result);
		}
		TEST_METHOD(Multiplying4to5)
		{
			float result = processor->Solve(4, 5, '*');
			Assert::IsTrue((float)20 == result);
		}
		TEST_METHOD(Dividing33from66)
		{
			float result = processor->Solve(66, 33, '/');
			Assert::IsTrue((float)2 == result);
		}
		TEST_METHOD(Modding3From20)
		{
			float result = processor->Solve(20, 3, '%');
			Assert::IsTrue((float)2 == result);
		}
		TEST_METHOD(BinReturnsAString)
		{
			std::string result = processor->ToBinaryString(1);
			Assert::IsTrue(result == "0000000000000001");
		}
		TEST_METHOD(BinConverts55ToBinary)
		{
			std::string result = processor->ToBinaryString(55);
			Assert::IsTrue(result == "0000000000110111");
		}
		TEST_METHOD(HexReturnsAString)
		{
			std::string result = processor->ToHexadecimalString(1);
			Assert::IsTrue(result == "0x1");
		}
		TEST_METHOD(HexConverts55toHex)
		{
			std::string result = processor->ToHexadecimalString(55);
			Assert::IsTrue(result == "0x37");
		}
		TEST_METHOD(HexConverts100toHex)
		{
			std::string result = processor->ToHexadecimalString(100);
			Assert::IsFalse(result == "0x0");
			Assert::IsTrue(result == "0x64");
		}
	};
	TEST_CLASS(ButtonFactoryTests)
	{
	public:
		wxFrame* testWindow = new wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(517, 490));
		TEST_METHOD(CheckButtonLabel0)
		{
			wxButton* btn0 = ButtonFactory::CreateBtn0(testWindow);
			Assert::IsTrue(btn0->GetLabel().ToStdString() == "0");
		}
		TEST_METHOD(CheckButtonLabel1)
		{
			wxButton* btn1 = ButtonFactory::CreateBtn1(testWindow);
			Assert::IsTrue(btn1->GetLabel().ToStdString() == "1");
		}
		TEST_METHOD(CheckButtonLabel2)
		{
			wxButton* btn2 = ButtonFactory::CreateBtn2(testWindow);
			Assert::IsTrue(btn2->GetLabel().ToStdString() == "2");
		}
		TEST_METHOD(CheckButtonLabel3)
		{
			wxButton* btn3 = ButtonFactory::CreateBtn3(testWindow);
			Assert::IsTrue(btn3->GetLabel().ToStdString() == "3");
		}
		TEST_METHOD(CheckButtonLabel4)
		{
			wxButton* btn4 = ButtonFactory::CreateBtn4(testWindow);
			Assert::IsTrue(btn4->GetLabel().ToStdString() == "4");
		}
		TEST_METHOD(CheckButtonLabel5)
		{
			wxButton* btn5 = ButtonFactory::CreateBtn5(testWindow);
			Assert::IsTrue(btn5->GetLabel().ToStdString() == "5");
		}
		TEST_METHOD(CheckButtonLabel6)
		{
			wxButton* btn6 = ButtonFactory::CreateBtn6(testWindow);
			Assert::IsTrue(btn6->GetLabel().ToStdString() == "6");
		}
		TEST_METHOD(CheckButtonLabel7)
		{
			wxButton* btn7 = ButtonFactory::CreateBtn7(testWindow);
			Assert::IsTrue(btn7->GetLabel().ToStdString() == "7");
		}
		TEST_METHOD(CheckButtonLabel8)
		{
			wxButton* btn8 = ButtonFactory::CreateBtn8(testWindow);
			Assert::IsTrue(btn8->GetLabel().ToStdString() == "8");
		}TEST_METHOD(CheckButtonLabel9)
		{
			wxButton* btn9 = ButtonFactory::CreateBtn9(testWindow);
			Assert::IsTrue(btn9->GetLabel().ToStdString() == "9");
		}
	};
}
