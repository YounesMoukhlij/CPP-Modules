
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
		struct timeval 								start, end;
		PmergeMe OPerationAPPOLLO;

		for (int i = 1; i < you; i++)
			OPerationAPPOLLO.OPerationParse(static_cast<std::string>(nes[i]));

		std::cout << "\033[42m~~~~ Welcome TO Vectors ~~~~\033[0m" << std::endl;
		std::cout << "~ Before ~" << std::endl;
		OPerationAPPOLLO.OPerationPrint();

		OPerationAPPOLLO.OPerationSort();

		std::cout << "~ After ~" << std::endl;
		OPerationAPPOLLO.OPerationPrint();

		// std::cout << "\033[43m~~~~ Welcome TO Deque ~~~~\033[0m" << std::endl;


		// OPerationAPPOLLO.OPerationTime();
		std::cout << "Time for Vector : " << getTime(start, end) << " s" << std::endl;

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (EXIT_FAILURE);
	}
    return (EXIT_SUCCESS);
}
