/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:37:59 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/01 12:51:46 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& origine)
{
	std::cout << "Bureaucrat copy Constructor Called" << std::endl;
	*this = origine;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& origine)
{
	if (this != &origine)
		this.name = origine._name;
	std::cout << "Bureaucrat copy assignement  Called" << std::endl;
}