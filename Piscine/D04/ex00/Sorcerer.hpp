#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    /* data */
    std::string name, title;

public:

    // Constructor - Destructor
    Sorcerer(std::string name, std::string title);
    ~Sorcerer();

    // Copy constructor
    Sorcerer(Sorcerer const &other);

    // Operator overload
    Sorcerer    &operator=(Sorcerer const &other);

    // Public methods
    void    introduce();
    void    polymorph(Victim const &other) const;

    // Getter and setters
    std::string getName() const;
    std::string getTitle() const;
};

std::ostream     &operator<<(std::ostream &os, Sorcerer const &other);

#endif