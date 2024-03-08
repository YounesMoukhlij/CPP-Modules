
#include "Contact.hpp"


void	Contact::full_fill_contact(int number)
{
	int	i;

	i = 0;
	(void) number;
	while (i++ < 5)
	{
		std::cout << Contact::to_use[i] << " :\n";
		std::getline(std::cin, Contact::infos[i]);
	}
}
