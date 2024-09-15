
#include<iostream>
#include<string>
#include<fstream>


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
	size_t				whereto;

	if (parse(ac, argv))
		return (EXIT_FAILURE);
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::fstream	Source(argv[1], std::ios::in);
	if (!Source)
	{
		std::cerr << "Could not open file: " << argv[0x1] << std::endl;
		return (EXIT_FAILURE);
	}
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
        while ((whereto = line.find(argv[2])) != std::string::npos)
		{
            line = line.substr(0, whereto) + argv[3] + line.substr(whereto + s1.length());
            whereto += s2.length();
        }
		if (!Source.eof())
			line += "\n";
		Formedfile << line;
	}
	Source.close();
	Formedfile.close();
	return (EXIT_SUCCESS);
}

