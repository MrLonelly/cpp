#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H

#include <iostream>
#include <string>

class   Zombie
{
    private:
        std::string _name;
        std::string _type;
    
    public:
        Zombie(std::string name, std::string type);
        ~Zombie(void);

        std::string getName();
        std::string getType();
        void        announce();
};

#endif
