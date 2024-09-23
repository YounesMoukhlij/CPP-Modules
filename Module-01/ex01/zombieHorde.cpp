/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:18:40 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/23 18:30:22 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *z;

	if (N < 0x0)
	{
		std::cerr << "N is negative!" << std::endl;
		exit(0x1);
	}
	z = new Zombie[N];
	if (!z)
	{
		std::cerr << "Failed to allocate memory!" << std::endl;
		exit(0x1);
	}
	for (int i = 0x0; i < N; i++)
		z[i].Get_Name(name);
	return (z);
}
