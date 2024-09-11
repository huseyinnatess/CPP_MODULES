#ifndef PHONE_BOOK
#define PHONE_BOOK

#include <iomanip>
#include "Contact.hpp"

class PhoneBook : Contact
{
public:
	PhoneBook();
	void Add();
	void Search(int index);
	void AddList(Contact newContact);
	void DisplayInformation(int index);
private:
	size_t currentIndex;
	size_t totalIndex;
	Contact contacts[8];
};
#endif