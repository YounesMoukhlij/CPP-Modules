
#include "Contact.hpp"

std::string Contact::to_use[5] = {"First Name", "Last Name", "NickName", "Phone Number", "Darkest Secret"};

void	Contact::search_banner()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	Contact::display_banner()
{
	std::cout << "~ Hello !" << std::endl;
	std::cout << "~ Enter your command [ADD, SEARCH, EXIT]" << std::endl;
}

int	Contact::fill_contacts()
{
	int	len;
	int	i;

	len = 0;
	for (i = 0; i < 5; i++)
	{
		std::cout << "# " << Contact::to_use[i] << ":\n+";
		std::getline(std::cin, this->infos[i]);
	}
	for (i = 0; i < 5; i++)
	{
		len = this->infos[i].length();
		if (len == 0)
		{
			std::cout << "~ Empty contact not added !" << std::endl;
			return (1);
		}
	}
	std::cout << "~ Contact added Successfully !" << std::endl;
	return (0);
}
