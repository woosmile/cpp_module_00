#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string mode;

	phonebook.InitialIndex();
	while (1)
	{
		std::cout << "Select one of the following: ADD, SEARCH, or EXIT.\n";
		std::cin >> mode;

		if (mode == "ADD")
		{
			phonebook.AddContact();
			phonebook.ShowContact(0);
		}
		else if (mode == "EXIT")
			break ;
	}
	return (0);
}