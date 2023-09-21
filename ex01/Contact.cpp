#include "Contact.hpp"

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
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cin >> first_name;
				if (std::cin.eof())
					exit(0);
				if (first_name.empty())
					continue;
				break ;
			}
			case 1 :
			{
				std::cout << "last name: ";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cin >> last_name;
				if (std::cin.eof())
					exit(0);
				if (last_name.empty())
					continue;
				break ;
			}
			case 2 :
			{
				std::cout << "nickname: ";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cin >> nickname;
				if (std::cin.eof())
					exit(0);
				if (nickname.empty())
					continue;
				break ;
			}
			case 3 :
			{
				std::cout << "number: ";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cin >> number;
				if (std::cin.eof())
					exit(0);
				if (number.empty())
					continue;
				break ;
			}
			case 4 :
			{
				std::cout << "secret: ";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cin >> secret;
				if (std::cin.eof())
					exit(0);
				if (secret.empty())
					continue;
				break ;
			}
			default :
			{
				std::cout << "exception.\n";
			}
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

void Contact::ShowData(int idx)
{
	std::cout << std::setw(10) << idx;
	std::cout << "|";
	if (last_name.length() > 10)
	{
		last_name.resize(9);
		last_name.append(".");
	}
	std::cout << std::setw(10) << last_name;
	std::cout << "|";
	if (first_name.length() > 10)
	{
		first_name.resize(9);
		first_name.append(".");
	}
	std::cout << std::setw(10) << first_name;
	std::cout << "|";
	if (number.length() > 10)
	{
		number.resize(9);
		number.append(".");
	}
	std::cout << std::setw(10) << number << std::endl;
}