
#include "Zombie.hpp"

void Zombie::nameZombie(std::string str)
{
	name = str;
}

Zombie::Zombie(std::string str)
{
	name = str;
}

Zombie::~Zombie()
{
    std::cout << name << ": is destroyed\n";
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
