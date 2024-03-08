
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	bool		flag;
	std::string	cmd;

	flag = 1;
	phonebook.display_banner();
	while (flag)
	{
		std::cout << "📞 - ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phonebook.add_contact_to_list();
		else if (cmd == "SEARCH")
			phonebook.search_contact_in_list();
		else if (cmd == "EXIT")
		{
			std::cout << "Thanks." << std::endl;
			flag = 0;
		}
	}
	return (0);
}
