#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string	secret;
	public:
		void		InputData();
		int			CheckEmpty();
		void		ShowData(int idx);
};
