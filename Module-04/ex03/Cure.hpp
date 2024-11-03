
#ifndef CURE_HPP
#define	CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		/* data */
	public:
		Cure(void);
		Cure(const std::string&);
		Cure(const Cure&);
		~Cure(void);
		Cure& operator=(const Cure&);
		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif
