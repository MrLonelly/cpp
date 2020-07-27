#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "SC4V-TP constructor" << std::endl;
	this->nhit_points = 100;
	this->nmax_hitpoints = 100;
	this->nenergy_points = 100;
	this->nmax_energy_points = 100;
	this->nlevel = 1;
	this->sname = name;
	this->nrange_atack = 20;
	this->nmelee_atack = 30;
	this->narmor_damage_reduction = 5;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP destructor" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	if(this->nhit_points == 0)
	{
		std::cout << "SC4V-TP " << this->sname << " Can't atack: 0 HP";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "SC4V-TP " << this->sname;
		std::cout << " attacks " << target;
		std::cout << " at range, causing " << this->nrange_atack;
		std::cout << " points of damage!" << std::endl;
	}
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	if(this->nhit_points == 0)
	{
		std::cout <<"SC4V-TP " << this->sname << " Can't attack: 0 HP";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "SC4V-TP " << this->sname;
		std::cout << " attacks " << target;
		std::cout << " at melee, causing " << this->nmelee_atack;
		std::cout << " points of damage!" << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if(this->nhit_points == 0)
		std::cout << "SC4V-TP " << this->sname << "have 0 HP" << std::endl;
	else
	{
		std::cout << "SC4V-TP " << this->sname << " take " << amount - this->narmor_damage_reduction;
		std::cout << " damage" << std::endl;
		this->nhit_points -= (amount - this->narmor_damage_reduction);

		if(this->nhit_points < 0)
			this->nhit_points = 0;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if(this->nhit_points == this->nmax_hitpoints)
	{
		std::cout << "SC4V-TP " << this->sname;
		std::cout << " is fully repaired" << std::endl;
	}
	else
	{
		this->nhit_points += amount;
		if(this->nhit_points > this->nmax_hitpoints)
			this->nhit_points = this->nmax_hitpoints;
	}
}

void    ScavTrap::challengeNewcomer(std::string const &target)
{
    if(this->nenergy_points < 25)
	{
		std::cout << "SC4V-TP " << this->sname << " Don't have energy points" << std::endl;
	}
	else
	{
		this->nenergy_points -= 25;
		int attack = rand() % 5;

		switch (attack)
		{
		    case challenges::classic:
			    std::cout << "SC4V-TP " << this->sname << " chalanges " << target;
                std::cout << " to do a classic chalange" << std::endl;
			    break;
            
            case challenges::agressive:
			    std::cout << "SC4V-TP " << this->sname << " chalanges " << target;
                std::cout << " to do a agressive chalange" << std::endl;
			    break;
            
            case challenges::passive:
			    std::cout << "SC4V-TP " << this->sname << " chalanges " << target;
                std::cout << " to do a passive chalange" << std::endl;
			    break;
            
            case challenges::fast:
			    std::cout << "SC4V-TP " << this->sname << " chalanges " << target;
                std::cout << " to do a fast chalange" << std::endl;
			    break;
            
            case challenges::fake:
			    std::cout << "SC4V-TP " << this->sname << " chalanges " << target;
                std::cout << " to do a fake chalange" << std::endl;
			    break;
            
		}
	}
}