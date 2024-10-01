/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:56:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/26 16:12:53 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap t1("TOm");
	ClapTrap t2("JOe");

	for (int index = 0x1; index <= 0x10; index++)
    {
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << index << std::endl;
        t1.attack("JOe");
		t2.beRepaired(5);
        t2.takeDamage(t1.getDamage());
    }
	return (0x0);
}