#ifndef ZOMBIEEVENT_CLASS_H
#define ZOMBIEEVENT_CLASS_H

#include "Zombie.hpp"

class   ZombieEvent
{
    public:
        ZombieEvent(void);
        ~ZombieEvent(void);

        void    setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        void    randomChump(void);

    private:
        std::string _type;
        static std::string _names[10];
};

#endif
