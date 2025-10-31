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
	friend std::ostream &operator<<(std::ostream &out, const Fixed &f);
		bool operator>(const Fixed &obj)const;
    bool operator<(const Fixed &obj)const;
    bool operator>=(const Fixed &obj)const;
    bool operator<=(const Fixed &obj)const;
    bool operator==(const Fixed &obj)const;
    bool operator!=(const Fixed &obj)const;
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    Fixed operator++(int);//x++
    Fixed& operator++();//++x
    Fixed operator--(int);//x-- post
    Fixed& operator--();//--x pre
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};


#endif