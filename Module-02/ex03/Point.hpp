/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:10:37 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/25 15:46:33 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private :
		Fixed const x;
		Fixed const y;
	public :
		~Point();
		Point();
		Point( const Point& origine );
		Point(const Fixed x, const Fixed y);
		Point&	operator=( const Point& origine );
		float yValue() const;
		float xValue() const;
		
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
