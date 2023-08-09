#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contact[8];
		int		idx;
	public:
		void	init_idx();
		void	add_contact();
};

void	PhoneBook::init_idx()
{
	idx = 0;
}

void	PhoneBook::add_contact()
{
	
}