/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:48:40 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/17 11:31:39 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

	public:
		HumanA(const std::string &new_Name, Weapon &new_Weapon);
		~HumanA(void);

		void	attack(void);

	private:
		std::string	name;
		Weapon		&weapon;

};
# endif

