/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:59:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/20 10:58:50 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int		i;
	size_t	j;

	i = 0x1;
	if (ac == i)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < ac)
		{
			j = 0x0; 
			std::string array(av[i]);
			while (j < array.length())
			{
				std::cout << (char)std::toupper(array[j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}
