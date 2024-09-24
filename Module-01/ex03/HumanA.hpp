/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:48:40 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/24 16:54:19 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

	private:
		std::string	_name;
		Weapon		&weapon;
	public:
		HumanA(const std::string &newName, Weapon &new_Weapon);
		~HumanA(void);

		void	attack(void);
};

#endif
