/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:14:46 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/11 14:35:31 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	
}

Serializer::Serializer(const Serializer& origine)
{
	if (this != &origine)
		*this = origine;
}

Serializer::~Serializer(void)
{
	
}

Serializer& Serializer::operator=(const Serializer& origine)
{
	(void) origine;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

const char* Serializer::ExceptionSerializer::what() const throw()
{
	return ("Serialization and deserialization failed!");
}