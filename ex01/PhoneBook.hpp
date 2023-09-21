#include "Contact.hpp"

class Phonebook
{
	private:
		Contact	contact[8];
		int		index;
	public:
		Phonebook()
		{
			this->index = 0;
		}
		void	AddContact();
		void	ShowContact();
};
