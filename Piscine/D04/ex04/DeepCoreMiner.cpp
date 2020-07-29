#include "DeepCoreMiner.hpp"

IMiningLaser &DeepCoreMiner::operator=(IMiningLaser const &src)
{
    return (*this);
}

void    DeepCoreMiner::mine(IAstreoid*)
{
    std::cout << "* mining deep ... got RESULT ! *" << std::endl;
}