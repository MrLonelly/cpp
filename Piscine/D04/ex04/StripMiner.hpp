#include STRIPMINER_HPP
#define STRIPMINER_HPP

#include "IMiningLaser.hpp"
#include <iostream>

class StripMiner : public IMiningLaser
{
    public:
        StripMiner();
        ~StripMiner();

        StripMiner(IMiningLaser const &src);

        IMiningLaser &operator=(IMiningLaser const &src);

        void    mine(IAsteroid*) override;
};

#endif