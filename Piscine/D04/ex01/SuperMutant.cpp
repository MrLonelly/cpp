#include "SuperMutant.hpp"

// Constructor - Destructor
SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    this->armorReduction = 3;
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}

// Overloaded functions
void        SuperMutant::takeDamage(int damage)
{
    damage -= this->armorReduction;

    if(damage > 0)
    {
        this->setHP(this->getHP() - damage); 
    }
}