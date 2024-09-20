/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:48:51 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/17 13:01:22 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

	public:
		HumanB(const std::string &name);
		~HumanB(void);

		void	attack (void);
		void	setWeapon(Weapon &new_Weapon);

	private:
		std::string	name;
		Weapon*		weapon;

};

#endif
