/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:56:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/25 18:51:04 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


/*
	Hit Points and Energy Check: The ClapTrap should not be able to attack or repair itself,
	if it has no hit points or energy points left.
	This means you need to implement checks within the attack and repair functions to ensure
	 they aren't called when the ClapTrap is "dead" (hit points = 0) or "exhausted" (energy points = 0).
*/

ClapTrap::ClapTrap()
{
	std::cout << "Default constuctor called" << std::endl;
	_name = "__ClapTrap__";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap( const std::string& name )
{
	std::cout << "Parameterized constuctor called" << std::endl;
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& origine )
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = origine;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& origine )
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &origine)
	{
		_name = origine._name;
		_hitPoints = origine._hitPoints;
		_energyPoints = origine._energyPoints;
		_attackDamage = origine._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack( const std::string& target )
{
	if (!_hitPoints)
		std::cout << _name << " Cannot attack, no hitPoints left!" << std::endl;
	else if (!_energyPoints)
		std::cout << _name << " Cannot attack, no energyPoints left!" << std::endl;
	else 
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
				  << " causing " << _attackDamage << " points of damage!"
				  << std::endl;
		_energyPoints--;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (!_hitPoints)
		std::cout << _name << " Unable to repair, no hitPoints left!" << std::endl;
	else if (!_energyPoints)
		std::cout << _name << " Unable to repair, no energyPoints left!" << std::endl;
	else
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << _name << " repaired!" << std::endl;
	}
}
