/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:56:14 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 16:08:48 by youmoukh         ###   ########.fr       */
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
		for (size_t j = 0x0; j < Data_Entry.size(); j++)
		{
			if (Data_Entry[i] == Data_Entry[j])
				throw DuplicateData();
		}
		if (Data_Entry[i] == '+' && i == 0)
			i++;
		else
			break;
	}
	while (i < Data_Entry.size())
	{
		if (isspace(Data_Entry[i]))
			i++;
		else
			break;
	}
	while (i < Data_Entry.size())
	{
		if (!isdigit(Data_Entry[i]) && Data_Entry[i] != '+')
			throw InvalidData();
		if (isdigit(Data_Entry[i]))
			countDigit++;
		i++;
	}
	if (countDigit == 0)
		throw InvalidData();
	
	
	std::stringstream	ss(Data_Entry);
	int 				temp;
	
	ss >> temp;
	if (ss.fail() || !ss.eof())
		throw InvalidData();
	if (std::find(_vector.begin(), _vector.end(), temp) != _vector.end())
		throw DuplicateData();
	_vector.push_back(temp);
}