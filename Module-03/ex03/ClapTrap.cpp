/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:56:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/26 17:21:14 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "__ClapTrap__";
	_hitPoints = 0x10;
	_energyPoints = 0x10;
	_attackDamage = 0x0;
	std::cout << "ClapTrap Default constuctor called" << std::endl;
}

ClapTrap::ClapTrap( const std::string& name )
{
	_name = name;
	_hitPoints = 0x10;
	_energyPoints = 0x10;
	_attackDamage = 0x0;
	std::cout << "Parameterized constuctor called" << std::endl;
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
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack( const std::string& target )
{
	if (!_hitPoints)
		std::cout << _name << " can't attack, no hitPoints left!" << std::endl;
	else if (!_energyPoints)
		std::cout << _name << " can't attack, no energyPoints left!" << std::endl;
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
		_hitPoints = 0x0;
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


unsigned int	ClapTrap::getDamage() const
{
	return (_attackDamage);
}

void	ClapTrap::showInfo() const
{
	std::cout << "\033[32m!!!!!!!!!! Monster's Infos !!!!!!!!!!\033[0m" << std::endl;
	std::cout << "name " <<_name << std::endl;
	std::cout << "attackdamage " <<_attackDamage << std::endl;
	std::cout << "hitpoints " <<_hitPoints << std::endl;
	std::cout << "energypoints " <<_energyPoints << std::endl;
	std::cout << "\033[32m!!!!!!!!!!!!!!!!! END !!!!!!!!!!!!!!!\033[0m" << std::endl;
	std::cout << std::endl;
}