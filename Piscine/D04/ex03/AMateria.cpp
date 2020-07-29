#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
    this->xp = 0;
}

AMateria::AMateria(AMateria const &src)
{
    this->xp = src.getXP();
    this->type = src.getType();
}

AMateria &AMateria::operator=(AMateria const &src)
{
    this->xp = src.getXP();
    this->type = src.getType();

    return (*this);
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

unsigned int    AMateria::getXP() const
{
    return (this->xp);
}