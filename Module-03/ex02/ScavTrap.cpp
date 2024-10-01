/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:11:59 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/26 17:17:33 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "__scavtrap__";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Inherited class ScavTrap " << _name <<  " default constuctor called" << std::endl;
}

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap(name)
{
	_hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& origine ) : ClapTrap(origine)
{

}




ScavTrap& ScavTrap::operator=(const ScavTrap& origine)
{
	if (this != &origine)
		ClapTrap::operator=(origine);
	return *this;
}
		
void	ScavTrap::guardGate()
{
	std::cout << _name << " ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Inherited class ScavTrap {" << _name << "} destructor called" << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
	if (!_hitPoints) {
		std::cout << "ScavTrap " << _name << " can't attack, no hitPoints left!" << std::endl;
	} else if (!_energyPoints) {
		std::cout << "ScavTrap " << _name << " can't attack, no energyPoints left!" << std::endl;
	} else {
		std::cout << "ScavTrap " << _name << " attacks " << target
				  << " causing " << _attackDamage << " points of damage!"
				  << std::endl;
		_energyPoints--;
	}
}