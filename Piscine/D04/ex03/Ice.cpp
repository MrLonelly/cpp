#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {};

AMateria    *Ice::clone()
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}