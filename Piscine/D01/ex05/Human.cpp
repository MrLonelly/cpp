#include "Human.hpp"

Human::Human(void) {};
Human::~Human(void) {};

const Brain   &Human::getBrain(void)
{
    return (this->brain);
}

std::string     Human::identify(void)
{
    return (this->brain.identify());
}
