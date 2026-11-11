#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
    ///shift for left 8 bits(from int to fix point num)
    this->fixedPoint = integer << fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatt)
{
    ////we * the float num to 256 i don't know why(from float to fix point num)
    this->fixedPoint = (int)roundf(floatt * (1 << fractionalBits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)  : fixedPoint(other.fixedPoint)
{
    std::cout << "Copy constructor called" << std::endl;///b(a)
}

///c = b;
Fixed& Fixed::operator = (const Fixed& other)
{
    if (this != &other)/// so save us from c = c
        this->fixedPoint = other.fixedPoint;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);////cause we want the value
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return ((float)(this->fixedPoint) / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
    ///shift for right
    return (this->fixedPoint >> fractionalBits);
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;   
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->fixedPoint);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);///عشان نقدر نطبع اللسلة كاملة مع std::endl
}



