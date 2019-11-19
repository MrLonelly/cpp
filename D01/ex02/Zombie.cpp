#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->_name = name;
    this->_type = type;
    this->announce();
}

Zombie::~Zombie(void)
{
    std::cout << "<" << this->_name << " (" << this->_type << ")";
    std::cout << "> Agrrrr are thos salt buletssss..." << std::endl;
}

void            Zombie::announce()
{
    std::cout << "<" << this->_name << " (" << this->_type << ")";
    std::cout << "> Give me yo Braiiiiiiiiinssss...." << std::endl;
}

std::string     Zombie::getName()
{
    return (this->_name);
}

std::string     Zombie::getType()
{
    return (this->_type);
}
