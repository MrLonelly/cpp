#include "ZombieHorde.hpp"

int     main(void)
{
    ZombieHorde *army = new ZombieHorde(15);

    army->announce();
    std::cout << "--- Created 15 zombies in ur army ---" << std::endl;
    delete army;
    return (0);
}
