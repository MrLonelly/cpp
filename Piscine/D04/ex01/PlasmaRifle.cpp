#include "PlasmaRifle.hpp"

// Constructor - Destructor
PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}

// Public methods
void        PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}