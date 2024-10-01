/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:56:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/26 17:54:02 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap player1("Player1");
    DiamondTrap player2("Player2");

	player1.showInfo();
    player2.showInfo();
	
	

    for (int index = 1; index <= 10; index++)
    {
        std::cout << index << "   ";
        player1.attack("Player2");
        player2.beRepaired(10);
    }
    player1.showInfo();
    player2.showInfo();


    player1.guardGate();
    player1.highFivesGuys();
	player1.whoAmI();

	return (0x0);
}