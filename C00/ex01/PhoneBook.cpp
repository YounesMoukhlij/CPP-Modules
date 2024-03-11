
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->number = 0;
}

void	PhoneBook::add(void)
{
	if (number == 8)
		std::cout << "The PhoneBook Is Full ✅" << std::endl;
	else
	{
		if (this->contacts[this->number].fill_contacts() == 0)
			this->number++;
	}
}

void	PhoneBook::search()
{
	int	i;

	i = 0;
	if (this->number == 0)
		std::cout << "~ 0 Contacts, add a contact before searching !\n";
	else
	{
		Contact::search_banner();
		std::cout << "~ Type Index to display Infos or 0 to Exit Search List.\n";
		while (i < 5)
		{

		}
	}
	// std::cout << std::string (this->contacts[0]) << std::endl;
}
