
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	int			flag;
	std::string	cmd;

	flag = 1;
	Contact::display_banner();
	while (flag)
	{
		std::cout << "📞 ~ ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else if (cmd == "EXIT")
		{
			std::cout << "Thanks." << std::endl;
			flag = 0;
		}
	}
	return (0);
}
