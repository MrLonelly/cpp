#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon
{
private:
    // Data
    std::string name;
    int         apcost;
    int         damage;

public:
    // Constructor - Distructor
    AWeapon(std::string const &name, int apcost, int damage);
    ~AWeapon();

    // Copy constructor
    AWeapon(AWeapon const &other);

    // Operator owerload
    AWeapon             &operator=(AWeapon const &other);

    // Getter - Setter
    std::string         getName() const;
    int                 getAPCost() const;
    int                 getDamage() const;
    virtual void        attack() const = 0;
    
};


#endif