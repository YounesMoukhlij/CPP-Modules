/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:43:19 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/24 16:56:16 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	
	public:
		Weapon(const std::string& newType );
		~Weapon(void);
		const std::string&	getType (void);
		void				setType(const std::string& newType);

	private:
		std::string	_type;
};

#endif
