/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:11:00 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/26 15:30:29 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
	private :
		std::string _name;
	public :
		DiamondTrap();
        ~DiamondTrap();
        DiamondTrap( const std::string& name );
		DiamondTrap( const DiamondTrap& origine);
		DiamondTrap& operator=( const DiamondTrap& origine );
		
		void	attack( const std::string& target );
		void 	whoAmI();
};

# endif