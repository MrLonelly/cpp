#include "AWeapon.hpp"

// Constructor - Destructor
AWeapon::AWeapon(std::string const &name, int apcost, int damage) : name(name), apcost(apcost), damage(damage){};

// Copy constructor
AWeapon::AWeapon(AWeapon const &other)
{
    this->name = other.getName();
    this->apcost = other.getAPCost();
    this->damage = other.getDamage();
}

// Operator overload
AWeapon     &AWeapon::operator=(AWeapon const &other)
{
    this->name = other.getName();
    this->apcost = other.getAPCost();
    this->damage = other.getDamage();
    
    return (*this);
}

// Getter - Setter
std::string AWeapon::getName() const
{
    return (this->name);
}

int         AWeapon::getAPCost() const
{
    return (this->apcost);
}

int         AWeapon::getDamage() const
{
    return (this->damage);
}