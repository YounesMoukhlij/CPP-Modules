/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:11:59 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/25 19:09:48 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const ScavTrap& origine )
{
	
}
ScavTrap::ScavTrap( const std::string& name ) : ClapTrap(name)
{

}
ScavTrap& ScavTrap::operator=(const ScavTrap& origine)
{
	*this = origine;
}
		
void	ScavTrap::guardGate()
{
	std::cout << name << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
}