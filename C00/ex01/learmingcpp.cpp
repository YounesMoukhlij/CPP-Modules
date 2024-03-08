
#include <iostream>
#include <string>
#include <stdlib.h>

int	main()
{

	char *t = new char[10];
	std::cout << "write something" << std::endl;
	std::cin.getline(t, 10);

	std::string str(t);
	for (int i = 0; i < str.length(); i++)
		std::cout << (char) std::toupper(t[i]);
	std::cout << std::endl;
	std::cout << str.length() << std::endl;
	std::cout << str.length() << std::endl;
	delete[] t;
	return (0);
}
