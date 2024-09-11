#include "Print.hpp"

void print(std::string message, std::string colorCode = DEFAULT)
{
    std::cout << colorCode << message << std::endl;
}

void write(std::string message, std::string colorCode = DEFAULT)
{
    std::cout << colorCode << message;
}