#ifndef HUMANB_CLASS_H
#define HUMNAB_CLASS_H

class   HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB(void);

        void    setWeapon(Weapon weapon);
        void    attack(void);

    private:
        std::string _name;
        Weapon &_weapon;
};

#endif
