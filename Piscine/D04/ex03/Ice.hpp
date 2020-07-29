#ifndef ICE_HPP
#define ICE_HPP

#include "ICharacter.hpp"
#include <iostream>

class Ice : public AMateria
{
    private:
        // Data
    
    public:
        Ice();
        ~Ice();

        AMateria *clone() override;
        void use(ICharacter &target) override;
};

#endif