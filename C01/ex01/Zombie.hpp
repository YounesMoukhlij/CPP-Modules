
#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void nameZombie(std::string str);
	Zombie(std::string name);
	void announce(void);
	~Zombie();
};

Zombie* zombieHorde( int N , std::string name);


