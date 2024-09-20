/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:42:32 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/20 10:52:33 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	
}
Contact::~Contact(void)
{
	
}

std::string Contact::to_use[0x5] = {"First Name", "Last Name", "NickName", "Phone Number", "Darkest Secret"};

void	Contact::search_banner()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|   Index  |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	Contact::display_banner()
{
	std::cout << "~ \033[30mHello There !\033[0m" << std::endl;
	std::cout << "~ \033[32mThis is Your Ultimate PhoneBook.\033[0m" << std::endl;
	std::cout << "~ \033[34mEnter your command [ADD, SEARCH, EXIT]\033[0m" << std::endl;
}

int	Contact::fill_contacts()
{
	int	i, j;

	j = 0x0;
	for (i = 0x0; i < 0x5 ; i++)
	{
		std::cout << "~ " << Contact::to_use[i] << " : ";
		std::getline(std::cin, this->infos[i]);
		if (Contact::to_use[i].compare("Phone Number") == 0x0)
		{
			while (this->infos[i][j])
			{
				if (!std::isdigit(this->infos[i][j]))
				{
					std::cout << "~ Phone Number couldn't have characters !" << std::endl;
					return (0x1);
				}
				j++;
			}
		}
		if (!this->infos[i].length())
		{
			std::cout << "~ Empty contact cannot be added !" << std::endl;
			return (0x1);
		}
	}
	std::cout << "~ Contact added Successfully !" << std::endl;
	return (0x0);
}

void	Contact::display_contacts(int j)
{
	this->index = j + 0x1;
	std::cout << "|" << std::setw(10) << this->index;
	for( int i = 0 ;i < 3; i++)
	{
		std::cout << "|";
		if(Contact::infos[i].length() > 10)
			std::cout << this->infos[i].substr(0x0, 0x9) << ".";
		else
			std::cout << std::setw(10) << this->infos[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::display(void)
{
	std::cout << "# Contact [" << this->index << "]" << std::endl;
	for (int i = 0x0; i <= 0x4; i++)
	{
		std::cout << Contact::to_use[i] << ": ";
		std::cout << this->infos[i] << std::endl;
	}
}
