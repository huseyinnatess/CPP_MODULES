#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "Print.hpp"

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _darkSecret;
    std::string _phoneNumber;
    
public:
    std::string GetFirstName() const;
    std::string GetLastName() const;
    std::string GetNickName() const;
    std::string GetDarkSecret() const;
    std::string GetPhoneNumber() const;
    int CheckInput(std::string Input);

    int SetFirstName(std::string  firstName);
    int SetLastName(std::string  lastName);
    int SetNickName(std::string  nickName);
    int SetDarkSecret(std::string  darkSecret);
    int SetPhoneNumber(std::string phoneNumber);
    
};

#endif