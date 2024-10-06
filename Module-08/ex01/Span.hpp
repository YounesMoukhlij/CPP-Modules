
#pragma once

#include <iostream>


# define IGNORE(param) (void)(param)

class Span {

	private:
		int*			_arrayElements;
		std::size_t	_size;
		std::size_t	_index;
	public:
		Span();
		Span(unsigned int _N);
		Span(const Span& _obj);
		~Span();

		Span& operator=(const Span& _obj);
		void	addNumber(int _number);
		int		shortestSpan();
		int		longestSpan();
		void	FillArray();
};
