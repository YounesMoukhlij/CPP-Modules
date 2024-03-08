
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
private:
	std::string	infos[3];
	std::string to_use[3];
public:
	void	full_fill_contact();
};

#endif
