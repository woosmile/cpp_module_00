#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): _index(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::AddContact()
{
	contact[_index].InputData();
	_index = (_index + 1) % 8;
}

void	PhoneBook::ShowContact()
{
	std::string	find_idx;
	int			find_idx_num;
	int			show_idx;

	show_idx = 0;
	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	while (contact[show_idx].CheckEmpty() != 1 && show_idx < 8)
	{
		contact[show_idx].ShowData(show_idx, 0);
		show_idx++;
	}
	INDEX_INPUT:
	while (1)
	{
		std::cout << "Enter an index for the contact: ";
		std::getline(std::cin, find_idx);
		if (std::cin.eof())
			exit(0);
		for (size_t idx = 0; idx < find_idx.size(); idx++)
		{
			if (std::isdigit(find_idx[idx]) == 0)
			{
				std::cout << "Not just numbers." << std::endl;
				goto INDEX_INPUT;
			}
		}
		find_idx_num = std::atoi(find_idx.c_str());
		if (find_idx_num < 1 || find_idx_num > 8)
		{
			std::cout << "Invalid index number. Please enter between 1 and 8.\n";
			continue ;
		}
		else
		{
			if (contact[find_idx_num - 1].CheckEmpty())
				std::cout << "This contact is empty.\n";
			else
			{
				std::cout << std::setw(10) << "index";
				std::cout << "|";
				std::cout << std::setw(10) << "last name";
				std::cout << "|";
				std::cout << std::setw(10) << "first name";
				std::cout << "|";
				std::cout << std::setw(10) << "nickname";
				std::cout << "|";
				std::cout << std::setw(10) << "number";
				std::cout << "|";
				std::cout << std::setw(10) << "secret" << std::endl;
				contact[find_idx_num - 1].ShowData(find_idx_num - 1, 1);
			}
			break ;
		}
	}
}
