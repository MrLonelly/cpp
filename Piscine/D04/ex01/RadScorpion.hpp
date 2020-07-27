#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy
{
    private:
        // Data
        int armorReduction;
    
    public:
        // Constructor - Destructor
        RadScorpion();
        ~RadScorpion();

        // Overloaded functions
        void    takeDamage(int damage) override;
};

#endif