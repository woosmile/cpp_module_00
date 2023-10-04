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
		std::string	DecoData(std::string origin_str);
	public:
		Contact();
		~Contact();
		void		InputData();
		bool		CheckEmpty();
		void		ShowData(int idx, int secret);
};

#endif