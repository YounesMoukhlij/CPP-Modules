
#include "PmergeMe.hpp"

int main(int you, char **nes)
{
    if (you == 0x1)
	{
		std::cerr << "Error Try ./PmergeMe <arg1> <arg2> ..." << std::endl;
		return (EXIT_FAILURE);
	}

	try
	{

		PmergeMe OPerationAPPOLLO;

		for (int i = 0x1; i < you; i++)
			OPerationAPPOLLO.OPerationParse(static_cast<std::string>(nes[i]));

		OPerationAPPOLLO.OPerationSort();
		OPerationAPPOLLO.OPerationTime();

		PmergeMe A;

		A = OPerationAPPOLLO;
		A.OPerationSort();
		A.OPerationTime();

	}
	catch (std::exception &younes)
	{
		std::cerr << younes.what() << std::endl;
		return (EXIT_FAILURE);
	}
    return (EXIT_SUCCESS);
}
