
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default Cat (Derived class) constructor called" << std::endl;
}

Cat::Cat( const Cat& origine ) : Animal(origine)
{
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat&	Cat::operator=( const Cat& origine )
{
	if (this != &origine)
		Animal::operator=(origine);
	std::cout << "Cat copy assignment operator called!" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat (Derived class) called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "MIAAAAAW MIAAAAAW hhhhhh bzf" << std::endl;
}
