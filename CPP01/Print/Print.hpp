#ifndef PRINT
#define PRINT

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define TURQUISE "\033[36m"

#define DEFAULT "\033[0m"
#define BOLD "\033[1m"

#include <iostream>

template <class T>
void print(T message, std::string colorCode = DEFAULT)
{
    std::cout << colorCode << message << std::endl;
}

template <class T>
void write(T message, std::string colorCode = DEFAULT)
{
    std::cout << colorCode << message;
}

void print(std::string, std::string);
void write(std::string, std::string);

std::string toString(int variable);
std::string toString(unsigned int variable);

void toLower(std::string& str);
void toUpper(std::string& str);

int	strcmp(const std::string s1, const std::string s2);

#endif