#include "Print.hpp"

/*vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv Print And Write vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/

void print(std::string message, std::string colorCode = DEFAULT)
{
    std::cout << colorCode << message << std::endl;
}

void write(std::string message, std::string colorCode = DEFAULT)
{
    std::cout << colorCode << message;
}
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ Print And Write ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/

/*vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv ToString vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/

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
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ToString ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/

/*vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv ToLower and ToUpper vvvvvvvvvvvvvvvvvvvvvvvv*/

void toLower(std::string& str)
{
    size_t i = 0;
    for (; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
}

void toUpper(std::string& str)
{
    size_t i = 0;
    for (; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
}
/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ToLower and ToUpper ^^^^^^^^^^^^^^^^^^^^^^^^*/

/*vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv Strcmp vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/

int	strcmp(const std::string s1, const std::string s2)
{
    size_t i = 0;

    while ((s1[i] == s2[i]) && i < s1.length() && i < s2.length())
            i++;
    return (i - s1.length());
}

/*^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ Strcmp ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
