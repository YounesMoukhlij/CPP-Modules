/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:18:40 by youmoukh          #+#    #+#             */
/*   Updated: 2024/04/22 17:57:58 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *z;

	if (N < 0)
	{
		std::cerr << "N is negative!" << std::endl;
		exit(1);
	}
	z = new Zombie[N];
	if (!z)
	{
		std::cerr << "Failed to allocate memory!" << std::endl;
		exit(1);
	}
	for (int i = 0; i < N; i++)
		z[i].Get_Name(name);
	return (z);
}
