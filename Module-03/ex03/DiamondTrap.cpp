/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:11:02 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/26 18:19:01 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
    _name = "__Diamondtrap__";
	ClapTrap::_name = _name + "_clap_name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "Inherited class DiamondTrap " << _name <<  " default constuctor called" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string& name)
{
    std::cout << "Inherited class DiamondTrap Parameterized default constuctor called" << std::endl;
    _name = name;
	ClapTrap::_name = name + "_clap_name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap& origine ) : ClapTrap(origine), ScavTrap(origine), FragTrap(origine), _name(origine._name)
{

}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap& origine)
{
	if (this != &origine)
		ClapTrap::operator=(origine);
	return *this;
}
		
void	DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name is " << ClapTrap::_name << " DiamondTrap name is " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Inherited class DiamondTrap {" << _name << "} Destructor called" << std::endl;
}

void	DiamondTrap::attack( const std::string& target )
{
	if (!_hitPoints)
		std::cout << "DiamondTrap " << _name << " can't attack, no hitPoints left!" << std::endl;
	else if (!_energyPoints)
		std::cout << "DiamondTrap " << _name << " can't attack, no energyPoints left!" << std::endl;
	else
	{
		std::cout << "DiamondTrap " << _name << " attacks " << target
				  << " causing " << _attackDamage << " points of damage!"
				  << std::endl;
		_energyPoints--;
	}
}
