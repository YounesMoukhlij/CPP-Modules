/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:26:32 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 16:32:15 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{

	std::string stringR[0x4] = { "Younes", "Moukhlij", "1337", "Khouribga"};
	iter(stringR, 0x1, &afficher); std::cout << std::endl;
	iter(stringR, 0x2, &afficher); std::cout << std::endl;
	iter(stringR, 0x0, &afficher); std::cout << std::endl;
	iter(stringR, 0x4, &afficher); std::cout << std::endl;
	
	float floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(floatR, 5, &afficher); std::cout << std::endl;

	int _int[5] = { 0, 1, 2, 3, 4 };
	iter(_int, 5, &afficher); std::cout << std::endl;
	
	double _double[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(_double, 5, &afficher); std::cout << std::endl;


	return (0);
}
