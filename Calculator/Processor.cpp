#include "Processor.h"

Processor* Processor::processor = nullptr; //need to instantiate the item in the cpp file

Processor* Processor::GetInstance() {
	if (processor == nullptr)
	{
		processor = new Processor;
	}
	return processor;
}

float Processor::Solve(float num1, float num2, char op)
{
	float result = 0;
	switch (op)
	{
	case '+':
	{
		result = num1 + num2;
		break;
	}
	case '-':
	{
		result = num1 - num2;
		break;
	}
	case '*':
	{
		result = num1 * num2;
		break;
	}
	case '/':
	{
		result = num1 / num2;
		break;
	}
	case '%':
	{
		result = (int)num1 % (int)num2;
		break;
	}
	}
	return result;
}

std::string Processor::ToBinaryString(float num1)
{
	std::string output = "";
	for (int i = 0; i < 16; ++i)
	{
		output = std::to_string((int)num1 % 2) + output;
	}
	return output;
}

std::string Processor::ToHexadecimalString(float num1)
{
	std::string output = "";
	while (num1 > 0)
	{
		int remainder = (int)num1 % 16;
		if (remainder < 10)
		{
			output = std::to_string(remainder) + output;
		}
		else if (remainder == 10) {
			output = "A" + output;
		}
		else if (remainder == 11) {
			output = "B" + output;
		}
		else if (remainder == 12) {
			output = "C" + output;
		}
		else if (remainder == 13) {
			output = "D" + output;
		}
		else if (remainder == 14) {
			output = "E" + output;
		}
		else if (remainder == 15) {
			output = "F" + output;
		}
		num1 = (int)num1 / 16;
	}

	return "0x" + output; //0x is to identify the number as a hexadecimal number
}