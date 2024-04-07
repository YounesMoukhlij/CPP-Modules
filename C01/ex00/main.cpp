

#include "Zombie.hpp"

void	show()
{
	system ("leaks zombie");
}

int	main(void)
{
	std::string	input;

	atexit(show);
	std::cout << "Type a Zombie name : ";
	if (!std::getline(std::cin, input))
		exit(1);
	Zombie *z = newZombie(input);
	z->announce();
	delete(z);
	std::cout << "Type a another name : ";
	if (!std::getline(std::cin, input))
		exit(1);
	randomChump(input);
	return (0x0);
}
