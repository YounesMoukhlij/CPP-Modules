/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:35:36 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/25 15:32:25 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{

	public:
		Fixed();
		~Fixed();
		Fixed( const int num);
		Fixed( const float num);
		Fixed( const Fixed& origine);
		Fixed& operator=( const Fixed& origine );

		int		toInt( void ) const;
		float	toFloat( void ) const;
		int		getRawBits(void) const;
		void	setRawBits(int const rawBits);

	private:
		int					_value;
		static const int	_fractionalBits = 0x8;
};

std::ostream& operator<<(std::ostream &file, const Fixed& fixed);

#endif