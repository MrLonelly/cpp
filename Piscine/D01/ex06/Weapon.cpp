#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
};

Weapon::~Weapon(void) {};

const std::string   getType(void)
{
    return (this->type);
}

void                setType(std::string type)
{
    this->type = type;
}
