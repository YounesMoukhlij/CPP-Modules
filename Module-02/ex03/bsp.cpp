/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:51:37 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/25 14:36:58 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	areaCalculation( Point const a, Point const b, Point const c )
{
	float	v1 = a.xValue() * (b.yValue() - c.yValue());
	float	v2 = b.xValue() * (c.yValue() - a.yValue());
	float	v3 = c.xValue() * (a.yValue() - b.yValue());
	
	return (0.5 * abs(v1 + v2 + v3));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float a_b_c = areaCalculation(a, b, c);
	float a_b_p = areaCalculation(a, b, point);
	float a_c_p = areaCalculation(a, c, point);
	float b_c_p = areaCalculation(b, c, point);
	
	if (!a_b_c || !a_b_p || !a_c_p || !b_c_p)
		return (false);
	if ((a_b_p + a_c_p + b_c_p) != a_b_c)
		return (false);
	return (true);
}
