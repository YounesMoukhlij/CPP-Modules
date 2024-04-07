

#include "Zombie.hpp"

Zombie	*newZombie(std::string str)
{
	Zombie *name = new Zombie(str);
	return (name);
}
