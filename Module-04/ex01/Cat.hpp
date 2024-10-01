/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:08:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/29 19:05:41 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : public Animal
{
	private:
		Brain* _Brain;
    public:
        Cat();
        Cat( const Cat& origine );
        Cat& operator=( const Cat& origine );
        ~Cat();

        void    makeSound() const;
};
