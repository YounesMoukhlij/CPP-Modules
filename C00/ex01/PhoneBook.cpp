
#include "PhoneBook.hpp"

void	PhoneBook::display_banner()
{
	std::cout << "~ Hello !" << std::endl;
	std::cout << "~ Enter your command [ADD, SEARCH, EXIT]" << std::endl;
}

void	PhoneBook::add_contact_to_list(void)
{
	if (number == 8)
		std::cout << "The PhoneBook Is Full ✅" << std::endl;
	else
		contacts->full_fill_contact(number);
}

void	PhoneBook::search_contact_in_list()
{

}
