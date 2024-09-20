/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:35:36 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/20 16:23:41 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

	public:
		Fixed();
		Fixed( const Fixed& origine);
		Fixed& operator=( const Fixed& origine );
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const rawBits);

	private:
		int					_value;
		static const int	_fractionalBits = 0x8;
};

#endif