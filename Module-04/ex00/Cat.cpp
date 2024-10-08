/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:08:52 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/30 17:20:51 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default Cat (Derived class) constructor called" << std::endl;
}

Cat::Cat( const Cat& origine ) : Animal(origine)
{
	std::cout << "Cat copy (Derived class) constructor called!" << std::endl;
}

Cat&	Cat::operator=( const Cat& origine )
{
	if (this != &origine)
		Animal::operator=(origine);
	std::cout << "Cat copy (Derived class) assignment operator called!" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat (Derived class) called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "MIAAAAAW MIAAAAAW" << std::endl;
}
