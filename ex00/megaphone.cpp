#include <iostream>

class Megaphone
{
	private:
		std::string	upper_str;
	public:
		void	PrintUpperString(int argc, char **argv);
};

void	Megaphone::PrintUpperString(int argc, char **argv)
{
	for (int idx_y = 1; idx_y < argc; idx_y++)
	{
		for (int idx_x = 0; argv[idx_y][idx_x] != '\0'; idx_x++)
		{
			if (std::islower(argv[idx_y][idx_x]) == 1)
				argv[idx_y][idx_x] = std::toupper(argv[idx_y][idx_x]);
		}
		upper_str.append(argv[idx_y]);
	}
	if (upper_str.size() == 0)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		std::cout << upper_str << std::endl;
}

int	main(int argc, char **argv)
{
	Megaphone	megaphone;

	megaphone.PrintUpperString(argc, argv);
	return (0);
}