/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:52:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 16:17:28 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main(int you, char **nes)
{
	IGNORE(nes);
	
	if (you != 1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "Before Swap" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    swap(c, d);
    std::cout << "After Swap" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
    return (EXIT_SUCCESS);
}
