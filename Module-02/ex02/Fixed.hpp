/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:35:36 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/21 18:39:15 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

	public:
		Fixed();
		~Fixed();
		Fixed( const int dec);
		Fixed( const float flo);
		Fixed( const Fixed& origine);
		Fixed& operator=( const Fixed& origine );

		
		Fixed operator*( const Fixed& origine ) const; 
		Fixed operator+( const Fixed& origine ) const; 
		Fixed operator-( const Fixed& origine ) const; 
		Fixed operator/( const Fixed& origine ) const; 
		
		bool operator>( const Fixed& origine)  const;
		bool operator<( const Fixed& origine)  const;
		bool operator>=( const Fixed& origine) const;
		bool operator<=( const Fixed& origine) const;
		bool operator==( const Fixed& origine) const;
		bool operator!=( const Fixed& origine) const;

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed&	min( Fixed& f1, Fixed& f2);
		static const Fixed&	min( const Fixed& f1, const Fixed& f2);
		static Fixed&	max( Fixed& f1, Fixed& f2);
		static const Fixed&	max( const Fixed& f1, const Fixed& f2);
		
		int		toInt( void ) const;
		float	toFloat( void ) const;
		int		getRawBits(void) const;
		void	setRawBits(int const rawBits);
		

	private:
		int					_value;
		static const int	_fractionalBits = 0x8;
};

std::ostream& operator<<(std::ostream &fileOut, const Fixed& fixed);

#endif