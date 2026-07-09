#include <iostream>

int main() 
{
	std::cout << "input 2 numbers and find the product \n";
	[[maybe_unused]] int a{};
	[[maybe_unused]] int b{};
	std::cout << "input your 1st number\n";
	std::cin >> a;
	std::cout << "input your 2nd number\n";
	std::cin >> b;
	std::cout << "the product of your two numbers is " << a * b;
	return 0;
}
                                                                              