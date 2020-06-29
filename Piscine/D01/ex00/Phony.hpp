#ifndef PHONY_CLASS_H
#define PHONY_CLASS_H

#include <string>

class   Phony
{
    private:
        std::string name;
    public:
        Phony(std::string name);
        ~Phony(void);
        std::string    get_name();
        std::string    do_magic();
};

#endif
