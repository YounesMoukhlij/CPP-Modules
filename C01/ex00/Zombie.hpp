

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	void announce( void );
	Zombie(std::string input_name);
	~Zombie();
};

Zombie	*newZombie(std::string str);
void randomChump(std::string name);



