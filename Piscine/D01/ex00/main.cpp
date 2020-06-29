#include "Phony.hpp"
#include <iostream>

void    Phony_on_the_heap()
{
    std::cout << "--- The Phony is on heap ---" << std::endl;
    Phony *phony = new Phony("Andrei");

    std::cout << phony->do_magic() << std::endl;
}

void    Phony_on_the_stack()
{
    std::cout << "--- The Phony is on the stack ---" << std::endl;
    Phony phony = Phony("Razvan");

    std::cout << phony.do_magic() << std::endl;
}

int     main(void)
{
    Phony_on_the_heap();
    Phony_on_the_stack();
    return(0);
}
