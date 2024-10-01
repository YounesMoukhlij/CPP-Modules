/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:56:09 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/26 17:13:37 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP


#include <iostream>

class	ClapTrap
{

	protected:
		std::string			_name;
		unsigned int		_hitPoints;
		unsigned int		_energyPoints;
		unsigned int		_attackDamage;

	public:
		ClapTrap();
		ClapTrap( const std::string& name );
		ClapTrap( const ClapTrap& origine );
		ClapTrap& operator=(const ClapTrap& origine );
		~ClapTrap();
		
		void			attack( const std::string& target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
		unsigned int	getDamage() const;
		void			showInfo() const;

};

#endif