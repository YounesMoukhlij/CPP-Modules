

#include "Zombie.hpp"

void	show()
{
	system ("leaks zombie");
}

int	main(void)
{
	std::string	input;

	atexit(show);
	Zombie *z = newZombie(input);
	z->announce();
	delete(z);
	randomChump(|);
	return (0x0);
}
