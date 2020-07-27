#include "Sorcerer.hpp"

// Constructor
Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
    std::cout << name << ", " << title << ", is born !" << std::endl;
}

// Destructor
Sorcerer::~Sorcerer()
{
    std::cout << this->name << "," << this->title << ", is dead. Consequences will never be the same !" << std::endl;
}

// Copy-constructor
Sorcerer::Sorcerer(Sorcerer const &other)
{
    this->name = other.getName();
    this->title = other.getTitle();
}

// Operator overload
Sorcerer    &Sorcerer::operator=(Sorcerer const &other)
{
    this->title = other.getTitle();
    this->name = other.getName();
    return (*this);
}

std::ostream     &operator<<(std::ostream &os, Sorcerer const &other)
{
    os << "I am " << other.getName() << ", " << other.getTitle() << ", and I like ponies !" << std::endl;

    return (os);
}

// Public methods
void        Sorcerer::introduce()
{
    std::cout << "I am " << this->name << ", " << this->title << ", and I like ponies !" << std::endl;
}

void        Sorcerer::polymorph(Victim const &other) const
{
    other.getPolymorphed();
}

// Getter and setters
std::string Sorcerer::getName() const
{
    return (this->name);
}

std::string Sorcerer::getTitle() const
{
    return (this->title);
}