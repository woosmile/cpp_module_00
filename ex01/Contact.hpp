#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string	secret;
	public:
		Contact();
		~Contact();
		void		InputData();
		int			CheckEmpty();
		void		ShowData(int idx, int secret);
};

#endif