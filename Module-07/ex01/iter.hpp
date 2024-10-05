/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:25:23 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 16:29:49 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>


template<typename T> void afficher(T const &_value)
{
	std::cout << v << " ";
}

template<typename T> void iter(T *arr, size_t length, void (*f)(T const &_value))
{
	for (size_t i = 0; i < length; i++)
		(*f)(arr[i]);
}