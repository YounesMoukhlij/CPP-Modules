
#include "PmergeMe.hpp"

int main(int you, char **nes)
{
    if (you == 1)
	{
		std::cerr << "Error Try ./PmergeMe <arg1> <arg2> ..." << std::endl;
		return (EXIT_FAILURE);
	}

	PmergeMe OPerationAPPOLLO;

	for (int i = 1; i < you; i++)
	{
		OPerationAPPOLLO.OPerationParse(a(nes[i]));
	}
    return (EXIT_SUCCESS);
}
