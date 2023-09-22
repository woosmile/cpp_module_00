#include "PhoneBook.hpp"

int main()
{
	PhoneBook 	phonebook;
	std::string mode;

	while (1)
	{
		std::cout << "Select one of the following: ADD, SEARCH, or EXIT: ";
		std::cin >> mode;
		if (std::cin.eof())
			exit(0);
		if (mode.compare("ADD") == 0)
			phonebook.AddContact();
		else if (mode.compare("SEARCH") == 0)
			phonebook.ShowContact();
		else if (mode.compare("EXIT") == 0)
			break ;
	}
	return (0);
}