/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:56:44 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 15:28:31 by youmoukh         ###   ########.fr       */
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
	switch(_random)
	{
		case 0x0:
			return (new A());
		case 0x1:
			return (new B());
		case 0x2:
			return (new C());
		default:
			return (0x0);
	}
}


void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The Type is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The Type is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The Type is C" << std::endl;
	else
		std::cout << "Unknow type" << std::endl;
}





void	identify(Base& p)
{
	try

}



