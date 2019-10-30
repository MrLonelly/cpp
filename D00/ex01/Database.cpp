#include "Database.hpp"

Database::Database(void)
{
    contacts = 0;
}

Database::~Database(void) {};

void    Database::add_contact(Contact c)
{
    this->c[contacts] = c;
    this->contacts++;
}

void    Database::list(void)
{
    std::cout << "Will do output latter" << std::endl;
}


Contact Database::get_contact(int index)
{
    if(!(index > 7 || index < 0))
        return (this->c[index]);
}

int     Database::get_size()
{
    return (this->contacts);
}