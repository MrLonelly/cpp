#include <iostream>
#include "Fixed.class.hpp"

int     eval_expr(char *exp)
{
    std::cout << exp << std::endl;
    return (0);
}

int     main(int argc, char **argv)
{
    if(argc <= 1 || argc > 2)
    {
        std::cerr << "Usage: " << argv[0] << " [Expresion]" << std::endl;
    }
    else
    {
        eval_expr(argv[1]);
    }

    return (0);
}