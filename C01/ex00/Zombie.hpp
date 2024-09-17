/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:49:45 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/17 08:49:47 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	void announce( void );
	Zombie(std::string input_name);
	~Zombie();
};

Zombie	*newZombie(std::string str);
void randomChump(std::string name);



