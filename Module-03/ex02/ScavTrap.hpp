/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:11:55 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/26 12:08:04 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		~ScavTrap();
		ScavTrap();
        ScavTrap( const ScavTrap& origine );
		ScavTrap( const std::string& name );
		ScavTrap& operator=(const ScavTrap& orgine);
		
		void	guardGate();
		void	attack( const std::string& target );
};


#endif