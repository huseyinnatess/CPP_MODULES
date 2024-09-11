#include "Fixed.hpp"

Fixed::Fixed()
{
	_container = 0;
	std::cout << "Default constructor is worked!" << std::endl;
}

Fixed::Fixed(const Fixed& oth)
{
	std::cout << "Copy Constructor is worked!" << std::endl;
	*this = oth;
}

Fixed::~Fixed()
{
	std::cout << "Destructor is worked!" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& oth)
{
	_container = oth._container;
	std::cout << "Copy assignment operator is worked!" << std::endl;
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function is worked!" << std::endl;
	return (_container);
}

void Fixed::setRawBits(int raw)
{
	_container = raw;
}