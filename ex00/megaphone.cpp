#include <iostream>

class megaphone
{
	private:
		int			str_len;
		std::string	upper_str;
	public:
		void	check_str_len(int argc, char **argv);
		void	input_upper_str(int argc, char **argv);
		void	print_str();
};

void	megaphone::check_str_len(int argc, char **argv)
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

void	megaphone::input_upper_str(int argc, char **argv)
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

void	megaphone::print_str()
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
	megaphone	megaphone;

	megaphone.check_str_len(argc, argv);
	megaphone.input_upper_str(argc, argv);
	megaphone.print_str();
	return (0);
}