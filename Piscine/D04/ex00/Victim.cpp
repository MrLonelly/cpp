#include "Victim.hpp"

// Constructor - Destructor
Victim::Victim(std::string name) : name(name)
{
    std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->name << " just died for no apparent reason !" << std::endl;
}

// Copy constructor
Victim::Victim(Victim const &other)
{
    this->name = other.getName();
}

// Operator overload
Victim  &Victim::operator=(Victim const &other)
{
    this->name = other.getName();

    return (*this);
}

std::ostream     &operator<<(std::ostream &os, Victim const &other)
{
    os << "I'm " << other.getName() << " and I like otters !" << std::endl;
    
    return (os);
}

// Public methods
void    Victim::introduce()
{
    std::cout << "I'm " << this->name << " and I like otters !" << std::endl;
}

void    Victim::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}

// Getter and setters
std::string Victim::getName() const
{
    return (this->name);
}