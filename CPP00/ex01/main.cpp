#include "PhoneBook.hpp"

int ft_atoi(std::string input)
{
	int result = 0;
	if (input.length() > 1 || input.empty())
		return (0);
	for(size_t i = 0; i < input.length(); i++)
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		result += input[i] - 48;
	}
	return result;
}

std::string toLower(std::string& input)
{
	for(size_t i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
			input[i] += 32;
	}
	return (input);
}

int main()
{
	PhoneBook phoneBook;
	std::string input;
	std::string errorMessage = "Invalid index";
	do
	{
		if (input == "add")
			phoneBook.Add();
		else if (input == "search")
		{
			std::string index;
			int convertIndex;
			while (true)
			{
				print("Enter index");
				if (!std::getline(std::cin, index))
					return (0);
				try
				{
					convertIndex = ft_atoi(index);
					convertIndex == 0 ? throw errorMessage : phoneBook.Search(convertIndex);
				}
				catch (std::string errorMessage)
				{
					print(errorMessage, RED);
				}
				catch(...)
				{
					print(errorMessage, RED);
				}
			}
		}
		else if (input == "exit")
			return 0;
		print("Please enter the operation you want to perform.");
		if (!std::getline(std::cin, input))
			return(0);
		toLower(input);
	}while (input == "add" || input == "search" || input == "exit"); 
}


