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
    void        create(void);
    std::string getdata(int index);
    std::string getfield(int index);
    void        set_field(int i, std::string data);

private:
    static std::string field_name[COUNT];
    std::string fields[COUNT];

};

#endif