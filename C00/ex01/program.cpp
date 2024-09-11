/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:43:16 by youmoukh          #+#    #+#             */
/*   Updated: 2024/07/22 19:19:28 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	bool		flag;
	std::string	cmd;

	flag = true;
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
