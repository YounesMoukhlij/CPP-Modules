/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:30:17 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/17 09:56:45 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string sed_func(std::string str, const std::string s1, const std::string s2)
{
	size_t whereto;
	
	while ((whereto = str.find(s1)) != std::string::npos)
	{
        str = str.substr(0, whereto) + s2 + str.substr(whereto + s1.length());
        whereto += s2.length();
    }
	return str;
}