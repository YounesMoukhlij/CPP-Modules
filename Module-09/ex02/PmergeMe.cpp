/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:56:14 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/19 16:36:27 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "Constructor by Default Called" << std::endl;
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
	return ("\033[42mInvalid argument!\033[0m");
}

const char* PmergeMe::DuplicateData::what() const throw()
{
	return ("\033[42mDuplicate Number!\033[0m");
}

void PmergeMe::OPerationParse(const std::string& Data_Entry)
{
	int		counter = 0x0;
	size_t 	i = 0x0;
	
	while (i < Data_Entry.size())
	{
		while (isspace(Data_Entry[i]))
				i++;
		if (!isdigit(Data_Entry[i]) && Data_Entry[i] != '+')
			throw InvalidData();
		if (isdigit(Data_Entry[i]))
			counter++;
		i++;
	}
	if (!counter)
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


void	PmergeMe::OPerationPrint() const
{
	size_t i = 0x0;
	
	while (i < _vector.size())
	{
		std::cout << _vector[i];
		if (i++ + 0x1 < _vector.size())
			std::cout << " ";
	}
	std::cout << std::endl;
}