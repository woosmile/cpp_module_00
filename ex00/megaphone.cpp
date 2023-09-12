#include <iostream>

class Megaphone
{
	private:
		int			str_len;
		std::string	upper_str;
	public:
		void	CheckStringLength(int argc, char **argv);
		void	InputUpperString(int argc, char **argv);
		void	PrintString();
};

void	Megaphone::CheckStringLength(int argc, char **argv)
{
	int			len;
	int			idx_y;
	std::string	argv_str_tmp;

	len = 0;
	idx_y = 1;
	while (idx_y < argc)
	{
		argv_str_tmp = argv[idx_y];
		len += argv_str_tmp.length();
		idx_y++;
	}
	str_len = len;
}

void	Megaphone::InputUpperString(int argc, char **argv)
{
	std::string	argv_str_tmp;

	int	idx_y;
	idx_y = 1;
	while (idx_y < argc)
	{
		argv_str_tmp = argv[idx_y];
		upper_str.append(argv_str_tmp);
		idx_y++;
	}

	int	idx_str;
	idx_str = 0;
	while (idx_str < str_len)
	{
		upper_str[idx_str] = toupper(upper_str[idx_str]);
		idx_str++;
	}
}

void	Megaphone::PrintString()
{
	if (str_len > 0)
	{
		std::cout << upper_str << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	Megaphone	megaphone;

	megaphone.CheckStringLength(argc, argv);
	megaphone.InputUpperString(argc, argv);
	megaphone.PrintString();
	return (0);
}