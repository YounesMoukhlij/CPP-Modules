/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:08:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/24 16:54:24 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &newName, Weapon &new_Weapon) : weapon(new_Weapon)
{
	std::cout << "HumanA Constructor Called" << std::endl;
	_name = newName;
}
HumanA::~HumanA(void)
{
	std::cout << "HumanA Destructor Called" << std::endl;
}
