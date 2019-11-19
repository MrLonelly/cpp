#include "Phony.hpp"

Phony::Phony(std::string name)
{
    this->name = name;
}

Phony::~Phony(void) {};

std::string     Phony::get_name(void)
{
    return (this->name);    
}

std::string     Phony::do_magic(void)
{
    return (this->name + " now can do magic");
}
