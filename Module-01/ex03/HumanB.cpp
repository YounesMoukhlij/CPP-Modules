/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:19:02 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/20 13:53:16 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &new_Name) : name(new_Name)
{
	weapon = 0x0;
	// std::cout << "Constructor Called" << std::endl;
}

HumanB::~HumanB(void)
{
	// std::cout << "Destructor Called" << std::endl;
}

void HumanB::setWeapon(Weapon &new_Weapon)
{
	weapon = &new_Weapon;
}

void HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}