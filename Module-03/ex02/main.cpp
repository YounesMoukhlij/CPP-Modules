/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:56:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/26 17:11:51 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap at1("DRaxLer");
	FragTrap at2("asd");
	
	at1.showInfo();
	at2.showInfo();
	for (int u = 0; u < 100; u++)
	{
		at1.attack("younes");
		at1.takeDamage(at2.getDamage());
	}
	at1.highFivesGuys();
	at1.showInfo();
	at2.showInfo();
	
	return (0x0);
}