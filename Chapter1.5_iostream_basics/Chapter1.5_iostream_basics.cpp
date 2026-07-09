#include <iostream>

int main() {
	[[maybe_unused]] int a{ 10 };
	[[maybe_unused]] int b{ 20 };
	[[maybe_unused]] int c{ 30 };
	[[maybe_unused]] int d{ 40 };
	std::cout << a << " " << b << std::endl << d << '\n';
}