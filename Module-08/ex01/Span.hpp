/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:24 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 12:48:02 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


# define IGNORE(param) (void)(param)
# define unsigned int usd;

class Span
{
    private:
        usd    _n;
		usd	_i;
        int             *_array;
	public:
		Span();
		Span(usd n);
		Span(const Span& origine);
		~Span();

		Span&   operator=(const Span& origine);
		int		shortestSpan();
		int		longestSpan();
		void	addNumber(usd n);
		void	arrayFiller();
		void	diplayArray();
};
