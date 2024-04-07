

#include "Zombie.hpp"


int main(void)
{
	std::string input_1;
	std::string input_2;
	int	number;

	std::cout << "Type a Zombie Name : ";
	if (!std::getline(std::cin, input_1))
		exit(1);
	std::cout << "Type Zombies Number : ";
	if (!std::getline(std::cin, input_2))
		exit(1);
	number = std::atoi(input_2.c_str());
	Zombie *z = ZombieHord()
}
