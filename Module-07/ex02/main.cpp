/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:42:01 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 18:59:22 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	younes()
{
	system("leaks iter");
}

int main(int you, char **nes)
{
	atexit(younes);
	IGNORE(nes);
	if (you != 0x1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

    for (int i = 0x0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0x0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-0x2] = 0x0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0x0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0x0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "2nd TEST" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		Array<int> arr1;
    	std::cout << "Size of arr1: " << arr1.getSize() << std::endl;

		Array<int> arr2(0x5);
    	std::cout << "Size of arr2: " << arr2.getSize() << std::endl;


		Array<std::string>str(0x3);
    	std::cout << "Size of str: " << arr2.getSize() << std::endl;
		for (size_t i = 0x0; i < str.getSize() ; i++)
			std::cout << i << " str " << str[i] << std::endl;

		Array<int> arr3(arr2);
    	std::cout << "Size of arr3: " << arr3.getSize() << std::endl;
		for (std::size_t i = 0; i < arr3.getSize(); i++)
			std::cout << "c[" << i << "] = " << arr3[i] << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return 0;
}
