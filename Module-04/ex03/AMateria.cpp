

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "Default_type";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &obj)
{
	*this = obj;
}

AMateria::~AMateria(void)
{
}

AMateria &AMateria::operator=(const AMateria &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::setTyape(const std::string &type)
{
	this->type = type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
