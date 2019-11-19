#include <string>
#include <iostream>

int     main(void)
{
    std::string     init = "HI THIS IS BRAIN";

    std::string*    initP = &init;
    std::string&    initPR = *initP;

    std::cout << "Show the string throw the pointer: " <<  *initP << std::endl;
    std::cout << "Show the string throw the reference: " << initPR << std::endl;
    return (0);
}
