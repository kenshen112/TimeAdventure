#pragma once
#include <iostream>
#include <string.h>
class PrintHelper
{
private:
	const char* buffer;

public:
	void PrintSlow(int speed, const char* toPrint, std::string color = " "); // Handles printing in slomo
	void Print(const char* toPrint);
};

