#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter
{
    private:
        // Data
        typedef struct          s_inventory
        {
            AMateria            *spell;

        }                       t_inventory;

        std::string name;
        t_inventory inventory[4];
        int         count;

    public:
        Character(std::string const &name);
        ~Character();

        Character(Character const &src);
        
        Character &operator=(Character const &src);

        std::string const &getName() const override;
        AMateria *getSpell(int idx) const;

        void equip(AMateria *m) override;
        void unequip(int idx) override;
        void use(int idx, ICharacter &target) override;
};

#endif