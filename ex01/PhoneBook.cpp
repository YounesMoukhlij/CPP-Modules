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
		while (!(std::cin == input))
		{
			
		}
		// std::cout << this->contacts[this->number] << std::endl;
	}
	// std::cout << std::string (this->contacts[0]) << std::endl;
}
