/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:37:18 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/26 14:22:55 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <exception>
#include <sys/time.h>
#include <iomanip>
#include <sstream>
#include <utility>

# define VECTOR 0x1
# define DEQUE 0x2
# define BEFORE 0x3
# define AFTER 0x4

class PmergeMe
{
    private:
		std::vector<std::pair<int, int> >			Pairs;
		std::deque<std::pair<int, int> >			Pairs_Deque;
		std::deque<int>								_deque;
		std::vector<int>							_vector;
		int											deque_value;
		int											vector_value;
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
		void			OPerationTime(void);
		void			OPerationSort(void);
		void			FordJhonsonDequeSort(void);
		void			FordJhonsonVectorSort(void);
		void			OPerationPrint(int mode1, int mode2) const;
		void			OPerationParse(const std::string &Data_Entry);
		double			getTime(const struct timeval& start, const struct timeval& end);
		
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


