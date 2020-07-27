#include "Character.hpp"

// Constructor Destructor
Character::Character(std::string const &name) : name(name)
{
    this->ap = 40;
    this->weapon = nullptr;
};

Character::~Character(){};

// Copy constructor
Character::Character(Character const &other)
{
    this->name = other.getName();
    this->ap = other.getAP();
}

// Operator overload
Character &Character::operator=(Character const &other)
{
    this->name = other.getName();

    return (*this);
}

// Public methods
void    Character::recoverAP()
{
    this->ap += 10;

    if(this->ap > 40)
        this->ap = 40;
}

void    Character::equip(AWeapon *w)
{
    this->weapon = w;
}

void    Character::attack(Enemy *e)
{
    if(this->weapon != nullptr)
    {
        std::cout << this->getName() << " attcks " << e->getType() << " with a " << this->weapon->getName() << std::endl;
        this->weapon->attack();

        this->ap -= this->weapon->getAPCost();

        e->setHP(e->getHP() - this->weapon->getDamage());
    
        if(e->getHP() == 0)
            delete e;
    }
}

// Getter Setter
std::string Character::getName() const
{
    return (this->name);
}

int         Character::getAP() const
{
    return (this->ap);
}

std::string Character::getState() const
{
    if(this->weapon != nullptr)
    {
        std::string str = "wields a " + this->weapon->getName();

        return (str);
    }
    return ("is unarmed");
}

// Operator overloads
std::ostream     &operator<<(std::ostream &os, Character const &other)
{
    os << other.getName() << " has " << other.getAP() << " AP and " << other.getState() << std::endl;

    return (os);
}