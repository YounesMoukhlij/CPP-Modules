/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:08:39 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/30 17:49:49 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"

int main()
{
	int 	size = 0x6;
    Animal* Ann[size];

    for (int i = 0x0; i < size; i++)
    {
        std::cout << "---" << i << "---" << std::endl;
        if (i < size / 0x2)
			Ann[i] = new Cat();
        else
            Ann[i] = new Dog();
        std::cout << " --- " << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    
    for (int i = 0x0; i < size; i++)
    {
        std::cout << "-" << i << " ~~> " << "type: " << Ann[i]->getType(); 
		std::cout << " [sound]  : ";
        Ann[i]->makeSound();
    }

    std::cout << std::endl;
    std::cout << std::endl;
	
    for (int i = 0x0; i < size; i++)
    {
        std::cout << i  << " Deleting " << Ann[i]->getType() << std::endl;
        delete Ann[i];
    }
	return (EXIT_SUCCESS);
}
