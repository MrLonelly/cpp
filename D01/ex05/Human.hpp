#ifndef HUMAN_CLASS_H
#define HUMAN_CLASS_H

#include "Brain.hpp"

class   Human
{
    public:
        Human(void);
        ~Human(void);

        std::string identify(void);
        const Brain &getBrain(void);
    private:
        const Brain brain;
};

#endif
