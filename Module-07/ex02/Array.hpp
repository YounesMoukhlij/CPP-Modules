/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:40:35 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 17:03:02 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

# define MAX_VAL 750
# define IGNORE(param) (void)(param)

template<class T>
class Array
{
	private:
		T* _array;
		unsigned int _size;
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array& origine);
		Array& operator=(const Array &origine);
		
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		unsigned int getSize() const;
};

template<class T>
Array<T>::~Array()
{
	delete [] _array;
}

template<class T>
Array::Array() : _array(0x0), _size(0x0)
{
	std::cout << "Default Array Constructor called" << std::endl;
}