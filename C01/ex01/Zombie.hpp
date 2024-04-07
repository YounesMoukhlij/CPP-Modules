
#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void nameZombie(std::string str);
	Zombie(std::string str);
	void announce(void);
	~Zombie();
};

void	print_name(int num, Zombie *z);
Zombie* zombieHorde( int N , std::string name);


