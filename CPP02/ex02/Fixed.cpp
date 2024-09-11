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
	_container = (int)roundf(value * 256);
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

bool Fixed::operator>(Fixed const& oth) const
{
	return (_container > oth._container);
}

bool Fixed::operator>=(const Fixed& oth) const
{
	return (_container >= oth._container);
}

bool Fixed::operator<(const Fixed& oth) const
{
	return !(_container > oth._container);
}

bool Fixed::operator<=(const Fixed& oth) const
{
	return !(_container >= oth._container);
}
 
bool Fixed::operator==(const Fixed& oth) const
{
	return (_container == oth._container);
}

bool Fixed::operator!=(const Fixed& oth) const
{
	return (_container != oth._container);
}

Fixed Fixed::operator+(const Fixed& oth)
{
	return (Fixed(toFloat() + oth.toFloat()));
}

Fixed Fixed::operator-(const Fixed& oth)
{
	return (Fixed(toFloat() - oth.toFloat()));
}

Fixed Fixed::operator*(const Fixed& oth)
{
	return (Fixed(toFloat() * oth.toFloat()));
}

Fixed Fixed::operator/(const Fixed& oth)
{
	return (Fixed(toFloat() / oth.toFloat()));
}

Fixed& Fixed::operator++()
{
	_container += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;

	_container += 1;
	return temp;
}

Fixed& Fixed::operator--()
{
	_container -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;

	_container -= 1;
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a > b ? b : a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a > b ? b : a);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}