#ifndef DATABASE_CLASS_H
#define DATABASE_CLASS_H

#include "Contact.hpp"

class Database
{
private:
    Contact c[8];
    int     contacts;

public:
    Database(void);
    ~Database();
    void    add_contact(Contact c);
    void    create(void);
    void    display(std::string field);
    void    show(int i);
    void    list(void);
    int     get_size();
};

#endif