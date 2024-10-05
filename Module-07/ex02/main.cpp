/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:42:01 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 18:48:54 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(int you, char**)
{	
	if (you != 0x1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	
	try
	{
		Array<int> arr1;
    	std::cout << "Size of arr1: " << arr1.getSize() << std::endl;
		
		Array<int> arr2(5);
    	std::cout << "Size of arr2: " << arr2.getSize() << std::endl;
		
		Array<std::string>str(3);
		for (size_t i = 0x0; i <str.getSize() ; i++)
		{
			std::cout << i << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	
	

    return 0;
}