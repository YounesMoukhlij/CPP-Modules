/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:52 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 15:19:00 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdexcept>
# include <exception>
# include <algorithm>

# define IGNORE(param) (void)(param)

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		/* data */
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack& origine);
		MutantStack& operator=(const MutantStack& origine);
		
		// begin();
		// start();
};

template<class T>
MutantStack<T>::MutantStack() : s
{
	std::cout << "Constructor Called." << std::endl;	
}

template<class T>
MutantStack<T>::~MutantStack()
{
	std::cout << "Destructor Called." << std::endl;	
}

MutantStack<T>::MutantStack(const MutantStack& origine)
{
	std::cout << "Copy Constructor Called." << std::endl;
	if (this != &origine)
		*this = origine;
	
}

MutantStack& MutantStack<T>::operator=(const MutantStack& origine)
{
	std::cout << "Copy Assignement Called." << std::endl;
	if (this != &origine)
		*this = origine;
}
