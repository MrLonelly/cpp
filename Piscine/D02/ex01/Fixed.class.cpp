#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int Fixed::frac_bits = 8;

Fixed::Fixed():value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixed)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = fixed << Fixed::frac_bits;
};

Fixed::Fixed(const float fixed)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = (int)roundf(fixed * (1 << Fixed::frac_bits));
}

Fixed::Fixed(const Fixed &src): value(src.getRawBits())
{
    std::cout << "Copy construct called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator =(const Fixed &src)
{
    std::cout << "Assignation operator called" << std::endl;

    this->value = src.getRawBits();
    return (*this);
}

int     Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    this->value = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

int     Fixed::toInt(void) const
{
    return (this->value >> Fixed::frac_bits);
}

float   Fixed::toFloat(void) const
{
    return (this->value / (float)(1 << Fixed::frac_bits));
}

std::ostream &operator <<(std::ostream &o, const Fixed &value)
{
    o << value.toFloat();
    return (o);
}