#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::InputData()
{
	int	add_idx = 0;

	while (add_idx < 5)
	{
		switch(add_idx)
		{
			case 0 :
			{
				std::cout << "first name: ";
				std::getline(std::cin, first_name);
				if (std::cin.eof())
					exit(0);
				if (first_name.empty())
					continue;
				break ;
			}
			case 1 :
			{
				std::cout << "last name: ";
				std::getline(std::cin, last_name);
				if (std::cin.eof())
					exit(0);
				if (last_name.empty())
					continue;
				break ;
			}
			case 2 :
			{
				std::cout << "nickname: ";
				std::getline(std::cin, nickname);
				if (std::cin.eof())
					exit(0);
				if (nickname.empty())
					continue;
				break ;
			}
			case 3 :
			{
				std::cout << "number: ";
				std::getline(std::cin, number);
				if (std::cin.eof())
					exit(0);
				if (number.empty())
					continue;
				break ;
			}
			case 4 :
			{
				std::cout << "secret: ";
				std::getline(std::cin, secret);
				if (std::cin.eof())
					exit(0);
				if (secret.empty())
					continue;
				break ;
			}
			default :
				std::cout << "exception.\n";
		}
		add_idx++;
	}
}

int	Contact::CheckEmpty()
{
	if (first_name.empty() || last_name.empty() || nickname.empty() || number.empty() || secret.empty())
		return (1);
	else
		return (0);
}

void Contact::ShowData(int idx, int mode)
{
	std::string	show_str;

	std::cout << std::setw(10) << idx + 1;
	std::cout << "|";
	show_str = last_name;
	if (last_name.length() > 10)
	{
		show_str.resize(9);
		show_str.append(".");
	}
	std::cout << std::setw(10) << show_str;
	std::cout << "|";
	show_str = first_name;
	if (first_name.length() > 10)
	{
		show_str.resize(9);
		show_str.append(".");
	}
	std::cout << std::setw(10) << show_str;
	std::cout << "|";
	show_str = nickname;
	if (nickname.length() > 10)
	{
		show_str.resize(9);
		show_str.append(".");
	}
	std::cout << std::setw(10) << show_str;
	if (mode == 0)
		std::cout << std::endl;
	else
	{
		std::cout << "|";
		show_str = number;
		if (number.length() > 10)
		{
			show_str.resize(9);
			show_str.append(".");
		}
		std::cout << std::setw(10) << show_str;
		std::cout << "|";
		show_str = secret;
		if (secret.length() > 10)
		{
			show_str.resize(9);
			show_str.append(".");
		}
		std::cout << std::setw(10) << show_str << std::endl;
	}
}