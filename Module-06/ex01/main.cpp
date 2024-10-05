/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 13:37:52 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

class younes
{
	
}


int main(int you, char **nes)
{
	IGNORE(nes);
	if (you != 1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	// uintptr_t	serialized;
	// Data		*deserializedData;
	// Data 		data;
	
	

	// // inialisation.
	// data._boolValue = false;
	// data._charValue = 'h';
	// data._floatValue = 199.442f;
	// data._intValue = 13;
	
	// printf("size of %lu\n", sizeof(uintptr_t));
	
	// serialized = Serializer::serialize(&data);
	// deserializedData = Serializer::deserialize(serialized);
	// try
	// {
	// 	if (deserializedData == &data)
	// 	{
	// 		std::cout << "Operation Done Successfully :)" << std::endl;
	// 		std::cout << "intValue: " << deserializedData->_intValue << std::endl;
	// 		std::cout << "charValue: " << deserializedData->_charValue << std::endl;
	// 		std::cout << "boolValue: " << deserializedData->_boolValue << std::endl;
	// 		std::cout << "floatValue: " << deserializedData->_floatValue << std::endl;
	// 	}
	// 	else
	// 		throw Serializer::ExceptionSerializer();
	// }
	// catch (std::exception& younes)
	// {
    //     std::cout << "Caught exception: " << younes.what() << std::endl;
	// }
	return (EXIT_SUCCESS);
}
