/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:19:02 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/24 16:54:28 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &new_Name) : _name(new_Name)
{
	_weapon = 0x0;
	std::cout << "HumanB Constructor Called" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB Destructor Called" << std::endl;
}

void HumanB::setWeapon(Weapon &new_Weapon)
{
	_weapon = &new_Weapon;
}

void HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
