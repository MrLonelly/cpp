#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy
{
    private:
        // Data
        int armorReduction;
    
    public:
        // Constructor - Destructor
        SuperMutant();
        ~SuperMutant();

        // Overloaded functions
        void    takeDamage(int damage) override;
};

#endif