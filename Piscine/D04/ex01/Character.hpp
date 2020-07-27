#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
        // Data
        std::string name;
        int         ap;
        AWeapon     *weapon;

    public:
        // Constructor - Destructor
        Character(std::string const &name);
        ~Character();

        // Copy constructor
        Character(Character const &other);

        // Operator overloads
        Character &operator=(Character const &other);

        // Public function
        void    recoverAP();
        void    equip(AWeapon*);
        void    attack(Enemy*);

        // Getter Setter
        std::string getName() const;
        int         getAP() const;
        std::string getState() const;
};

std::ostream     &operator<<(std::ostream &os, Character const &other);

#endif