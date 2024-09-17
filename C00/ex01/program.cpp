/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:43:16 by youmoukh          #+#    #+#             */
/*   Updated: 2024/08/11 11:14:39 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int ac, char **av)
{
	PhoneBook	phonebook;
	bool		flag;
	std::string	cmd;
	(void) av;

	flag = true;
	if (ac != 1)
	{
		std::cerr << "the program does not take any args!" << std::endl;
		return (1);
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
			std::cout << "Thanks." << std::endl;
			flag = false;
		}
		if(std::cin.eof())
			break;
	}
	return (0);
}
