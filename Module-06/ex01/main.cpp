/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 18:32:32 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(int you, char **nes)
{
	IGNORE(nes);
	if (you != 1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	uintptr_t	serialized;
	Data		*deserializedData;
	Data 		data;
	
	// inialisation.
	data._boolValue = false;
	data._charValue = 'h';
	data._floatValue = 199.442f;
	data._intValue = 13;
	
	serialized = Serializer::serialize(&data);
	deserializedData = Serializer::deserialize(serialized);
	if (deserializedData == &data)
	{
		std::cout << "Operation Done Successfully :)" << std::endl;
		std::cout << "intValue: " << deserializedData->_intValue << std::endl;
		std::cout << "charValue: " << deserializedData->_charValue << std::endl;
		std::cout << "boolValue: " << deserializedData->_boolValue << std::endl;
		std::cout << "floatValue: " << deserializedData->_floatValue << std::endl;
	}
	else
		std::cout << "Serialization and deserialization failed!" << std::endl;
	return (EXIT_SUCCESS);
}
