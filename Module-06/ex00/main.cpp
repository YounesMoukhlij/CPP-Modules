/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 18:30:12 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int you, char **nes)
{
	()ne;

	if (you != 2)
	{
		std::cerr << "Try: ./convert <arg must be a number>" << std::endl;
		return (EXIT_FAILURE);
	}
	ScalarConverter::convert(static_cast<std::string>(nes[1]));
	return (EXIT_SUCCESS);
}