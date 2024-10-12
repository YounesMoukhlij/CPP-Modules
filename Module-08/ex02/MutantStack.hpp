/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:52 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/12 18:07:40 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdexcept>
# include <exception>
# include <algorithm>
# include <stack>

# define IGNORE(param) (void)(param)

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack& origine);
		MutantStack& operator=(const MutantStack& origine);
		
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator end()
		{
			return this->c.end();
		}
		iterator begin()
		{
			return this->c.begin();
		}
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << "Constructor Called." << std::endl;	
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "Destructor Called." << std::endl;	
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& origine) : std::stack<T>(origine)
{
	*this = o
	std::cout << "Copy Constructor Called." << std::endl;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& origine)
{
	std::cout << "Copy Assignement Called." << std::endl;
	if (this != &origine)
	{
		std::stack<T>::operator=(origine);
	}
	return (*this);
}

