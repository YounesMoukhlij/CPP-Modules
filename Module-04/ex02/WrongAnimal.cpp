/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 14:56:46 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/30 17:45:19 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal (Base class) constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& origine )
{
	*this = origine;
	std::cout << "WrongAnimal (Base class) copy constructor called!" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& origine )
{
	if (this != &origine)
		type = origine.type;
	std::cout << "WrongAnimal (Base class) copy assignment operator called!" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal (Base class) called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "KHAKAHAKAHK What sound is this 0_0" << std::endl;
}
