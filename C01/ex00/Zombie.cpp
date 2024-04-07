
#include "Zombie.hpp"

Zombie::Zombie(std::string input_name)
{
	name = input_name;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << ": is destroyed\n";
}
