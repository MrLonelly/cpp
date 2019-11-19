#include "Human.hpp"

#include <iostream>
#include <string>

int     main(void)
{
    Human   bob;

    std::cout << "Human indentity: " << bob.identify() << std::endl;
    std::cout << "Brain identity: " << bob.getBrain().identify() << std::endl;
    return (0);
}
