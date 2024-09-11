#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100; i++)
    {
        ideas[i] = "I have a brain";
    }
    print("Brain constructor is worked!", TURQUISE);
}

Brain::Brain(const Brain& oth)
{
    *this = oth;
    print("Brain copy constructor is worked!", TURQUISE);
}

Brain& Brain::operator=(const Brain& oth)
{
     for (size_t i = 0; i < oth.ideas->size(); i++)
        ideas[i] = oth.ideas[i];
    return *this;
}

Brain::~Brain()
{
    print("Brain destructor is worked!", TURQUISE);
}