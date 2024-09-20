/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:43:32 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/17 13:26:02 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& newType)
{
	// std::cout << "Constructor Called" << std::endl;
	type = newType;
}

Weapon::~Weapon (void)
{
	// std::cout << "Destructor Called" << std::endl;
}

const std::string&	Weapon::getType(void) 
{
	return type;
}

void	Weapon::setType(const std::string& newType )
{
	type = newType;
}
