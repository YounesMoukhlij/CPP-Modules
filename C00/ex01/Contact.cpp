/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:27:53 by youmoukh          #+#    #+#             */
/*   Updated: 2024/03/11 14:27:55 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::to_use[5] = {"First Name", "Last Name", "NickName", "Phone Number", "Darkest Secret"};

void	Contact::full_fill_contact(int number)
{
	int	i;

	i = 0;
	(void) number;
	while (i++ < 5)
	{
		std::cout << Contact::to_use[i] << " :\n";
		std::getline(std::cin, );
	}

}
