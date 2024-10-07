/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:40:33 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/07 16:51:49 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ""

int main(int you, char **nes)
{
	IGNORE(nes);
	if (you < 0x2)
	{
		std::cerr << "Usage ./btc <file>" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}