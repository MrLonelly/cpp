#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:

        // Constructors
        Fixed();
        Fixed(const Fixed &src);
        Fixed(const int fixed);
        Fixed(const float fixed);

        // Destructor
        ~Fixed();

        // Operatori(comparatii)
        Fixed   &operator =(const Fixed &src);
        bool    operator >(const Fixed &second) const;
        bool    operator <(const Fixed &second) const;
        bool    operator >=(const Fixed &second) const;
        bool    operator <=(const Fixed &second) const;
        bool    operator ==(const Fixed &second) const;
        bool    operator !=(const Fixed &second) const;

        // Operatori(operatii)
        Fixed   operator +(const Fixed &second);
        Fixed   operator -(const Fixed &second);
        Fixed   operator *(const Fixed &second);
        Fixed   operator /(const Fixed &second);

        Fixed   &operator ++(void);
        Fixed   operator ++(int);
        Fixed   &operator --(void);
        Fixed   operator --(int);


        // Public methods
        int             toInt(void) const;
        float           toFloat(void) const;
        static Fixed   &min(Fixed &first, Fixed &second);
        static const Fixed &min(const Fixed &first, const Fixed &second);
        static Fixed   &max(Fixed &first, Fixed &second);
        static const Fixed &max(const Fixed &first, const Fixed &second);

        

        // Incapsulare
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
    
    private:
        int value;
        static const int frac_bits; 
};

std::ostream &operator<<(std::ostream &o, const Fixed &value);

#endif