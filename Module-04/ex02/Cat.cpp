/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:08:52 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/30 17:54:22 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	_Brain = new Brain();
	std::cout << "Default Cat (Derived class) constructor called" << std::endl;
}

Cat::Cat( const Cat& origine ) : Animal(origine), _Brain(new Brain(*origine._Brain))
{
	std::cout << "Cat (Derived class) copy constructor called!" << std::endl;
}

Cat&	Cat::operator=( const Cat& origine )
{
	if (this != &origine)
	{
		Animal::operator=(origine);
		delete _Brain;
		_Brain = new Brain(*origine._Brain);
	}
	std::cout << "Cat (Derived class) copy assignment operator called!" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete _Brain;
	std::cout << "Destructor Cat (Derived class) called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "MIAAAAAW MIAAAAAW" << std::endl;
}
