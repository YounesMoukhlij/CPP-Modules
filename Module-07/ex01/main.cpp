/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:26:32 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/05 16:28:14 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int _int[5] = { 0, 1, 2, 3, 4 };
	iter(_int, 5, &afficher); std::cout << std::endl;

	float floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(floatR, 5, &afficher); std::cout << std::endl;

	double doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(doubleR, 5, &afficher); std::cout << std::endl;

	bool boolR[2] = { false, true };
	iter(boolR, 2, &afficher); std::cout << std::endl;

	std::string stringR[5] = { "phrase 1", "phrase 2", "templates", "are", "fun" };
	iter(stringR, 5, &afficher); std::cout << std::endl;
	iter(stringR, 2, &afficher); std::cout << std::endl;
	iter(stringR, 0, &afficher); std::cout << std::endl;

	return (0);
}
