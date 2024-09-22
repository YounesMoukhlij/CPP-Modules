/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:56:56 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/22 17:27:34 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap i;
	ClapTrap a;


	
	i.attack("younes");
	i.takeDamage(9);
	i.beRepaired(10);
	
	a = i;
	
	return (0x0);
}