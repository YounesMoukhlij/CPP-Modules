
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void younes()
{
	system("leaks interfaces");
}
int main()
{
	atexit(younes);
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* tmp2;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	me->use(6, *bob);

	me->unequip(1);
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	me->unequip(1);
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	delete tmp;
	delete tmp2;
	return 0;

	return 0;
}
