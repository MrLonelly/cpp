#include "Enemy.hpp"

// Constructor - Destructor
Enemy::Enemy(int hp, std::string const &type): hp(hp), type(type){};

// Copy constructor
Enemy::Enemy(Enemy const &other)
{
    this->hp = other.getHP();
    this->type = other.getType();
}

Enemy::~Enemy(){};

// Operator overload
Enemy &Enemy::operator=(Enemy const &other)
{
    this->hp = other.getHP();
    this->type = other.getType();

    return (*this);
}

// Getter - Setter
std::string     Enemy::getType() const
{
    return (this->type);
}

int             Enemy::getHP() const
{
    return (this->hp);
}

void            Enemy::setHP(int hp)
{
    if(hp > 0)
        this->hp = hp;
    else
        this->hp = 0;
}