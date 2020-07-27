#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon
{
private:
    // Data

public:
    // Constructor - Destructor
    PlasmaRifle();
    ~PlasmaRifle();

    // Public methods
    void    attack() const override;

};

#endif