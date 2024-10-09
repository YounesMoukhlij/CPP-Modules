/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 13:44:29 by youmoukh         ###   ########.fr       */
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
	private:
		std::ifstream	infile;
		std::ifstream	dataBase;
	public :
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& origine);
		BitcoinExchange&	operator=(const BitcoinExchange& origine);
		
		
		
		void				loadData();
		void				nameChecker(std::string& name, int i);
		void				openingFiles(const std::string& name, int j);
		
		


		
		class	Invalidfile: public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	InvalidData: public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	InvalidName: public std::exception
		{
			public:
				const char* what() const throw();
		};
};