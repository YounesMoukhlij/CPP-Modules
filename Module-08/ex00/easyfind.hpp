/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:14 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/13 12:54:45 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <array>
#include <deque>
#include <algorithm>

# define IGNORE(param) (void)(param)

template <typename T>
typename T::iterator easyfind(T& container, int _integer)
{
	typename T::iterator i = std::find(container.begin(), container.end(), _integer);
    if (i == container.end())
    {
        throw std::runtime_error("The Element is Missing. *_*");
    }
	return i;
}
