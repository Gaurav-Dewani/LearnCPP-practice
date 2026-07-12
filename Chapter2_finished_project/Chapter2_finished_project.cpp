#include <iostream>
#include <cstdlib>
#include "io.h"

//main
int main()
{
	int a{ readNumber() };
	int b{ readNumber() };
	int z{ a + b };
	writeAnswer(z);
	return EXIT_SUCCESS;
}