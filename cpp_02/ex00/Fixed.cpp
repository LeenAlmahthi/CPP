#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point = 0;
	std::cout << "Default constructor called\n";
}
Fixed::Fixed(Fixed &tmp)
{
	std::cout << "Copy constructor called\n";
	this->fixed_point = tmp.getRawBits();
}
Fixed &Fixed::operator=(const Fixed &tmp)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &tmp)
	{
		this->fixed_point = tmp.getRawBits() ;	
	}
	return (*this);
}
Fixed::~Fixed()
{
	std::cout << "Destructor constructor called\n";
}
int    Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixed_point);
}
void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}
