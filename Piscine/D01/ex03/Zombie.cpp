#include "Zombie.hpp"

Zombie::Zombie(void) {};

Zombie::~Zombie(void)
{
    std::cout << "<" << this->_name << " (" << this->_type << ")";
    std::cout << "> Agggrrrr ar thos salt bulllleeeeetssss..." << std::endl;
}

void     Zombie::setName(std::string name)
{
    this->_name = name;
}

void    Zombie::setType(std::string type)
{
    this->_type = type;
}

void            Zombie::announce(void)
{
    std::cout << "<" << this->_name << " (" << this->_type << ")";
    std::cout << "> Gime more braaaaaaaiinnnnsss" << std::endl;
}
