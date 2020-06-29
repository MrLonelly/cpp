#include "Fixed.class.hpp"
#include <iostream>

const int Fixed::frac_bits = 8;

Fixed::Fixed():value(0)
{
    std::cout << "Default constructor called" << std::endl;
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