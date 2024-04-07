/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:42:32 by youmoukh          #+#    #+#             */
/*   Updated: 2024/03/13 13:42:34 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::to_use[5] = {"First Name", "Last Name", "NickName", "Phone Number", "Darkest Secret"};

void	Contact::search_banner()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|   Index  |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	Contact::display_banner()
{
	std::cout << "~ Hello !" << std::endl;
	std::cout << "~ Enter your command [ADD, SEARCH, EXIT]" << std::endl;
}

int	Contact::fill_contacts()
{
	int	len;
	int	i;

	len = 0;
	for (i = 0; i < 5; i++)
	{
		std::cout << "~ " << Contact::to_use[i] << " : ";
		std::getline(std::cin, this->infos[i]);
	}
	for (i = 0; i < 5; i++)
	{
		len = this->infos[i].length();
		if (len == 0)
		{
			std::cout << "~ Empty contact cannot be added !" << std::endl;
			return (1);
		}
	}
	std::cout << "~ Contact added Successfully !" << std::endl;
	return (0);
}

void	Contact::display_contacts(int j)
{
	this->index = j + 1;
	std::cout << "|" << std::setw(10) << this->index;
	for( int i = 0 ;i < 3; i++)
	{
		std::cout << "|";
		if(Contact::infos[i].length() > 10)
			std::cout << this->infos[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->infos[i];
	}
	std::cout << "|" << std::endl;
}
        