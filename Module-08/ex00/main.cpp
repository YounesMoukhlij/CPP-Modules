/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:18 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/13 12:54:20 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int you, char **nes)
{
	IGNORE(nes);
	if (you != 0x1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}

    try
    {
		std::cout << std::endl; std::cout << "\033[42m  ----- 1st Test ----- Using std::vector now.\033[0m" << std::endl; std::cout << std::endl;
    	std::vector<int> vect;
	
    	vect.push_back(0x0);
    	vect.push_back(0xA);
    	vect.push_back(0xB);
    	vect.push_back(0xC);
    	vect.push_back(0xE);
    	vect.push_back(0xF);
    	vect.push_back(100);
    	vect.push_back(9);
    	vect.push_back(0x5 << 0x2);
	
    	for (std::vector<int>::iterator i = vect.begin(); i < vect.end(); i++)
    	    std::cout << "Element of vector<int> = " << *i << std::endl;
		vect.pop_back();
		std::cout << std::endl;
		std::cout << " ----- Just a Test -----" << std::endl << std::endl;
    	for (std::vector<int>::iterator i = vect.begin(); i < vect.end(); i++)
    	    std::cout << "Element of vector<int> = " << *i << std::endl;
	
    	std::cout << std::endl << std::endl << " ----- Main Test ----- " << std::endl; std::cout << std::endl;
		int	number = 91;
		std::cout << "The number we looking for : " << number << std::endl  << std::endl;
        std::vector<int>::iterator  isthere = easyfind(vect, number);
        std::cout << " ~~ Result :: Element has been found = [" << *isthere << "]" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	
	try
	{
		std::cout << std::endl; std::cout << "\033[42m  ----- 2nd Test ----- Using std::array now.\033[0m" << std::endl; std::cout << std::endl;
		
		const size_t	sized = 0x7;

		std::array<int, sized> arr = {0x0, 0xA, 0xB, 0xC, 0xE, 0xF, 100};
		for (size_t i = 0; i < arr.size(); i++)
			std::cout << "Element of array<int> = " << arr[i] << std::endl;
		
		// Test de la fonction easyfind
	  	std::array<int, sized>::const_iterator i  = easyfind(arr, 100);
	    std::cout << " ~~ Result :: Element has been found = [" << *i << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
	    std::cerr << e.what() << std::endl;
	}
	
    try
    {
		std::cout << std::endl; std::cout << "\033[42m  ----- 3rd Test ----- Using std::list now.\033[0m" << std::endl; std::cout << std::endl;
		
		std::list<int> llist; // Using std::list now
		llist.push_back(0x0);
		llist.push_back(0xA);
		llist.push_back(0xB);
		llist.push_back(0xC);
		llist.push_back(0xE);
		llist.push_back(0xF);
		llist.push_back(100);
		llist.push_back(8);
		
		for (std::list<int>::iterator i = llist.begin(); i != llist.end(); i++)
			std::cout << "Element of list<int> = " << *i << std::endl;
		std::cout << std::endl;
		std::cout << " ----- Just a Test -----" << std::endl << std::endl;
		for (std::list<int>::iterator i = llist.begin(); i != llist.end(); i++)
			std::cout << "Element of list<int> = " << *i << std::endl;
		std::cout << std::endl << std::endl << " ----- Main Test ----- " << std::endl; 
		std::cout << std::endl;
		int number = 8;
		std::cout << "The number we are looking for: " << number << std::endl  << std::endl;
        std::list<int>::iterator isthere = easyfind(llist, number);
        std::cout << " ~~ Result :: Element has been found = [" << *isthere << "]" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	
	
		return (EXIT_SUCCESS);
}
