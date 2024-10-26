/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:56:14 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/26 14:39:52 by youmoukh         ###   ########.fr       */
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
	std::cout << "!!! Copy Assignement Called !!!" << std::endl;
	if (this != &origine)
	{
		_vector = origine._vector;
		_deque = origine._deque;
		Pairs = origine.Pairs;
		Pairs_Deque = origine.Pairs_Deque;
		deque_value = origine.deque_value;
		vector_value = origine.vector_value;
		startDeque = origine.startDeque;
		startVector = origine.startVector;
		endDeque = origine.endDeque;
		endVector = origine.endDeque;
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
	// 	if (std::find(_vector.begin(), _vector.end(), temp) != _vector.end())
	// 		throw DuplicateData();
	_vector.push_back(temp);
	_deque.push_back(temp);
}


void	PmergeMe::OPerationPrint(int mode1, int mode2) const
{
	size_t i = 0x0;

	(mode2 == BEFORE) ? std::cout << "~ Before ~" << std::endl : std::cout << "";
	(mode2 == AFTER) ?  std::cout << "~ After ~" << std::endl : std::cout << "";
	(mode1 == VECTOR || mode1 == DEQUE) ? std::cout << "->   " :  std::cout << "";

	if (mode1 == VECTOR)
	{
		while (i < _vector.size())
		{
			std::cout <<  _vector[i];
			(i++ + 0x1 < _vector.size()) ? std::cout << " " : std::cout << "";
		}
	}
	else if (mode1 == DEQUE)
	{
		while (i < _deque.size())
		{
			std::cout <<  _deque[i];
			(i++ + 0x1 < _deque.size()) ? std::cout << " " : std::cout << "";
		}
	}
	std::cout << std::endl;
}

void	PmergeMe::FordJhonsonVectorSort(void)
{
	std::vector<int>::iterator					tmp;
	std::vector<std::pair<int, int> >::iterator	Pairs_it;
	std::vector<int> 							Tmp_Vector;
	std::vector<int>::iterator					LastElement;
	std::vector<int> 							Final_Vector;
	bool										flag = false;
	std::vector<int>::iterator					it = _vector.begin();
	std::vector<int>::iterator					tmp_it = Tmp_Vector.begin();

	// The Last Element Make noises it's better to pop it
	if (_vector.size() % 0x2)
	{
		puts("234");
		vector_value = *(--(_vector.end())), _vector.pop_back(), flag = true;
	}
	
	std::cout << "Vector Value : " << vector_value << std::endl;

	while (it != _vector.end())
		Pairs.insert(Pairs.end(), std::make_pair(*it, *(it + 0x1))), it += 0x2;


	// Sort the pairs
	for (Pairs_it = Pairs.begin(); Pairs_it != Pairs.end(); Pairs_it++)
		(Pairs_it->first > Pairs_it->second) ? std::swap(Pairs_it->first, Pairs_it->second) : void();
	// Sort All the pairs
	std::sort(Pairs.begin(), Pairs.end());


	// Copy the pairs in the final vector
	for (Pairs_it = Pairs.begin(); Pairs_it != Pairs.end(); Pairs_it++)
		Final_Vector.push_back(Pairs_it->first), Tmp_Vector.push_back(Pairs_it->second);

	tmp_it = Tmp_Vector.begin();
	while (tmp_it != Tmp_Vector.end())
	{
		tmp = std::upper_bound(Final_Vector.begin(), Final_Vector.end(), *tmp_it);
		Final_Vector.insert(tmp, *tmp_it);
		tmp_it++;
	}
	_vector.clear();
	it = Final_Vector.begin();
	while (it != Final_Vector.end())
	{
		_vector.push_back(*it);
		if (it + 0x1 == Final_Vector.end() && flag)
			LastElement = std::upper_bound(_vector.begin(), _vector.end(), vector_value), _vector.insert(LastElement, vector_value);
		it++;
	}

	// clear the vectors
	Tmp_Vector.clear();
	Final_Vector.clear();
	Pairs.clear();
}

double PmergeMe::getTime(const struct timeval& start, const struct timeval& end)
{
	return (end.tv_sec - start.tv_sec) + (end.tv_usec - start.tv_usec) / 1000.0;
}

void	PmergeMe::FordJhonsonDequeSort(void)
{
	std::deque<int>::iterator					tmp;
	std::deque<std::pair<int, int> >::iterator	Pairs_it;
	std::deque<int> 							Tmp_deque;
	std::deque<int>::iterator					LastElement;
	std::deque<int> 							Final_deque;
	std::deque<int>::iterator					it = _deque.begin();
	std::deque<int>::iterator					tmp_it = Tmp_deque.begin();

	// The Last Element Make noises it's better to pop it
	if (_deque.size() % 0x2)
		deque_value = *(--(_deque.end())), _deque.pop_back();

	while (it != _deque.end())
		Pairs_Deque.insert(Pairs_Deque.end(), std::make_pair(*it, *(it + 0x1))), it += 0x2;


	// Sort the pairs
	for (Pairs_it = Pairs_Deque.begin(); Pairs_it != Pairs_Deque.end(); Pairs_it++)
		(Pairs_it->first > Pairs_it->second) ? std::swap(Pairs_it->first, Pairs_it->second) : void();
	// Sort All the pairs
	std::sort(Pairs_Deque.begin(), Pairs_Deque.end());


	// Copy the pairs in the final vector
	for (Pairs_it = Pairs_Deque.begin(); Pairs_it != Pairs_Deque.end(); Pairs_it++)
		Final_deque.push_back(Pairs_it->first), Tmp_deque.push_back(Pairs_it->second);

	tmp_it = Tmp_deque.begin();
	while (tmp_it != Tmp_deque.end())
	{
		tmp = std::upper_bound(Final_deque.begin(), Final_deque.end(), *tmp_it);
		Final_deque.insert(tmp, *tmp_it);
		tmp_it++;
	}
	_deque.clear();
	it = Final_deque.begin();
	while (it != Final_deque.end())
	{
		_deque.push_back(*it);
		if (it + 0x1 == Final_deque.end())
			LastElement = std::upper_bound(_deque.begin(), _deque.end(), deque_value), _deque.insert(LastElement, deque_value);
		it++;
	}

	// clear the vectors
	Tmp_deque.clear();
	Final_deque.clear();
	Pairs_Deque.clear();
}


void	PmergeMe::OPerationSort()
{
	std::cout << "\033[42m~~~~ Welcome TO Vectors ~~~~\033[0m" << std::endl;
	OPerationPrint(VECTOR, BEFORE);
	gettimeofday(&startVector, 0x0);
	FordJhonsonVectorSort();
	gettimeofday(&endVector, 0x0);
	OPerationPrint(VECTOR, AFTER);

	std::cout << "\033[43m~~~~ Welcome TO Deque ~~~~\033[0m" << std::endl;
	OPerationPrint(DEQUE, BEFORE);
	gettimeofday(&startDeque, NULL);
	FordJhonsonDequeSort();
	gettimeofday(&endDeque, NULL);
	OPerationPrint(DEQUE, AFTER);
}

void	PmergeMe::OPerationTime()
{
	std::cout << "\033[45m ^_* TIME Difference ^_*\033[0m" << std::endl;
	std::cout << "Time for Vector : " << getTime(startVector, endVector) << " s" << std::endl;
	std::cout << "Time for Deque : " << getTime(startDeque, endDeque) << " s" << std::endl;
}
