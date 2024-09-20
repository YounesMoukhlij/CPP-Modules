/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:51:08 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/17 08:51:09 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Constructor Called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Destructor Called" << std::endl;
}


void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put; ";
	std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
	std::cout << "years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	int	i;
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*pointertofunc[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error,};
	i = -1;
    while (levels[i].compare(level) && i < 4)
        i++;
	if (i < 4)
		(this->*pointertofunc[i])();
}
