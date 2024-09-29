/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:09:04 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/29 15:49:17 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
