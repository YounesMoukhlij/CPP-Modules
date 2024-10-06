

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

    vect.push_back(0x0);
    vect.push_back(0xA);
    vect.push_back(0xB);
    vect.push_back(0xC);
    vect.push_back(0xE);
    vect.push_back(0xF);

    for (std::vector<int>::iterator i = vect.begin(); i < vect.end(); i++)
    {
        std::cout << "Element of vector<int> = " << *i << std::endl;
    }

    try
    {
        {
            std::vector<int>::iterator = isthere = easyfind(vect, 0x0);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}
