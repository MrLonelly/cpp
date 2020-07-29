#include "Character.hpp"

Character::Character(std::string const &name) : name(name)
{
    this->count = -1;

    for(int i = 0; i  < 4; i++)
        this->inventory[i].spell = nullptr;
}

Character::Character(Character const &src)
{
    this->name = src.getName();

    for(int i = 0; i < 4; i++)
        this->inventory[i].spell = src.getSpell(i);
}

Character &Character::operator=(Character const &src)
{
    this->name = src.getName();

    return (*this);
}

void        Character::equip(AMateria *m)
{
    if(this->count < 3)
    {
        inventory[++this->count].spell = m->clone();
    }
}

void        Character::unequip(int idx)
{
    if(idx >= 0 && idx <= 3 && idx <= count)
    {
        delete this->inventory[idx].spell;
        this->inventory[idx].spell = nullptr;
        for(int i = idx; i < this->count - 1; i++)
        {
            this->inventory[i] = this->inventory[i + 1];
        }

        this->count--;
    }
}

void        Character::use(int idx, ICharacter &target)
{
       AMateria *spell = this->getSpell(idx);
       
       if(spell != nullptr)
       {
           spell->use(target);
       }
}

AMateria *Character::getSpell(int idx) const
{
    if(idx >= 0 && idx <= 3)
        return (this->inventory[idx].spell);
    else
        return (nullptr);
}

std::string const &Character::getName() const
{
    return (this->name);
}
