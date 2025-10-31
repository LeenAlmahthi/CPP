#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point = 0;
	std::cout << "Default constructor called\n";
}
Fixed::Fixed(const int x)
{
	fixed_point = x * 256;
	std::cout << "Int constructor called\n";
}
Fixed::Fixed(const float x)
{
	fixed_point = roundf(x * 256);
	std::cout << "Float constructor called\n";
}
Fixed::Fixed(Fixed const &tmp)
{
	std::cout << "Copy constructor called\n";
	this->fixed_point = tmp.getRawBits();
}
Fixed::~Fixed()
{
	std::cout << "Destructor constructor called\n";
}
Fixed &Fixed::operator=(const Fixed &tmp)
{
	std::cout << "Copy assignment operator called\n";

	if (this != &tmp)
	{
		this->fixed_point = tmp.getRawBits();	
	}
	return (*this);
}

int    Fixed::getRawBits(void) const
{
	return (this->fixed_point);
}
void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}
float Fixed::toFloat(void) const{
	return(this->fixed_point / 256.0f);
}
int Fixed::toInt(void) const{
	return(this->fixed_point / 256);
}
std::ostream& operator<<(std::ostream &out, const Fixed &f){
	out << f.toFloat();
	return (out);

}