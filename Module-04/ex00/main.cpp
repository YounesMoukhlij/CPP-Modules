/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:08:39 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/29 17:07:30 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* jhonnyDogs = new Dog();
    const Animal* pussyCat = new Cat();
    std::cout << jhonnyDogs->getType() << " " << std::endl;
    std::cout << pussyCat->getType() << " " << std::endl;
    jhonnyDogs->makeSound(); //will output the dog sound!
    pussyCat->makeSound();
    meta->makeSound();

	std::cout << "\n\n\n\n\nTesting WrongAnimal and WrongCat:\n\n\n\n\n\n";

    WrongAnimal* wrongMeta = new WrongAnimal();
    WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound(); // Output: WrongAnimal makes a weird sound
    wrongMeta->makeSound(); // Output: WrongAnimal makes a weird sound

    delete wrongMeta;
    delete wrongCat;

	
    delete jhonnyDogs;
    delete pussyCat;
    delete meta;
    return (0x0);

}
