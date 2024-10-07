/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:24 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 11:32:28 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


# define IGNORE(param) (void)(param)

class Span
{
    private:
        int             *array;
        unsigned int    _n;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& origine);
		~Span();

		Span&   operator=(const Span& origine);
		int		shortestSpan();
		int		longestSpan();
        int     addNumber();
};
