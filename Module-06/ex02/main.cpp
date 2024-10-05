/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 15:20:43 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"
#include "Tools.hpp"

int main(int you, char **nes)
{
	IGNORE(nes);
	if (you != 1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	Base *base;

	base = generate();
	if (!base)
	{
		
	}
	return (EXIT_SUCCESS);
}
