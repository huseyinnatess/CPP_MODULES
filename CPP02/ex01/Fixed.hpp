#ifndef FIXED
#define FIXED

#include <iostream>

class	Fixed
{
private:
		int	_container;
		static const int _constContainer = 8;
public:
		Fixed();
		Fixed(const Fixed& oth);
		Fixed(int value);
		Fixed(float value);
		Fixed& operator=(const Fixed& oth);
		~Fixed();
		int getRawBits( void ) const;
		int toInt(void) const;
		float toFloat(void) const;
		void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& cout, const Fixed& oth);

#endif