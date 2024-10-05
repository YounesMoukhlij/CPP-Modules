/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:52:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 16:04:14 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


<Template> T &min(T &t1, T &t2)
{
	if (t2 > t1)
		return (t1);
	return (t2);
}

void swap(<Template>T &t1, <Template>T &t2)
{
	T tmp;

    tmp = t1;
	t1 = t2;
	t2 = tmp;
}


<Template>T &max(<Template>T &t1, T &t2)
{
	if (t1 > t2)
		return (t1);
	return (t2);
}

int main( void )
{
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
    return 0;
}
