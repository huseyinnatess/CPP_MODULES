#include "Print.hpp"

void print(std::string message, std::string colorCode = DEFAULT)
{
    std::cout << colorCode << message << std::endl;
}

void write(std::string message, std::string colorCode = DEFAULT)
{
    std::cout << colorCode << message;
}

std::string to_String(int variable)
{
    std::string result;
    bool isNegative = false;

    if (variable < 0) 
    {
        isNegative = true;
        variable = -variable;
    }

    do {
        char digit = '0' + variable % 10;
        result = digit + result;
        variable /= 10;
    } while (variable != 0);

    if (isNegative) {
        result = '-' + result;
    }

    return result;
}

std::string to_String(unsigned int variable)
{
    std::string result;

   if (variable == 0) {
        result = "0";
    } else {
        while (variable != 0) {
            char digit = '0' + (variable % 10);
            result = digit + result;
            variable /= 10;
        }
    }
    return result;
}