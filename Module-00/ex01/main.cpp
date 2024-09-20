/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:43:16 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/20 11:24:50 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	(void) av;
	std::string	cmd;
	bool		flag;
	PhoneBook	phonebook;

	flag = true;
	if (ac != 0x1)
	{
		std::cerr << "the program does not take any args!" << std::endl;
		return (EXIT_FAILURE);
	}
	Contact::display_banner();
	while (flag)
	{
		std::cout << "📞 ~ ";
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD"))
			phonebook.add();
		else if (!cmd.compare("SEARCH"))
			phonebook.search();
		else if (!cmd.compare("EXIT"))
		{
			std::cout << "\033[32mThanks.\033[0m" << std::endl;
			flag = false;
		}
		if(std::cin.eof())
			break;
	}
	return (EXIT_SUCCESS);
}
