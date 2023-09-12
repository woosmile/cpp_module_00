#include <iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string	secret;
	public:
		void	InputData();
		void	ShowData();
};

void	Contact::InputData()
{
	int	add_idx = 0;

	while (add_idx < 5)
	{
		switch(add_idx)
		{
			case 0 :
			{
				std::cout << "first_name: ";
				std::cin >> first_name;
				if (first_name.empty())
					continue;
				break ;
			}
			case 1 :
			{
				std::cout << "last_name: ";
				std::cin >> last_name;
				if (last_name.empty())
					continue;
				break ;
			}
			case 2 :
			{
				std::cout << "nickname: ";
				std::cin >> nickname;
				if (nickname.empty())
					continue;
				break ;
			}
			case 3 :
			{
				std::cout << "number: ";
				std::cin >> number;
				if (number.empty())
					continue;
				break ;
			}
			case 4 :
			{
				std::cout << "secret: ";
				std::cin >> secret;
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

void Contact::ShowData()
{
	std::cout << first_name + " | ";
	std::cout << last_name + " | ";
	std::cout << nickname + " | ";
	std::cout << number + " | ";
	std::cout << secret + "\n";
}