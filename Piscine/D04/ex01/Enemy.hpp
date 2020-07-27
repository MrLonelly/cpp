#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy
{
    private:
        // Data
        int                 hp;
        std::string         type;

    public:
        // Constructor - Destructor
        Enemy(int hp, std::string const &type);
        virtual ~Enemy() = 0;

        // Copy constructor
        Enemy(Enemy const &other);

        // Operator overload
        Enemy               &operator=(Enemy const &other);
        
        // Getter - Setter
        std::string         getType() const;
        int                 getHP() const;
        void                setHP(int hp);

        // Public methods
        virtual void        takeDamage(int) = 0;

};

#endif