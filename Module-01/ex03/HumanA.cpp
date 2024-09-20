/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:08:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/17 13:26:54 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &new_Name, Weapon &new_Weapon) : weapon(new_Weapon)
{
	// std::cout << "Constructor Called" << std::endl;
	name = new_Name;
}
HumanA::~HumanA(void)
{
	// std::cout << "Destructor Called" << std::endl;
}

