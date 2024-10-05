/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:40:35 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 17:13:01 by youmoukh         ###   ########.fr       */
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
		
		unsigned int	getSize() const;
		void			deepCopy(const Array& origine);
		T&				operator[](unsigned int index);
		const T&		operator[](unsigned int index) const;
};

template<class T>
Array<T>::~Array()
{
	delete [] _array;
}

template<class T>
Array<T>::Array() : _array(0x0), _size(0x0)
{
}

template<class T>
Array<T>::Array(unsigned int n) : n(0x0)
{
	_size = n;
	new 
}

template<class T>
Array<T>::Array(const Array& origine) : _array(new T(origine._array)), _size(origine._size)
{
	if (*this != origine)
		this = origine;
}

template<class T>
Array& operator=(const Array &origine)
{
	
}

template<class T>
void	deepCopy(const Array& origine)
{
	if (_array)
		delete [] _array;
	
}