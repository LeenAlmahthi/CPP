#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point = 0;
}
Fixed::Fixed(const int x)
{
	fixed_point = x * 256;
}
Fixed::Fixed(const float x)
{
	fixed_point = roundf(x * 256);
}
Fixed::Fixed(Fixed const &tmp)
{
	this->fixed_point = tmp.getRawBits();
}
Fixed::~Fixed()
{
	// std::cout << "Destructor constructor called\n";
}
Fixed &Fixed::operator=(const Fixed &tmp)
{
	if (this != &tmp)
	{
		this->fixed_point = tmp.getRawBits() ;	
	}
	return (*this);
}
std::ostream& operator<<(std::ostream &out, const Fixed &f){
	out << f.toFloat();
	return (out);

}
int    Fixed::getRawBits( void ) const
{
	return (this->fixed_point);
}
void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}
float Fixed::toFloat( void ) const{
	return( this->fixed_point / 256.0f);
}
int Fixed::toInt( void ) const{
	return( this->fixed_point / 256);
}
bool Fixed::operator>(const Fixed &obj)const{
	return (this->fixed_point > obj.getRawBits());
}
bool Fixed::operator<(const Fixed &obj)const{
	return (this->fixed_point < obj.getRawBits());
}
bool Fixed::operator>=(const Fixed &obj)const{
	return (this->fixed_point >=  obj.getRawBits());
}
bool Fixed::operator<=(const Fixed &obj)const{
	return (this->fixed_point <=  obj.getRawBits());
}
bool Fixed::operator==(const Fixed &obj)const{
	return (this->getRawBits() == obj.getRawBits());
}
bool Fixed::operator!=(const Fixed &obj)const{
	return (this->fixed_point !=  obj.getRawBits());
}
Fixed Fixed::operator+(const Fixed& other) const{
	return (this->toFloat() +  other.toFloat());
}
Fixed Fixed::operator-(const Fixed& other) const{
	return (this->toFloat() -  other.toFloat());
}
Fixed Fixed::operator*(const Fixed& other) const{
	return (this->toFloat() *  other.toFloat());
}
Fixed Fixed::operator/(const Fixed& other) const{
	return (this->toFloat() /  other.toFloat());
}
Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	this->fixed_point += 1;
	return (tmp);
}
Fixed&	Fixed::operator++(){
	this->fixed_point += 1;
	return (*this);
}
Fixed 	Fixed::operator--(int){
	Fixed tmp(*this);
	this->fixed_point -= 1;
	return (tmp);
}
Fixed& 	Fixed::operator--(){
	this->fixed_point -= 1;
	return (*this);
}
Fixed& 	Fixed::min(Fixed& a, Fixed& b){
	if (a > b)
		return (b);
	return (a);
}
const Fixed& 	Fixed::min(const Fixed& a, const Fixed& b){
	if (a > b)
		return (b);
	return (a);
}
Fixed& 	Fixed::max(Fixed& a, Fixed& b){
	if (a < b)
		return (b);
	return (a);
}
const Fixed& 	Fixed::max(const Fixed& a, const Fixed& b){
	if (a < b)
		return (b);
	return (a);
}