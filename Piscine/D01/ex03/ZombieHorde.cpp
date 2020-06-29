#include "ZombieHorde.hpp"

std::string     ZombieHorde::_types[5] = {
    "Unchained",
    "Mortal",
    "Imortal",
    "Legendary",
    "Epic"
};

std::string     ZombieHorde::_names[5] = {
    "Andrei",
    "Ion",
    "Maria",
    "Vasile",
    "Pavalachi"
};

ZombieHorde::ZombieHorde(int n)
{
    this->_zombies = new Zombie[n];
    this->_count = n;

    for (int i = 0; i < n; i++)
    {
        _zombies[i].setType(ZombieHorde::_types[std::rand() % 5]);
        _zombies[i].setName(ZombieHorde::_names[std::rand() % 5]);
    }
};

ZombieHorde::~ZombieHorde(void)
{
    delete [] this->_zombies;
};

void        ZombieHorde::announce(void)
{
    for (int i = 0; i < this->_count; i++)
        _zombies[i].announce();
}
