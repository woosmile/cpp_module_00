#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contact[8];
		int		index;
	public:
		void	InitialIndex();
		void	AddContact();
		void	ShowContact(int find_idx);
};

void	PhoneBook::InitialIndex()
{
	index = 0;
}

void	PhoneBook::AddContact()
{
	contact[index].InputData();
	index = (index + 1) % 8;
}

void	PhoneBook::ShowContact(int find_idx)
{
	contact[find_idx].ShowData();
}