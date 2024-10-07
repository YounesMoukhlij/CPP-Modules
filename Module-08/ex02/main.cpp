/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:42:32 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 16:23:27 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(int you, char **nes)
{
	IGNORE(nes);
	if (you != 0x1)
	{
		std::cerr << "The Program Does not take any Arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << "TOP : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "TOP : " << mstack.top() << std::endl;
	std::cout << "SIZE : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.push(0x9C);
	std::cout << "SIZE : " << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	// Test the copy Constructor
	MutantStack<int> s(mstack);
	MutantStack<int>::iterator io = s.begin();
	MutantStack<int>::iterator ioe = s.end();
	++io;
	--io;
	while (io != ioe)
	{
		std::cout << *io << std::endl;
		++io;
	}
	MutantStack<int> test;
	
	test = mstack;
	MutantStack<int>::iterator t1 = test.begin();
	MutantStack<int>::iterator t2 = test.end();
	std::cout << "Begin of test "<< *t1 << std::endl;
	std::cout << "End of test " << *t2 << std::endl;
	for ()
	
	
	return (EXIT_SUCCESS);
}