/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:52:12 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 16:10:16 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T> T &max(T &t1, T &t2);


void swap(<Template>T &t1, <Template>T &t2)
{
	T tmp;

    tmp = t1;
	t1 = t2;
	t2 = tmp;
}

template<typename T>
T &min(T &t1, T &t2);