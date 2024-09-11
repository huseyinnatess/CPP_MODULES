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
		~Fixed();
		int getRawBits( void ) const;
		int toInt(void) const;
		float toFloat(void) const;
		void setRawBits( int const raw );

		Fixed& operator=(const Fixed& oth);
		bool operator>(Fixed const& oth) const;
		bool operator>=(Fixed const& oth)const;
		bool operator<(Fixed const& oth)const;
		bool operator<=(Fixed const& oth)const;
		bool operator==(Fixed const& oth)const;
		bool operator!=(Fixed const& oth)const;
		Fixed operator+(const Fixed& oth);
		Fixed operator-(const Fixed& oth);
		Fixed operator*(const Fixed& oth);
		Fixed operator/(const Fixed& oth);
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& cout, const Fixed& oth);

#endif