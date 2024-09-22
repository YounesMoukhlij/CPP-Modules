/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 08:51:14 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/20 16:23:26 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    private:

        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl(void);
        ~Harl(void);
        void complain( std::string level );
};

#endif
