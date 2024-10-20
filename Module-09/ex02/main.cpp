
#include "PmergeMe.hpp"

int main(int you, char **nes)
{
    if (you == 1)
	{
		std::cerr << "Error Try ./PmergeMe <arg1> <arg2> ..." << std::endl;
		return (EXIT_FAILURE);
	}

	try
	{
		PmergeMe OPerationAPPOLLO;

		for (int i = 1; i < you; i++)
			OPerationAPPOLLO.OPerationParse(static_cast<std::string>(nes[i]));


		OPerationAPPOLLO.OPerationSort();
		OPerationAPPOLLO.OPerationTime();

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (EXIT_FAILURE);
	}
    return (EXIT_SUCCESS);
}
