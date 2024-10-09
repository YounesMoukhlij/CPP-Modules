/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:39:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/09 12:29:20 by youmoukh         ###   ########.fr       */
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
		
	public :
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& origine);
		BitcoinExchange&	operator=(const BitcoinExchange& origine);
		
		
		
		void				NameChecker(std::string& name);


		
		// class	InvalidOpen: public std::exception
		// {
		// 	public:
		// 		const char* what() const throw();
		// };
		// class	InvalidData: public std::exception
		// {
		// 	public:
		// 		const char* what() const throw();
		// };
		// class	InvalidName: public std::exception
		// {
		// 	public:
		// 		const char* what() const throw();
		// };
};