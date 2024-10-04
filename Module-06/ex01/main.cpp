/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 18:24:46 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(int you, char **nes)
{
	(void)nes;
	if (you != 2)
	{
		std::cerr << "Try: ./convert <arg must be a number>" << std::endl;
		return (EXIT_FAILURE);
	}
	Data data;
	uintptr_t serialized;
	Data* deserializedData;
	
	// inialisation.
	data.boolValue = true;
	data.charValue = 'c';
	data.floatValue = 10.56f;
	data.intValue = 78;
	
	serialized = Serializer::serialize(&data);
	// if (deserializedData == &data)
	// {
		std::cout << "intValue: " << deserializedData->intValue << std::endl;
		std::cout << "floatValue: " << deserializedData->floatValue << std::endl;
		std::cout << "charValue: " << deserializedData->charValue << std::endl;
		std::cout << "boolValue: " << deserializedData->boolValue << std::endl;
	// }
	deserializedData = Serializer::deserialize(serialized);
	if (deserializedData == &data)
	{
		std::cout << "intValue: " << deserializedData->intValue << std::endl;
		std::cout << "floatValue: " << deserializedData->floatValue << std::endl;
		std::cout << "charValue: " << deserializedData->charValue << std::endl;
		std::cout << "boolValue: " << deserializedData->boolValue << std::endl;
	}
	else
		std::cout << "Serialization and deserialization failed!" << std::endl;
	return (EXIT_SUCCESS);
}
