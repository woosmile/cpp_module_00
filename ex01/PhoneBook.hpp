#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contact[8];
		int		_index;
	public:
		PhoneBook();
		~PhoneBook();
		void	AddContact();
		void	ShowContact();
};

#endif