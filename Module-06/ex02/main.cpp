/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 18:58:38 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"
#include "Tools.hpp"

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
	try
	{
		if (deserializedData == &data)
		{
			std::cout << "Operation Done Successfully :)" << std::endl;
			std::cout << "intValue: " << deserializedData->_intValue << std::endl;
			std::cout << "charValue: " << deserializedData->_charValue << std::endl;
			std::cout << "boolValue: " << deserializedData->_boolValue << std::endl;
			std::cout << "floatValue: " << deserializedData->_floatValue << std::endl;
		}
		else
			throw Serializer::ExceptionSerializer();
	}
	catch (std::exception& younes)
	{
        std::cout << "Caught exception: " << younes.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
