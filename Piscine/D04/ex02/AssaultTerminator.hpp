#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
    private:

    public:
        AssaultTerminator(void);
        ~AssaultTerminator(void);

        AssaultTerminator(AssaultTerminator const &other);
        AssaultTerminator &operator=(AssaultTerminator const &other);

        ISpaceMarine    *clone() const override;
        void            battleCry() const override;
        void            rangedAttack() const override;
        void            meleeAttack() const override;
};

#endif