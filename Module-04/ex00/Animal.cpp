
#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal (Base class) constructor called" << std::endl;
}

Animal::Animal( const Animal& origine )
{
	*this = origine;
	std::cout << "Animal copy constructor called!" << std::endl;
}

Animal&	Animal::operator=( const Animal& origine )
{
	if (this != &origine)
		type = origine.type;
	std::cout << "Animal copy assignment operator called!" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor Animal (Base class) called" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "L7iwan can't make sound" << std::endl;
}
