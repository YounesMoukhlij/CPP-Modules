/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:56:14 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/20 16:32:58 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "!!! Constructor by Default Called !!!" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& origine)
{
	std::cout << "!!! Copy Constructor Called !!!" << std::endl;
	if (this != &origine)
		*this = origine;
}

PmergeMe::~PmergeMe()
{
	std::cout << "!!! Destructor called !!!" << std::endl;
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


void	PmergeMe::OPerationPrint(std::vector<int>& Data) const
{
	size_t i = 0x0;
	
	while (i < Data.size())
	{
		std::cout << Data[i];
		if (i++ + 0x1 < Data.size())
			std::cout << " ";
	}
	std::cout << std::endl;
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

void	PmergeMe::FordJhonsonSort(void)
{
	std::vector<int>::iterator					tmp;
	std::vector<std::pair<int, int> >::iterator	Pairs_it;
	std::vector<int> 							Tmp_Vector;
	std::vector<int>::iterator					LastElement;
	std::vector<int> 							Final_Vector;
	std::vector<int>::iterator					it = _vector.begin();
	std::vector<int>::iterator					it1 = Final_Vector.begin();
	std::vector<int>::iterator					tmp_it = Tmp_Vector.begin();
	
	// The Last Element Make noises it's better to pop it
	if (_vector.size() % 0x2)
		poped_value = *(--(_vector.end())), _vector.pop_back();
		
	while (it != _vector.end())
		Pairs.insert(Pairs.end(), std::make_pair(*it, *(it + 0x1))), it += 0x2;
	
	printPairs(Pairs);
	// Sort the pairs 
	for (Pairs_it = Pairs.begin(); Pairs_it != Pairs.end(); Pairs_it++)
		(Pairs_it->first > Pairs_it->second) ? std::swap(Pairs_it->first, Pairs_it->second) : void();
	// Sort All the pairs
	std::sort(Pairs.begin(), Pairs.end());
		 
	printPairs(Pairs);
	// Copy the pairs in the final vector
	for (Pairs_it = Pairs.begin(); Pairs_it != Pairs.end(); Pairs_it++)
		Final_Vector.push_back(Pairs_it->first), Tmp_Vector.push_back(Pairs_it->second);
		
		
	std::cout << "Final Vector Values " << std::endl;
	OPerationPrint(Final_Vector);
	std::cout << "Tmp Vector Values " << std::endl;
	OPerationPrint(Tmp_Vector);
	
	tmp_it = Tmp_Vector.begin();
	while (tmp_it != Tmp_Vector.end())
	{
		tmp = std::upper_bound(Final_Vector.begin(), Final_Vector.end(), *tmp_it);
		Final_Vector.insert(tmp, *tmp_it);
		tmp_it++;
	}
	_vector.clear();
	// it = Final_Vector.begin();
	while (it1 != Final_Vector.end())
	{
		_vector.push_back(*it1);
		if (it1 + 0x1 == Final_Vector.end())
			LastElement = std::upper_bound(_vector.begin(), _vector.end(), poped_value), _vector.insert(LastElement, poped_value);
		it1++;			
	}
	// OPerationPrint(Final_Vector);
	// clear the vectors
	Tmp_Vector.clear();
	Final_Vector.clear();
	Pairs.clear();
}


void PmergeMe::printPairs(const std::vector<std::pair<int, int> >& Pairs)
{
	std::cout << "priting pairs" << std::endl;
    for (std::vector<std::pair<int, int> >::const_iterator it = Pairs.begin(); it != Pairs.end(); ++it)
        std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
}