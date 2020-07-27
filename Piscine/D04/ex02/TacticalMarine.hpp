#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
    private:

    public:
        TacticalMarine(void);
        ~TacticalMarine(void);

        TacticalMarine(TacticalMarine const &other);
        TacticalMarine &operator=(TacticalMarine const &other);

        ISpaceMarine    *clone() const override;
        void            battleCry() const override;
        void            rangedAttack() const override;
        void            meleeAttack() const override;
};

#endif