#include "ZombieEvent.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent(void) {};
ZombieEvent::~ZombieEvent(void) {};

std::string     ZombieEvent::_names[10] = {
    "Marcu",
    "Liviu",
    "Andrei",
    "Pavalachi",
    "Andrei the zombie",
    "Pavalachi the zombie",
    "Bob the hacker",
    "HackTheZombies",
    "ZombieCTF",
    "Darth Zombieder"
};

void            ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}

Zombie*         ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, this->_type));
}

void            ZombieEvent::randomChump(void)
{
    DIR             *dirp;
    Zombie z = Zombie(ZombieEvent::_names[std::rand() % 10], this->_type);
}
