#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	currentIndex = 0;
	totalIndex = 0;
}

void PhoneBook::Add()
{
	std::string input;
	Contact newContact;
	
	do 
	{
		print("Enter Name", YELLOW);
		if (!std::getline(std::cin, input))
			exit(0);
	} while (!SetFirstName(input));
	newContact.SetFirstName(input);
	do
	{
		print("Enter LastName", YELLOW);
		if (!std::getline(std::cin, input))
			exit(0);
	} while (!SetLastName(input));
	newContact.SetLastName(input);

	do
	{
		print("Enter NickName", YELLOW);
		if (!std::getline(std::cin, input))
			exit(0);
	} while (!SetNickName(input));
	newContact.SetNickName(input);

	do
	{
		print("Enter DarkSecret", YELLOW);
		if (!std::getline(std::cin, input))
			exit(0);
	} while (!SetDarkSecret(input));
	newContact.SetDarkSecret(input);

	do
	{
		print("Enter PhoneNumber", YELLOW);
		if (!std::getline(std::cin, input))
			exit(0);
	} while (!SetPhoneNumber(input));
	newContact.SetPhoneNumber(input);
	AddList(newContact);
}

void PhoneBook::AddList(Contact newContact)
{
	if (currentIndex < 8)
	{
		contacts[currentIndex] = newContact;
		currentIndex++;
		totalIndex++;
		if (totalIndex == 9)
			totalIndex = 8;
	}
	else
	{
		currentIndex = 0;
		contacts[currentIndex] = newContact;
	}
}

void PhoneBook::Search(int index)
{
	size_t _index = index;
	if (_index > totalIndex)
		print("Invalid index", RED);
	else
		DisplayInformation(_index - 1);
}

void PhoneBook:: DisplayInformation(int index)
{
	std::cout << GREEN << std::endl;
	std::cout << index + 1 << "-) " << "|" << std::setw(10) << contacts[index].GetFirstName();
	std::cout << "|" << std::setw(10)  << contacts[index].GetLastName();
	std::cout << "|" << std::setw(10)  << contacts[index].GetNickName();
	std::cout << "|" << std::setw(10)  << contacts[index].GetDarkSecret();
	std::cout << "|" << std::setw(10) << contacts[index].GetPhoneNumber() << std::endl;
	std::cout << DEFAULT;
}
