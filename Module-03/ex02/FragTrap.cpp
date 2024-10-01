/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:41:07 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/26 17:07:38 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    _name = "__Fragtrap__";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Inherited class FragTrap " << _name <<  " default constuctor called" << std::endl;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap(name)
{
	_hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& origine ) : ClapTrap(origine)
{

}

FragTrap& FragTrap::operator=(const FragTrap& origine)
{
	if (this != &origine)
		ClapTrap::operator=(origine);
	return *this;
}
		
void	FragTrap::highFivesGuys()
{
	std::cout << _name << " FragTrap positive high fives request." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Inherited class FragTrap {" << _name << "} destructor called" << std::endl;
}

void	FragTrap::attack( const std::string& target )
{
	if (!_hitPoints) {
		std::cout << "FragTrap " << _name << " can't attack, no hitPoints left!" << std::endl;
	} else if (!_energyPoints) {
		std::cout << "FragTrap " << _name << " can't attack, no energyPoints left!" << std::endl;
	} else {
		std::cout << "FragTrap " << _name << " attacks " << target
				  << " causing " << _attackDamage << " points of damage!"
				  << std::endl;
		_energyPoints--;
	}
}