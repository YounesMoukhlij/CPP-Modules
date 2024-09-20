/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:43:00 by youmoukh          #+#    #+#             */
/*   Updated: 2024/09/20 10:37:21 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	private:
		int					index;
		std::string			infos[5];
		static std::string	to_use[5];
	public:
		static void	display_banner();
		static void	search_banner();
		void		display_contacts(int ind);
		int			fill_contacts();
		void		display();
		Contact();
		~Contact();
};

#endif
