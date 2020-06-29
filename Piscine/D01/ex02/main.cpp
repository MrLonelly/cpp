#include "ZombieEvent.hpp"

int     main(void)
{
    ZombieEvent event;

    event.setZombieType("mortal");
    Zombie *zombie = event.newZombie("Andrei");
    Zombie *zombie2 = event.newZombie("King");

    event.setZombieType("randomed");
    for (int i = 0; i <= 10; i++)
    {
        event.randomChump();
    }

    delete zombie;
    delete zombie2;
    return (0);
}
