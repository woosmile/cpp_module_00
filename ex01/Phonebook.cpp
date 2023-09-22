#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

void	PhoneBook::AddContact()
{
	contact[index].InputData();
	index = (index + 1) % 8;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void	PhoneBook::ShowContact()
{
	int	find_idx;
	int	show_idx;

	show_idx = 0;
	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << "number" << std::endl;
	while (contact[show_idx].CheckEmpty() != 1 && show_idx < 8)
	{
		contact[show_idx].ShowData(show_idx);
		show_idx++;
	}
	while (1)
	{
		std::cout << "Enter an index for the contact: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> find_idx;
		if (std::cin.eof())
			exit(0);
		if (std::cin.fail() || find_idx < 0 || find_idx > 8)
		{
			std::cout << "Invalid index number. Please enter between 0 and 7.\n";
			continue ;
		}
		else
		{
			if (contact[find_idx].CheckEmpty())
				std::cout << "This contact is empty.\n";
			else
				contact[find_idx].ShowData(find_idx);
			break ;
		}
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
