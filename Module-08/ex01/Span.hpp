
#pragma once

#include <iostream>


# define IGNORE(param) (void)(param)

class Span
{
    private:
        unsigned int _n;
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
