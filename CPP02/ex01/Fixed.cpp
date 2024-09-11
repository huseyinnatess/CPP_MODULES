#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(int value)
{
	_container = (value << _constContainer);
}

Fixed::Fixed(float value)
{
	_container = (int)roundf(value * 256.0f);
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

int Fixed::toInt() const
{
	return (_container >> _constContainer);
}

float Fixed::toFloat() const
{
	return ((float)_container / 256.0f);
}

void Fixed::setRawBits(int raw)
{
	_container = raw;
}

std::ostream& operator<<(std::ostream& cout, const Fixed& oth)
{
	cout << oth.toFloat();
	return (cout);
}