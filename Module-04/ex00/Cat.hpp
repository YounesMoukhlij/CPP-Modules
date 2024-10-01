/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:08:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/30 14:37:32 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
