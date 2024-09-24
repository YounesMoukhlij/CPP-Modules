/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:18:40 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/24 14:44:06 by youmoukh         ###   ########.fr       */
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
	for (int i = 0x0; i < N; i++)
		z[i].getName(name);
	return (z);
}
