
#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		void display_banner();
		void add_contact_to_list();
		void search_contact_in_list();
};

#endif
