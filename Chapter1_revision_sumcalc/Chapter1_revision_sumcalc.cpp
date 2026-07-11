#include <iostream>

int main()
{
	[[maybe_unused]] int a{};
	[[maybe_unused]] int b{};
	std::cout << "input your first number";
	std::cin >> a;
	std::cout << "input your second number";
	std::cin >> b;
	std::cout << "the sum of your numbers is " << a + b << '\n' << "and the difference of your numbers is " << a - b;
	return 0;

}