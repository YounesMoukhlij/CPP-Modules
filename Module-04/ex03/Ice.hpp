
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		/* data */
	public:
		Ice(void);
		Ice(const std::string&);
		Ice(const Ice&);
		~Ice(void);
		Ice& operator=(const Ice&);
		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif
