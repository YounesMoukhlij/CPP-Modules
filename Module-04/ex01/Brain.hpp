/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:02:46 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/30 18:00:41 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
    public:
        Brain();
		Brain( const Brain& origine );
		Brain& operator=( const Brain& origine );
		~Brain();
};
