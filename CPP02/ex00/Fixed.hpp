#ifndef FIXED
#define FIXED

#include <iostream>

class	Fixed
{
private:
		int	_container;
		static const int _bitsContainer = 8;
public:
		Fixed();
		Fixed(const Fixed& oth);
		Fixed& operator=(const Fixed& oth);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};

#endif