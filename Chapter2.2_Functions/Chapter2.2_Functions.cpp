#include <iostream>
#include <cstdlib>

int getValueFromUser()
{
	std::cout << "Enter any integer\n";
		int input{};
		std::cin >> input;
		return input;
}

int main()
{
	std::cout << "Find out sum of your two integers\n";

	int a{ getValueFromUser()};
	int b{ getValueFromUser()};
	std::cout << "sum of your integers is " << a + b;
	return EXIT_SUCCESS;
}