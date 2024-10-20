/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:37:18 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/20 16:53:35 by youmoukh         ###   ########.fr       */
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
		std::vector<std::pair<int, int> >			Pairs;
		std::vector<int>							_vector;
		int											poped_value;
		struct timeval 								startDeque, endDeque;
		struct timeval 								startVector, endVector;
		
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
		void			OPerationTime();
		void			OPerationPrint() const;
		void			OPerationSort(int mode);
		void			FordJhonsonDequeSort(void);
		void			FordJhonsonVectorSort(void);
		void			OPerationParse(const std::string &Data_Entry);
		// void			OPerationPrint(std::vector<int>& Data) const;
		// void 			printPairs(const std::vector<std::pair<int, int> >& Pairs);
		
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


