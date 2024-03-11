
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
		static void	display_banner();
		static void	search_banner();
		int			fill_contacts();
};


#endif
