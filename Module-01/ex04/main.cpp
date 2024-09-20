/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:48:28 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/19 09:35:49 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::string		new_str;

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
		if (!Source.eof())
			line += "\n";
		new_str = sed_func(line, s1, s2);
		Formedfile << new_str;
	}
	Source.close();
	Formedfile.close();
	return (EXIT_SUCCESS);
}

