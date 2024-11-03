

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class ICharacter;


class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria &);
		virtual ~AMateria(void);
		AMateria &operator=(const AMateria &);
		std::string const &getType() const; // Returns the materia type
		void setTyape(const std::string &);
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
