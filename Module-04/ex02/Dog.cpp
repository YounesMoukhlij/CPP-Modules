/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:09:00 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/30 17:30:10 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	_Brain = new Brain();
	std::cout << "Default Dog (Derived class) constructor called" << std::endl;
}

Dog::Dog( const Dog& origine ) : Animal(origine), _Brain(new Brain(*origine._Brain))
{
	std::cout << "Dog (Derived class) copy constructor called!" << std::endl;
}

Dog&	Dog::operator=( const Dog& origine )
{
	if (this != &origine)
	{
		Animal::operator=(origine);
		delete _Brain;
		_Brain = new Brain(*origine._Brain);
	}
	std::cout << "Dog (Derived class) copy assignment operator called!" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete _Brain;
	std::cout << "Destructor Dog (Derived class) called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "HOAAAW HOAAAW" << std::endl;
}
