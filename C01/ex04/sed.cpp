#include "sed.hpp"

std::string ft_sed(std::string n_line, const std::string src, const std::string dst)
{
	int position = n_line.find(src);

	printf("postion === %d\n\n", position);
	std::cout << n_line << std::endl;
	std::cout << src << std::endl;
	std::string replacedLine;

	replacedLine += src;


	return replacedLine;
}
