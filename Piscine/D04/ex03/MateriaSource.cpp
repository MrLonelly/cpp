#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->count = -1;
}

void    MateriaSource::learnMateria(AMateria *m)
{
    this->source[++this->count].spell = m;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for(int i = 0; i <= this->count; i++)
    {
        if(this->source[i].spell->getType() == type)
        {
            return (this->source[i].spell->clone());
        }   
    }

    return (0);
}