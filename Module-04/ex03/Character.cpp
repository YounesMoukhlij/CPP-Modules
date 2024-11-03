
#include "Character.hpp"

void Character::clearInventory(void)
{
    for (int i = 0; i < this->counter; ++i)
	{
        delete inventory[i];
        inventory[i] = NULL;
    }
}

void Character::copyInventory(const Character& other)
{
    for (int i = 0; i < 4; ++i)
	{
        if (other.inventory[i] != NULL)
            inventory[i] = other.inventory[i]->clone();
		else
            inventory[i] = NULL;
    }
}

Character::Character(void)
{
	this->name = "Defaul_name_character";
	this->counter = 0;
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(const std::string& name) : name(name) , counter(0)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(const Character& obj)
{
	*this = obj;
}

Character::~Character(void)
{
	clearInventory();
}

Character& Character::operator= (const Character& obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		clearInventory();
		copyInventory(obj);
		this->counter = obj.counter;
	}
	return (*this);
}

const std::string& Character::getName(void) const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	if (this->counter < 4 && m)
	{
		this->inventory[this->counter] = m;
		this->counter++;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->counter)
	{
		int i = idx;
		for (; i < this->counter - 1 ; i++)
			this->inventory[i] = this->inventory[i + 1];
		this->inventory[i] = NULL;
		--(this->counter);
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->counter)
		this->inventory[idx]->use(target);
	else
		std::cout << "materia index: " << idx << " is empty" << std::endl;
}
