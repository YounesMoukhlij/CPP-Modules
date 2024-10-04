/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 18:15:53 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(int ac, char **av)
{
	(void)av;
	Data originalData;
	uintptr_t serialized;
	Data* deserializedData;
	if (you != 2)
	{
		std::cerr << "Try: ./convert <arg must be a number>" << std::endl;
		return (EXIT_FAILURE);
	}
	originalData.boolValue = true;
	originalData.charValue = 'c';
	originalData.floatValue = 10.56f;
	originalData.intValue = 78;
	serialized = Serializer::serialize(&originalData);
	deserializedData = Serializer::deserialize(serialized);
	if (deserializedData == &originalData)
	{
		std::cout << "Serialization and deserialization successful!" << std::endl;
		std::cout << "intValue: " << deserializedData->intValue << std::endl;
		std::cout << "floatValue: " << deserializedData->floatValue << std::endl;
		std::cout << "charValue: " << deserializedData->charValue << std::endl;
		std::cout << "boolValue: " << deserializedData->boolValue << std::endl;
	}
	else
		std::cout << "Serialization and deserialization failed!" << std::endl;
	return (0);
}
