/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:24 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/13 16:19:46 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdexcept>
# include <exception>
# include <new>
# include <algorithm>


# define IGNORE(param) (void)(param)

class Span
{
    private:
        long	_n;
		long	_i;
        long	*_array;
	public:
		Span();
		Span(long n);
		Span(const Span& origine);
		~Span();

		Span&   	operator=(const Span& origine);
		long		shortestSpan();
		long		longestSpan();
		void		addNumber(long n);
		void		arrayFiller();
		void		displayArray();
};
