
#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	char *t = new char[10];
	std::cout << "write something" << std::endl;
	std::cin.getline(t, 10);

	std::cout << t << std::endl;
	delete[] t;
}
