/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:28:02 by youmoukh          #+#    #+#             */
/*   Updated: 2024/03/11 14:28:03 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		number;
	public:
		void display_banner();
		void add_contact_to_list();
		void search_contact_in_list();
};

#endif
