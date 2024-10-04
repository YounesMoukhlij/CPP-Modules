/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 18:26:28 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(int you, char **nes)
{
	if (you != 1)
	{
		std::cerr << "The Program Does not " << std::endl;
		return (EXIT_FAILURE);
	}
	uintptr_t	serialized;
	Data		*deserializedData;
	Data 		data;
	
	// inialisation.
	data.boolValue = true;
	data.charValue = 'c';
	data.floatValue = 10.56f;
	data.intValue = 78;
	
	serialized = Serializer::serialize(&data);
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
