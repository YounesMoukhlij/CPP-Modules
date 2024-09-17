/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:59:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/08/11 11:09:52 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < ac)
		{
			j = 0;
<<<<<<< HEAD
			std::string str(av[i]);
			while (j < str.length())
			{
				std::cout<< std::tolower(str[j]);
			}
			// while (av[i][j])
			// {
			// 	if (av[i][j] >= 'a' && av[i][j] <= 'z')
			// 		av[i][j] -= 32;
			// 	std::cout << av[i][j];
			// 	j++;
			// }
			// if (i < ac - 1)
			// 	std::cout << " ";
=======
			std::string array(av[i]);
			while (j < array.length())
			{
				std::cout << (char)std::toupper(array[j]);
				j++;
			}
>>>>>>> e505e91d5326fdbdb513e031df5e9fc779d5587b
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
