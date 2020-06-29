#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H

#include <string>
#include <cstdlib>
#include <iostream>

class   Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);

        void        setName(std::string name);
        void        setType(std::string type);
        void        announce();

    private:
        std::string _name;
        std::string _type;
};

#endif
