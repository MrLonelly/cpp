#ifndef ZOMBIEHORDE_CLASS_H
#define ZOMBIEHORDE_CLASS_H

#include "Zombie.hpp"

class   ZombieHorde
{
    public:
        ZombieHorde(int n);
        ~ZombieHorde(void);

        void    setType(std::string type);
        void    announce(void);

    private:
        static std::string  _names[5];
        int                 _count;
        Zombie*             _zombies;
        static std::string  _types[5];
};

#endif
