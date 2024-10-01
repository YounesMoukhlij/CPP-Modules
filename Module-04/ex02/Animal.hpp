/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:08:48 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/30 17:50:35 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		virtual ~Animal();

		virtual void	        makeSound() const = 0;
		std::string		getType() const;

};



