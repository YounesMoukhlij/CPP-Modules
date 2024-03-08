
#include "Contact.hpp"

std::string Contact::to_use[5] = {"First Name", "Last Name", "NickName", "Phone Number", "Darkest Secret"};

void	Contact::full_fill_contact(int number)
{
	int	i;

	i = 0;
	while (i++ < 5)
	{
		std::cout << Contact::to_use[i] << " :\n";
		std::getline(std::cin, );
	}

}
