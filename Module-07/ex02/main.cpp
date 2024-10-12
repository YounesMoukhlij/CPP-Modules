/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:42:01 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/12 14:24:41 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(int you, char **nes)
{

	IGNORE(nes);
	if (you != 0x1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	
	
	// Simple Test
	
	Array<int> A(2);
	Array<int> B(466);
	
	B = A;
	std::cout << B.getSize() << std::endl;
	
	for (int i = 0; i < B.getSize() ; i++)
	{
		std::cout <<  Y[i] << std::endl;
	}
	
	// try
	// {
    // 	Array<int> numbers(MAX_VAL);
    // 	int* mirror = new int[MAX_VAL];
	// 	if (!mirror)
	// 		throw std::bad_alloc();
	// 	std::srand(time(NULL));

	// 	for (int i = 0x0; i < MAX_VAL; i++)
	// 	{
	// 		const int value = std::rand();
	// 		numbers[i] = value;
	// 		mirror[i] = value;
	// 	}
	// 	//SCOPE
	// 	{
	// 		Array<int> tmp = numbers;
	// 		Array<int> test(tmp);
	// 	}

	// 	for (int i = 0x0; i < MAX_VAL; i++)
	// 	{
	// 		if (mirror[i] != numbers[i])
	// 		{
	// 			std::cerr << "didn't save the same value!!" << std::endl;
	// 			return 1;
	// 		}
	// 	}
	// 	try
	// 	{
	// 		numbers[-0x2] = 0x0;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// 	try
	// 	{
	// 		numbers[MAX_VAL] = 0x0;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}

	// 	for (int i = 0x0; i < MAX_VAL; i++)
	// 	{
	// 		numbers[i] = rand();
	// 	}
	// 	delete [] mirror;
	// }
	// catch (std::exception& ii)
	// {
	// 	std::cout << ii.what() << std::endl;
	// }
	
	// std::cout << std::endl;
	// std::cout << std::endl;
	// std::cout << "2nd TEST" << std::endl;
	// std::cout << std::endl;
	// std::cout << std::endl;
	// try
	// {
	// 	Array<int> arr1;
    // 	std::cout << "Size of arr1: " << arr1.getSize() << std::endl;

	// 	Array<int> arr2(0x5);
    // 	std::cout << "Size of arr2: " << arr2.getSize() << std::endl;


	// 	Array<std::string>str(0x3);
    // 	std::cout << "Size of str : " << arr2.getSize() << std::endl;

	// 	Array<int> arr3(arr2);
    // 	std::cout << "Size of arr3: " << arr3.getSize() << std::endl;
	// 	for (std::size_t i = 0; i < arr3.getSize(); i++)
	// 		std::cout << "arr3[" << i << "] = " << arr3[i] << std::endl;

	// 	Array<float> arr4(0x6);
    // 	std::cout << "Size of arr4 of type float: " << arr4.getSize() << std::endl;
	// 	for (size_t i = 0x0; i < arr4.getSize(); i++)
	// 		arr4[i] = 42.5f;
	// 	for (size_t i = 0x0; i < arr4.getSize(); i++)
	// 		std::cout << "arr4[" << i << "] = " << arr4[i] << std::endl;
	// 	try
	// 	{
	// 		arr4[0x4] = -0x1;
	// 	}
	// 	catch(const std::exception& e)
	//     {
    // 	    std::cerr << e.what() << '\n';
    // 	}
	// 	std::cout << std::endl;
	// 	std::cout << "Check after modifing the value." << std::endl;
	// 	std::cout << std::endl;
	// 	for (size_t i = 0x0; i < arr4.getSize(); i++)
	// 		std::cout << "arr4[" << i << "] = " << arr4[i] << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
    return (EXIT_SUCCESS);
}
