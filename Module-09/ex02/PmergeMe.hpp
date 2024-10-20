/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:37:18 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/20 12:30:24 by youmoukh         ###   ########.fr       */
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
		size_t				_size;
		std::vector<int>	_vector;
		int					poped_value;
	public:
		// Canonical Form :
		// Constructor
		PmergeMe();
		// Copy Constructor
		PmergeMe(const PmergeMe& origine);
		// Destructor
		~PmergeMe();
		// Operator Overload
		PmergeMe& operator=(const PmergeMe& origine);
	

		// Functions Member
		void			OPerationSort(void);
		void			FordJhonsonSort(void);
		void			OPerationPrint(void) const;
		void			OPerationParse(const std::string &Data_Entry);
		void 			printPairs(const std::vector<std::pair<int, int> >& Pairs);
		
		// Exceptions
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


