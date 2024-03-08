
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
private:
	std::string	infos[5];
	static std::string to_use[5];
public:
	void	full_fill_contact(int number);
};

std::string Contact::to_use[5] = {"First Name", "Last Name", "NickName", "Phone Number", "Darkest Secret"};

#endif
