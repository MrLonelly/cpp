#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    private:
        typedef struct      s_marine
        {
            ISpaceMarine    *trop;
            struct s_marine *next;
        }                   t_marine;

        t_marine    *trops;
        int         ntrops;
        void        clearTrops(t_marine*);


    public:
        Squad(void);
        Squad(Squad const &other);

        ~Squad(void);
        
        Squad &operator=(Squad const &other);

        int getCount() const override;
        ISpaceMarine*   getUnit(int) const override;
        
        int push(ISpaceMarine*) override;
};

#endif