#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    private:
        // Data
        unsigned int xp;
        std::string type;
    
    public:
        AMateria(std::string const &type);
        ~AMateria();

        AMateria(AMateria const &src);

        AMateria &operator=(AMateria const &src);

        std::string const &getType() const;
        unsigned int    getXP() const;

        virtual AMateria *clone() = 0;
        virtual void use(ICharacter& target);
};

#endif