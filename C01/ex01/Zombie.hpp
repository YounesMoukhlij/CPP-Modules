/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:18:45 by youmoukh          #+#    #+#             */
/*   Updated: 2024/04/22 17:57:12 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void nameZombie(std::string str);
	Zombie(std::string str);
	Zombie(int numZombies, std::string z);
	void announce(void);
	~Zombie();
};

void	print_name(int num, Zombie *z);
Zombie* zombieHorde( int N , std::string name);
