/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:51:08 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/24 19:08:00 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    // std::cout << "Constructor Called" << std::endl;
}

Harl::~Harl()
{
    // std::cout << "Destructor Called" << std::endl;
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
	std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	int	i = -0x1;
	int	j = 0x0;
	int pos = 0x0;
	std::string	temp[0x4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*pointerToFunction[0x4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
    while (j < 0x4)
	{
		if (temp[j] == level)
		{
			i = j;
			break ;
		}
		j++;
	}
	switch (i)
	{
		case 0x0:
		{
			pos = 0x0;
			break ;
		}
		case 0x1:
		{
			pos = 0x1;
			break ;
		}
		case 0x2:
		{
			pos = 0x2;
			break ;
		}
		case 0x3:
		{
			pos = 0x3;
			break ;
		}
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	if (i == -0x1)
		return ;
	for (int index = pos; index < 0x4; index++)
	{
		std::cout << "[ " << temp[index] << " ]" << std::endl;
		(this->*pointerToFunction[index])();
		std::cout << std::endl;
	}
}
