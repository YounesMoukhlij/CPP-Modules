

#pragma once

#include "Animal.hpp"

class   Dog : public Animal
{
    public:
        Dog();
        Dog( const Dog& origine );
        Dog& operator=( const Dog& origine );
         ~Dog();

        void    makeSound() const;
};
