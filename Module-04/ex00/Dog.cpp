


#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Default Dog (Derived class) constructor called" << std::endl;
}

Dog::Dog( const Dog& origine ) : Animal(origine)
{
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog&	Dog::operator=( const Dog& origine )
{
	if (this != &origine)
		Animal::operator=(origine);
	std::cout << "Dog copy assignment operator called!" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor Dog (Derived class) called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Haw hAWa nod tga3ed eela slamtk" << std::endl;
}
