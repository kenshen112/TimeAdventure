#include "PrintHelper.h"


void PrintHelper::PrintSlow(int speed, const char* toPrint, std::string color)
{
	buffer = toPrint;
	char* temp = new char[sizeof(buffer)];
	for (int i = 0; i < sizeof(buffer); i++)
	{
		temp += buffer[i];
		std::cout << temp;
	}
}

void PrintHelper::Print(const char* toPrint)
{
	buffer = toPrint;
	std::cout << buffer << std::endl;
}