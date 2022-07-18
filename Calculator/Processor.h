#pragma once
#include <string>


class Processor
{
private:
	Processor() = default;
	static Processor* processor;

public:
	Processor(Processor& other) = delete; //makes it so the copy constructor doesnt work
	void operator=(Processor& other) = delete; //makes it so the asignment operator doesnt work
	static Processor* GetInstance();

	float Solve(float num1, float num2, char op);
	std::string ToBinaryString(float num1);
	std::string ToHexadecimalString(float num1);
};

