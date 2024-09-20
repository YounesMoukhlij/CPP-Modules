/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:35:36 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/19 11:49:36 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma

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
