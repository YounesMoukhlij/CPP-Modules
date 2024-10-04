/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:06 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/04 16:50:28 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int you, char **nes)
{
	(void)nes;

	if (you != 2)
	{
		std::cerr << "Try: ./convert <arg must be a number>" << std::endl;
		return (1);
	}
	printf("%d\n", (1 >> 0));
	printf("%d\n", 1 << 0);
	// ScalarConverter::convert(static_cast<std::string>(nes[1]));
	return (0);
}