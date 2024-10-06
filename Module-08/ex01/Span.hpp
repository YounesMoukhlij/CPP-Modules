
#pragma once

#include <iostream>


# define IGNORE(param) (void)(param)

class Span {

	public:
		Span();
		Span(unsigned int _n);
		Span(const Span& _origine);
		~Span();

		Span& operator=(const Span& _obj);
		int		shortestSpan();
		int		longestSpan();
        int     addNumber();
};
