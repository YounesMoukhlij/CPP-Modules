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

PhoneBook::PhoneBook(void)
{
	this->number = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add(void)
{
	static int get_last;

	if (number == 3)
	{
		if (this->contacts[get_last].fill_contacts() == 0)
			get_last++;
	}
	else
	{
		if (this->contacts[this->number].fill_contacts() == 0)
			this->number++;
	}
}

void	PhoneBook::search()
{
	int	input;
	std::string str;

	if (this->number == 0)
		std::cout << "~ 0 Contacts, add a contact before searching !\n";
	else
	{
		Contact::search_banner();
		for (int a = 0 ;a < this->number;a++)
			this->contacts[a].display_contacts(a);
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "~ Type Index to display Infos or 0 to Exit Search List.\n";
		while (1999)
		{
			std::getline(std::cin, str);
			input = std::atoi(str.c_str());
			if ((input < 0) || (input > this->number) || input == 0)
			{
				std::cout << "Invalid Index, Try from 1 to 7" << std::endl;
				std::cin.clear();
				return ;
			}
			break ;
		}
		this->contacts[input - 1].display();
	}
}
