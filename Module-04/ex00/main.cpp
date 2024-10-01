/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:08:39 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/30 17:47:44 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"


int main(void)
{
    const Animal* meta = new Animal();
    const Animal* jhonnyDogs = new Dog();
    const Animal* pussyCat = new Cat();
    std::cout << jhonnyDogs->getType() << " " << std::endl;
    std::cout << pussyCat->getType() << " " << std::endl;
    jhonnyDogs->makeSound();
    pussyCat->makeSound();
    meta->makeSound();

	std::cout << "\n\n\n\n\nTesting WrongAnimal and WrongCat:\n\n\n\n\n\n";

    WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
	WrongCat* test = new WrongCat();

    std::cout << wrongCat->getType() << " " << std::endl;
    std::cout << test->getType() << " " << std::endl;
    wrongCat->makeSound();
    wrongMeta->makeSound();
    test->makeSound();

    delete wrongMeta;
    delete wrongCat;
    delete test;

	
    delete jhonnyDogs;
    delete pussyCat;
    delete meta;
    return (0x0);
}
