#ifndef CURE_HPP
#define CURE_HPP

#include "ICharacter.hpp"
#include <iostream>

class Cure : public AMateria
{
    private:
        // Data
    
    public:
        Cure();
        ~Cure();

        AMateria *clone() override;
        void use(ICharacter &target) override;
};

#endif