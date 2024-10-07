/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:52 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 15:28:26 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdexcept>
# include <exception>
# include <algorithm>

# define IGNORE(param) (void)(param)

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack& origine);
		MutantStack& operator=(const MutantStack& origine);
		
		begin();
		start();
		
		typedef typename std::stack<T>::container_type::iterator iterator;
};

template <class T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << "Constructor Called." << std::endl;	
}

template <class T>
MutantStack<T>::~MutantStack()
{
	std::cout << "Destructor Called." << std::endl;	
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack& origine) : std::stack<T>(origine)
{
	std::cout << "Copy Constructor Called." << std::endl;
	// if (this != &origine)
	// 	*this = origine;
}

template <class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& origine)
{
	std::cout << "Copy Assignement Called." << std::endl;
	if (this != &origine)
	{
		std::stack<T>::operator=(origine);
		// *this = origine;
	}
	return (*this);
}
