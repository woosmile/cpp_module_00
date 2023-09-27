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

std::string	Contact::DecoData(std::string origin_str)
{
	std::string	show_str;

	show_str = origin_str;
	if (origin_str.length() > 10)
	{
		show_str.resize(9);
		show_str.append(".");
		return (show_str);
	}
	return (origin_str);
}

void Contact::ShowData(int idx, int mode)
{
	std::cout << std::setw(10) << idx + 1 << "|";
	std::cout << std::setw(10) << DecoData(last_name) << "|";
	std::cout << std::setw(10) << DecoData(first_name) << "|";
	std::cout << std::setw(10) << DecoData(nickname);
	if (mode == 0)
		std::cout << std::endl;
	else
	{
		std::cout << "|";
		std::cout << std::setw(10) << DecoData(number) << "|";
		std::cout << std::setw(10) << DecoData(secret) << std::endl;
	}
}