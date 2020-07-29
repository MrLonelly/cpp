#include DEEPCOREMINER_HPP
#define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"
#include <iostream>

class DeepCoreMiner : public IMiningLaser
{
    public:
        DeepCoreMiner();
        ~DeepCoreMiner();

        DeepCoreMiner(IMiningLaser const &src);

        IMiningLaser &operator=(IMiningLaser const &src);

        void    mine(IAsteroid*) override;
};

#endif