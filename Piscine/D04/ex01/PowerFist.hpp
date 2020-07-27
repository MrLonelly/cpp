#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon
{
private:
    // Data

public:
    // Constructor - Destructor
    PowerFist();
    ~PowerFist();

    // Public methods
    void    attack() const override;

};

#endif