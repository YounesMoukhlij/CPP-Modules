
#pragma once

#include "Animal.hpp"

class   Cat : public Animal
{
    public:
        Cat();
        Cat( const Cat& origine );
        Cat& operator=( const Cat& origine );
        ~Cat();

        void    makeSound() const;
};
