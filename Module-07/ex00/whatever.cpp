/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:52:00 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 15:53:57 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


template<typename T>
T &min(T &t1, T &t2)
{
	if (t2 > t1)
		return (t1);
	return (t2);
}

template<typename T>
void swap(T &t1, T &t2)
{
	T tmp;

    tmp = t1;
	t1 = t2;
	t2 = tmp;
}


template<typename T>
T &max(T &t1, T &t2)
{
	if (t1 > t2)
		return (t1);
	return (t2);
}
