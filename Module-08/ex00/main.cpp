

#include "easyfind.hpp"


int main(int you, char **nes)
{
	IGNORE(nes);
	if (you != 0x1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}

    std::vector<int> vect;

    vect.push_back(0x1);
    vect.push_back(0xA);
    vect.push_back(0xB);
    vect.push_back(0xC);
    vect.push_back(0xE);
    vect.push_back(0xF);

    for (std::iterator i = vect.begin(); i < vect.end(), i++)
    {
        std::cout << *vect << std::endl;
    }

}
