#include <iostream>
#include <cstdlib>
#include "io.h"

//readnumber
int readNumber()
{
	int x{};
	std::cout << "input integer for addition\n";
	std::cin >> x;
	return x;
}
//writeanswer
void writeAnswer(int x)
{
	std::cout << "the value of sum is " << x << "\n";
}