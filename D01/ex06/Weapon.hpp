#ifndef WEAPON_CLASS_H
#define WEAPON_CLASS_H

#include <string>

class   Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon(void);

        const std::string   getType(void);
        void                setType(std::string type);

    private:
        std::string type;
};

#endif
