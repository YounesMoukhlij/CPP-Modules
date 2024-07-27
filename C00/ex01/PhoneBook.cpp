/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:43:11 by youmoukh          #+#    #+#             */
/*   Updated: 2024/03/13 13:50:26 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->number = 0;
}

void	PhoneBook::add(void)
{
	if (number == 8)
		std::cout << "The PhoneBook Is Full ✅" << std::endl;
	else
	{
		if (this->contacts[this->number].fill_contacts() == 0)
			this->number++;
	}
}

void	PhoneBook::search()
{
	int	input;

	if (this->number == 0)
		std::cout << "~ 0 Contacts, add a contact before searching !\n";
	else
	{
		Contact::search_banner();
		for (int a = 0;a < this->number;a++)
			this->contacts[a].display_contacts(a);
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "~ Type Index to display Infos or 0 to Exit Search List.\n";
		while (1337)
		{
			if (!(std::cin >> input) || (input < 0) || (input > this->number))
				break ;
			std::cin.clear();
			std::cout << "Invalid Index, Try again" << std::endl;
		}
		puts("11111111111111111\n");
		if (input > 0)
		{
			puts("am here\n");
			this->contacts[input - 1].display();
		}
	}
}
