/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:43:23 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/25 16:57:39 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int you, char **nes)
{

	if (you != 2)
	{
		std::cerr << "Error Try : ./RPN <argument>." << std::endl;
		return (EXIT_FAILURE);
	}
	try
	{
		RPN	rpn;
		RPN	rpn1;

		
		std::string	data = static_cast<const std::string>(nes[0x1]);
		rpn.OperationAPPOLO(data, 0x0);
		rpn.OperationAPPOLO(data, 0x1);

		rpn1 = rpn;
		rpn1.OperationAPPOLO(data, 0x0);
		rpn1.OperationAPPOLO(data, 0x1);
	}
	catch(const std::exception& younes)
	{
		std::cerr << "Error: " << younes.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}