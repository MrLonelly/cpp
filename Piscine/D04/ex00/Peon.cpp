#include "Peon.hpp"

// Constructor - Destructor
Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog Zog" << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark" << std::endl;
}

// Public methods
void    Peon::getPolymorphed() const
{
    std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}