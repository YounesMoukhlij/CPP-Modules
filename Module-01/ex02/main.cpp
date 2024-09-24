/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:50:24 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/23 18:38:18 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(int ac, char **argv)
{
	(void) argv;

	if (ac != 0x1)
	{
		std::cerr << "the program does not take any args!" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string		arg = "HI THIS IS BRAIN";
	std::string*	stringPTR = &arg;
	std::string&	stringREF = arg;

	std::cout << (&arg) << std::endl;
	std::cout << (stringPTR) << std::endl;
	std::cout << (&stringREF) << std::endl;

	std::cout << arg << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (EXIT_SUCCESS);
}
