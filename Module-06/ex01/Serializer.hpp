/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:14:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 18:33:50 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Data.hpp"
#include <iostream>
#include <exception>

#define IGNORE(param) (void)(param)


class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer& );
		Serializer& operator= (const Serializer& );
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};