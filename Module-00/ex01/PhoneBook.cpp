/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:43:11 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/23 14:31:07 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "Constructor Called" << std::endl;
	this->number = 0x0;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Destructor Called" << std::endl;
}

void	PhoneBook::add(void)
{
	static int get_last;

	get_last %= 0x8;
	if (number == 0x8)
	{
		if (this->contacts[get_last].fill_contacts() == 0x0)
			get_last++;
	}
	else
	{
		if (this->contacts[this->number].fill_contacts() == 0x0)
			this->number++;
	}
}

void	PhoneBook::search()
{
	int 		k = 0x0;
	int			input;
	std::string str;

	if (this->number == 0x0)
		std::cout << "~ 0 Contacts, add a contact before searching !\n";
	else
	{
		Contact::search_banner();
		for (int a = 0x0 ; a < this->number ;a++)
			this->contacts[a].display_contacts(a);
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "~ Type Index to display Infos or 0 to Exit Search List.\n";
		while (0x1)
		{
			std::getline(std::cin, str);
			while (str[k])
			{
				if (std::isalpha(str[k]) || !std::isalnum(str[k]))
				{
					std::cout << "Invalid Index, Try from 1 to 8" << std::endl;
					return ;
				}
				k++;
			}
			input = std::atoi(str.c_str());
			if ((input < 0x0) || (input > this->number) || input == 0x0)
			{
				if (!input)
					std::cout << "SEARCH List Exited Successfully." << std::endl;
				else
					std::cout << "Invalid Index, Try from 1 to 8" << std::endl;
				return ;
			}	
			break ;
		}
		this->contacts[input - 0x1].display();
	}
}
