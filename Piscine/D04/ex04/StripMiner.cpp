#include "StripMiner.hpp"

IMiningLaser &StripMiner::operator=(IMiningLaser const &src)
{
    return (*this);
}

void    StripMiner::mine(IAstreoid*)
{
    std::cout << "* strip deep ... got RESULT ! *" << std::endl;
}