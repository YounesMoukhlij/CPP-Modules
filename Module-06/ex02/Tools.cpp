/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:56:44 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 15:11:51 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include "Tools.hpp"

Base*	generate(void)
{
	int _random = std::srand();
	
	switch(_random)
	{
		case 0;
			return (new A());
		case 1;
			return (new B());
		case 2;
			return (new B());
		default:
			return ()
	}
}




void	identify(Base* p)
{

}





void	identify(Base& p)
{

}



