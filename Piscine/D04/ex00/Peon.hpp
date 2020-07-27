#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
private:
    // Data

public:
    // Constructor - Destructor
    Peon(std::string name);
    ~Peon();

    // Public methods
    void    getPolymorphed() const override;
};

#endif