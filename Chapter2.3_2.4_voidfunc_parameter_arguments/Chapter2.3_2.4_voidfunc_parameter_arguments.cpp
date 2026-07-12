#include <iostream>
#include <cstdlib>

void printThanks()
{
	std::cout << "We appreciate your support!!\n thankyou!!!\n to support patreon please click on the link below.";
}

int dodouble(int x)
{
	return x * 2;
}

int getInteger()
{
	int num{};
	std::cout << "please input the integer you want doubled\n";
	std::cin >> num;
	return num;
}

int main()
{
	int x{ dodouble(getInteger()) };
	std::cout << "the doubled value of your input is " << x << "\n";
	printThanks();
}
