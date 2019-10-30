#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <string>
#include <iostream>
#define COUNT 11

// Contact class header file

class Contact
{
public:
    Contact(void);
    ~Contact(void);
    void    create(void);
    void    set_field(int i, std::string data);

private:
    static std::string field_name[COUNT];
    std::string fields[COUNT];

};

#endif