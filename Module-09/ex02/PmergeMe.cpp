/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:56:14 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 16:11:43 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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

void PmergeMe::OPerationParse(const std::string& Data_Entry)
{
	int	countDigit;

	countDigit = 0;
	for (size_t i = 0x0; i < Data_Entry.size(); i++)
	{
		int j = 0x0;
		while (j < Data_Entry.size())
		{
			if (isspace(Data_Entry[j]))
				j++;
			else
				break;
		}
		i = j;
		if (!isdigit(Data_Entry[i]) && Data_Entry[i] != '+')
			throw InvalidData();
		if (!Data_Entry[i])
			throw InvalidData();
		
	}

	while (i < Data_Entry.size())
	{
		if (!isdigit(Data_Entry[i]) && Data_Entry[i] != '+')
		if (isdigit(Data_Entry[i]))
			countDigit++;
		i++;
	}
	
	
	std::stringstream	ss(Data_Entry);
	int 				temp;
	
	ss >> temp;
	if (ss.fail() || !ss.eof())
		throw InvalidData();
	if (std::find(_vector.begin(), _vector.end(), temp) != _vector.end())
		throw DuplicateData();
	_vector.push_back(temp);
}