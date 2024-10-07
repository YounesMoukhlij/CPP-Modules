/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:32:52 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 14:15:04 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdexcept>
# include <exception>
# include <algorithm>

# define IGNORE(param) (void)(param)

class MutantStack
{
	private:
		/* data */
	public:
		MutantStack(const MutantStack& origine);
		MutantStack(/* args */);
		MutantStack& operator=(const MutantStack& origine);
		
		~MutantStack();
};

MutantStack::MutantStack(/* args */)
{
}

MutantStack::~MutantStack()
{
	
}

