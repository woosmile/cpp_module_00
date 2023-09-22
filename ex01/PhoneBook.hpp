#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contact[8];
		int		index;
	public:
		PhoneBook();
		void	AddContact();
		void	ShowContact();
};
