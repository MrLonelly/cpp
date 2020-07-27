#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
private:
    /* data */
    std::string name;

public:

    // Constructor - Destructor
    Victim(std::string name);
    ~Victim();

    // Copy constructor
    Victim(Victim const &other);

    // Operator overload
    Victim    &operator=(Victim const &other);

    // Public methods
    void    introduce();
    virtual void    getPolymorphed() const;

    // Getter and setters
    std::string getName() const;
};

std::ostream     &operator<<(std::ostream &os, Victim const &other);

#endif