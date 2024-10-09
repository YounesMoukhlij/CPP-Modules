/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 12:15:46 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdexcept>
# include <exception>
# include <algorithm>
# include <stack>

# define IGNORE(param) (void)(param)



class BitcoinExchange
{
	class	FiInvalidName: public std::exception
		{
			public:
				const char* what() const throw();
		} InvalidFileName;
		class	FileErrorOpen: public std::exception
		{
			public:
				const char* what() const throw();
		} ErrorOpenFile;
		class	ErrorInvalidData: public std::exception
		{
			public:
				const char* what() const throw();
		} ErrorInvalidData;
}