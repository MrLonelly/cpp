#include "RadScorpion.hpp"

// Constructor - Destructor
RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    this->armorReduction = 0;
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

// Overloaded functions
void        RadScorpion::takeDamage(int damage)
{
    damage -= this->armorReduction;

    if(damage > 0)
    {
        this->setHP(this->getHP() - damage); 
    }
}