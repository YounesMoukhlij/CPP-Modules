/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:30:17 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/24 17:25:23 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string sed_func(std::string str, const std::string s1, const std::string s2)
{
	size_t whereto;
	
	whereto = str.find(s1);
	while (whereto != std::string::npos)
	{
        str.erase(whereto, s1.length());
        str.insert(whereto, s2);
        whereto = str.find(s1, whereto + s2.length());
    }
	return str;
}
