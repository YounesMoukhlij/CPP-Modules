
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* materias[4];
		int counter;
		void clearMaterias(void);
		void copyMaterias(const MateriaSource& obj);
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource&);
		~MateriaSource(void);

		MateriaSource& operator= (const MateriaSource&);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};


#endif
