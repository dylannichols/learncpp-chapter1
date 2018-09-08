#include "pch.h"
#include <iostream>

int readNumber()
{
	std::cout << "Please input a number: ";
	int input;
	std::cin >> input;
	return input;
}

void writeAnswer(int output)
{
	std::cout << "The answer is: " << output << std::endl;
}