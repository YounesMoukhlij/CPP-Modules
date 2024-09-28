

#pragma once

#include <iostream>

class Animal
{
    protected:
		std::string type;
    public:
        Animal();
		Animal( const Animal& origine );
		Animal& operator=( const Animal& origine );
		~Animal();

		void	        makeSound() const;
		std::string		getType() const;

};



