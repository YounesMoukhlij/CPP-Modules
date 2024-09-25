/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:11:59 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/25 19:00:27 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const ScavTrap& origine )
{
	
}
ScavTrap::ScavTrap( const std::string& name )
{

}
ScavTrap& ScavTrap::operator=(const ScavTrap& orgine)
{

}
		
void	ScavTrap::guardGate()
{
	
}

void	ScavTrap::attack( const std::string& target )
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}