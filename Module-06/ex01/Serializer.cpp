/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:14:46 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 18:16:45 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {
	
}

Serializer::Serializer(const Serializer& o) {
	if (this != &o)
		*this = o;
}

Serializer::~Serializer(void) {
	
}

Serializer& Serializer::operator=(const Serializer& origine)
{
	(void) origine;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
