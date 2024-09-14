#include "sed.hpp"

int    parse(int ac, char **argv)
{
	if (ac != 4 || std::string(argv[2]).length() == 0)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 0x1;
    }
	return 0x0;
}

int	main(int ac, char **argv)
{
	std::string		file;
	std::string		line;
	std::string		newfile;

	if (parse(ac, argv))
		return (EXIT_FAILURE);
	// open the file.
	std::fstream	Source(argv[1], std::ios::in);
	if (!Source)
	{
		std::cerr << "Could not open file: " << argv[0x1] << std::endl;
		return (EXIT_FAILURE);
	}
	// equivalent to strjoin
	file = std::string(argv[0x1]) + ".replace";
	std::fstream	Formedfile(file, std::ios::out | std::ios::trunc);
	if (!Formedfile)
	{
		std::cerr << "Could not open file: " << std::endl;
		Source.close();
		return (EXIT_FAILURE);
	}
	while (std::getline(Source, line))
	{
		if (!Source.eof())
			line += "\n";
		std::cout << "here  " << line << std::endl;

		int pos = line.find(argv[2]);
		std::cout << pos << std::endl;
		newfile = ft_sed(line, argv[0x2], argv[0x3]);
		Formedfile << newfile;
	}
	Source.close();
	Formedfile.close();
	return (EXIT_SUCCESS);
}

