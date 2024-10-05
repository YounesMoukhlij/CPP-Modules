/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:56:44 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 15:21:47 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include "Tools.hpp"

Base*	generate(void)
{
	int _random;
	
	_random = std::rand() % 0x3;
	printf("rando %d\n", _random);
	printf("3a %d\n",  std::rand());
	switch(_random)
	{
		case 0x0:
			return (new A());
		case 0x2:
			return (new B());
		case 0x3:
			return (new C());
		default:
			return (0x0);
	}
}


void	identify(Base* p)
{
	(void) p;

}





void	identify(Base& p)
{
	(void) p;

}



