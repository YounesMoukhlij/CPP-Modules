/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:08:44 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/30 17:23:19 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal (Base class) constructor called" << std::endl;
}

Animal::Animal( const Animal& origine )
{
	*this = origine;
	std::cout << "Animal copy (Base class) constructor called!" << std::endl;
}

Animal&	Animal::operator=( const Animal& origine )
{
	if (this != &origine)
		type = origine.type;
	std::cout << "Animal copy (Base class) assignment operator called!" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor Animal (Base class) called" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "L7iwan can't make sound" << std::endl;
}
