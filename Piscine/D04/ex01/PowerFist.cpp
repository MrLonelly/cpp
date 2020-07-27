#include "PowerFist.hpp"

// Constructor - Destructor
PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

// Public methods
void        PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}