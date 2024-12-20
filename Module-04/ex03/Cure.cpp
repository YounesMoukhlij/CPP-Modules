
#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
	this->type = "cure";
}

Cure::Cure(const std::string& type) : AMateria(type)
{

}

Cure::Cure(const Cure& obj)
{
	*this = obj;
}

Cure::~Cure(void)
{

}

Cure& Cure::operator= (const Cure& obj)
{
	if (this != &obj)
		AMateria::operator= (obj);
	return (*this);
}

AMateria* Cure::clone(void) const
{
	AMateria* cloneIce = new(std::nothrow) Cure(*this);
	if (!cloneIce)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		return (0x0);
	}
	return (cloneIce);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
