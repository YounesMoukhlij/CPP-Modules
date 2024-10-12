/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:25:23 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/12 13:56:51 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

# define IGNORE(param) (void)(param)

template<typename T>
void afficher(T const &_value)
{
	std::cout << _value << " ";
}

template<typename T>
void iter(T *array, size_t length, void (*func)(T const &_value))
{
	for (size_t i = 0x0; i < length; i++)
		(*func)(array[i]);
}
