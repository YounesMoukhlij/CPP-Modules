/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:41:05 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/26 17:04:50 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(const FragTrap& origne);
		FragTrap(const std::string& name);
		FragTrap& operator=(const FragTrap& origine);
		~FragTrap();
		
		void 	highFivesGuys(void);
		void	attack( const std::string& target );
	
};

# endif