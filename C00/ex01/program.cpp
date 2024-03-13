/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:43:16 by youmoukh          #+#    #+#             */
/*   Updated: 2024/03/13 13:43:18 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	int			flag;
	std::string	cmd;

	flag = 1;
	Contact::display_banner();
	while (flag)
	{
		std::cout << "📞 ~ ";
		std::getline(std::cin, cmd);
		if (cmd == "A")
			phonebook.add();
		else if (cmd == "S")
			phonebook.search();
		else if (cmd == "EXIT")
		{
			std::cout << "Thanks." << std::endl;
			flag = 0;
		}
	}
	return (0);
}
