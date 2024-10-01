/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:02:48 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/30 17:54:15 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain (Base class) constructor called" << std::endl;
}

Brain::Brain( const Brain& origine )
{
	std::cout << "Brain (Base class) copy constructor called!" << std::endl;
	for (int i = 0x0; i < 100; i++)
	{
		ideas[i] = origine.ideas[i];
	}
}

Brain&	Brain::operator=( const Brain& origine )
{
	int i = 0;
	if (this != &origine)
	{
		while (i < 100)
		{
			this->ideas[i] = origine.ideas[i];
			i++;
		}
	}
	std::cout << "Brain (Base class) copy assignment operator called!" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor Brain (Base class) called" << std::endl;
}

