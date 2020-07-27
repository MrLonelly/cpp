#include <iostream>
#include <string>

#include "FragTrap.hpp"


int     main(void)
{
    FragTrap a("A1");
    FragTrap b("B1");

    a.rangedAttack("B1");
    b.takeDamage(20);
    return (0);
}