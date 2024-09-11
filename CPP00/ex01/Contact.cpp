#include "Contact.hpp"

std::string Contact::GetFirstName() const
{
    return (this->_firstName);
}

std::string Contact::GetLastName() const
{
    return (this ->_lastName);
}

std::string Contact::GetNickName() const
{
    return (this->_nickName);
}

std::string Contact::GetDarkSecret() const
{
    return (_darkSecret);
}

std::string Contact::GetPhoneNumber() const
{
    return (_phoneNumber);
}

int Contact::CheckInput(std::string Input)
{
    size_t count;

    count = 0;
    for (size_t i = 0; i < Input.length(); i++)
    {
        if (Input[i] == ' ' || Input[i] == '\t' || Input[i] == '\n')
            count++;
    }

    if (count == Input.length())
    {
        print("Input cannot be empty", RED);
        return (0);
    }

    
    return (1);
}

int Contact::SetFirstName(std::string input)
{
    if (CheckInput(input))
    {
        if (input.length() > 10)
        {
            input[9] = '.';
            input = input.substr(0, 10);
        }
        this->_firstName = input;
    }
    else
        return (0);
    return (1);
}

int Contact::SetLastName(std::string input)
{
    if (CheckInput(input))
    {
        if (input.length() > 10)
        {
            input[9] = '.';
            input = input.substr(0, 10);
        }
        this->_lastName = input;
    }
    else
        return (0);
    return (1);
}

int Contact::SetNickName(std:: string input)
{
    if (CheckInput(input))
    {
        if (input.length() > 10)
        {
            input[9] = '.';
            input = input.substr(0, 10);
        }
        this->_nickName = input;
    }
    else
        return (0);
    return (1);
}

int Contact::SetDarkSecret(std::string input)
{
    if (CheckInput(input))
    {
        if (input.length() > 10)
        {
            input[9] = '.';
            input = input.substr(0, 10);
        }
        this->_darkSecret = input;
    }
       
    else
        return (0);
    return (1);
}

int Contact::SetPhoneNumber(std::string input)
{
    if (CheckInput(input))
    {
        if (input.length() > 10)
        {
            input[9] = '.';
            input = input.substr(0, 10);
        }
        this->_phoneNumber = input;
    }
    else
        return (0);
    return (1);
}