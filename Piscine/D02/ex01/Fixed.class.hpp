#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &src);
        Fixed(const int fixed);
        Fixed(const float fixed);

        ~Fixed();

        Fixed &operator =(const Fixed &src);

        int     toInt(void) const;
        int     getRawBits(void) const;
        float   toFloat(void) const;
        void    setRawBits(int const raw);
    private:
        int value;
        static const int frac_bits; 
};

std::ostream &operator<<(std::ostream &o, const Fixed &value);

#endif