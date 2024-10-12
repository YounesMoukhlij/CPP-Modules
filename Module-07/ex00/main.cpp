/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:52:54 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/12 13:55:13 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome
{
  public:
    Awesome(void) : _n(0) {}
    Awesome( int n ) : _n( n ) {}
    Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
  private:
    int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a)
{
	o << a.get_n(); return o; }


int main(int you, char **nes)
{
	IGNORE(nes);
	
	if (you != 0x1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}
    int a = 0x2;
    int b = 0x3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
    std::string c = "chaine4";
    std::string d = "chaine1";
    std::cout << "Before Swap" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    swap(c, d);
    std::cout << "After Swap" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
		
	std::cout << std::endl;
	std::cout << "Another Test."<< std::endl;
	std::cout << std::endl;
		
	Awesome cc(2), dd(4);
    std::cout << "Before Swap" << std::endl;
    std::cout << cc << " " << dd << std::endl;
    swap(cc, dd);
    std::cout << "After Swap" << std::endl;
    std::cout << cc << " " << dd << std::endl;
    std::cout << "min( c, d ) = " << min(cc, dd) << std::endl;
    std::cout << "max( c, d ) = " << max(cc, dd) << std::endl;
		
    return (EXIT_SUCCESS);
}
