#ifndef WRONGANIMAl
#define WRONGANIMAl

#include "../Print/Print.hpp"

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& oth);
    WrongAnimal& operator=(const WrongAnimal& oth);
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
protected:
    std::string type;
};

#endif