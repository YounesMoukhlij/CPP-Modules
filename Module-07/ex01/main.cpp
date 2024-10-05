/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:26:32 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 18:02:29 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}


int main(int you, char **nes)
{
	IGNORE(nes);
	
	if (you != 0x1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	
	
	std::string _string[0x4] = { "Younes", "Moukhlij", "1337", "Khouribga"};
	iter(_string, 0x1, &afficher); std::cout << std::endl;
	iter(_string, 0x2, &afficher); std::cout << std::endl;
	iter(_string, 0x3, &afficher); std::cout << std::endl;
	iter(_string, 0x4, &afficher); std::cout << std::endl;
	
	float _float[0x5] = { 0.01f, 1.1f, 2.2f, 3.3f, 4.43f };
	iter(_float, 0x5, &afficher); std::cout << std::endl;

	int _int[0x8] = { 0x4, 0xA, 0x45, 0xC4, 0xB, 0x0, 0x1, 0x9};
	iter(_int, 0x5, &afficher); std::cout << std::endl;
	
	double _double[0x5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(_double, 0x5, &afficher); std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << "Another Test."<< std::endl;
	std::cout << std::endl;

	
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2;

  	iter( tab, 5, print<const int> );
	return (EXIT_SUCCESS);
}

