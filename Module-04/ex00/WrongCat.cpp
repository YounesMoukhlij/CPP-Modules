/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:00:22 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/29 17:10:57 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat (Base class) constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& origine )
{
	*this = origine;
	std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& origine )
{
	if (this != &origine)
		WrongAnimal::operator=(origine);
	std::cout << "WrongCat copy assignment operator called!" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat (Base class) called" << std::endl;
}

std::string	WrongCat::getType() const
{
	return (type);
}

void	WrongCat::makeSound() const
{
	std::cout << "M3aw m3aw, mech dyal jumia" << std::endl;
}
