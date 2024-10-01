/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:56:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/26 16:49:35 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap    t1("dog");
    ScavTrap    t2("cat");
	
	t1.showInfo();
	t2.showInfo();
    for (int i = 1; i < 10 ; i++)
    {
        std::cout << i << "  ";
        t1.attack("cat");
        t2.takeDamage(t1.getDamage());
    }
    t1.guardGate();
	t1.showInfo();
	t2.showInfo();
    return (0x0);
}