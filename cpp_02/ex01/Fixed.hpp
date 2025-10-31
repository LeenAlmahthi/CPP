#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
private:
	int fixed_point;
	static const int  bit_fixed = 8;
public:

	Fixed();
	Fixed(const  int x);
	Fixed(const  float x);
	Fixed(Fixed const &tmp);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );	
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed &operator=(const Fixed &tmp);
	
};
std::ostream &operator<<(std::ostream &out, const Fixed &f);
#endif