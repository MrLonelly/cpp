#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
    this->_name = name;
    this->*_weapon = &weapon;
}

~HumanA(void) {};

void    attack(void)
{
    std::cout << this->_name << " atacks with " << this->_weapon.getType() << endl;
}
