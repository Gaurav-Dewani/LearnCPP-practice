#include <iostream>

int main() {
	int x;
	x = 5;
	std::cout << x;

	int y{ 7 };
	std::cout << y;

	int a, b, c;
	a = 10;
	b = 20; 
	c = 30;
	std::cout << a*b;

	[[maybe_unused]] int f{ 1000 };

	return 0;
}