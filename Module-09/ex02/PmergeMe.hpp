/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:37:18 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 15:37:18 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <exception>
#include <sys/time.h>
#include <iomanip>
#include <utility>
#include <sstream>

class PmergeMe
{
    private:
        int         _size;
		std::vector<int>	_vector;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& origine);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe& origine);

		class InvalidData : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class DuplicateData : public std::exception
		{
			public:
				const char* what() const throw();
		};
};


PmergeMe::PmergeMe()
{
	std::cout << "constructor by default called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& origine)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &origine)
		*this = origine;
}

PmergeMe::~PmergeMe()
{
	std::cout << "Destructor called" << std::endl;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& origine)
{
	if (this != &origine)
    {
	}
	return (*this);
}

const char* PmergeMe::InvalidData::what() const throw()
{
	return ("Invalid argument!");
}

const char* PmergeMe::DuplicateData::what() const throw()
{
	return ("Duplicate Number!");
}
