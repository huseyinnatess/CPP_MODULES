#ifndef BRAIN
#define BRAIN

#include "../Print/Print.hpp"

class Brain
{
public:
    Brain();
    Brain(const Brain& oth);
    Brain& operator=(const Brain& oth);
    ~Brain();
    std::string ideas[100];
};

#endif