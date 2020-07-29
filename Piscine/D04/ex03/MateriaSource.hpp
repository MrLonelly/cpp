#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        // Data
        typedef struct          s_inventory
        {
            AMateria            *spell;
        }                       t_inventory;

        std::string name;
        t_inventory source[4];
        int         count;

    public:
        MateriaSource();
        ~MateriaSource();

        void learnMateria(AMateria*) override;
        AMateria *createMateria(std::string const &type) override;

};

#endif