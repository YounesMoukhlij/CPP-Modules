/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:14:46 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 18:14:47 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Serializer::Serializer(void) {
	
}

Serializer::Serializer(const Serializer& _serializer) {
	if (this != &_serializer)
		*this = _serializer;
}

Serializer::~Serializer(void) {
	
}

Serializer& Serializer::operator=(const Serializer& _serializer) {
	if (this != &_serializer)
	{}
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
