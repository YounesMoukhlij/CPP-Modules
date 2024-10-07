/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:52 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 15:10:49 by youmoukh         ###   ########.fr       */
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
		MutantStack(const MutantStack& origine);
		MutantStack(/* args */);
		MutantStack& operator=(const MutantStack& origine);
		
		~MutantStack();
		begin();
		start();
};

MutantStack::MutantStack(/* args */)
{
	std::cout << "Constructor Called." << std::endl;	
}

MutantStack::~MutantStack()
{
	std::cout << "Destructor Called." << std::endl;	
}

MutantStack::MutantStack(const MutantStack& origine)
{
	if (this != &origine)
		
}

