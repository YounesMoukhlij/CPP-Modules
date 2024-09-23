/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:43:32 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/23 18:56:31 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& newType)
{
	std::cout << "Weapon Constructor Called" << std::endl;
	type = newType;
}

Weapon::~Weapon (void)
{
	std::cout << "Weapon Destructor Called" << std::endl;
}

const std::string&	Weapon::getType(void) 
{
	return type;
}

void	Weapon::setType(const std::string& newType )
{
	type = newType;
}
