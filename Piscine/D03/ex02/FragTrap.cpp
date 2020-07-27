#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	std::cout << "FR4G-TP constructor" << std::endl;
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

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP destructor" << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	if(this->nhit_points == 0)
	{
		std::cout << "FR4G-TP " << this->sname << " Can't atack: 0 HP";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->sname;
		std::cout << " attacks " << target;
		std::cout << " at range, causing " << this->nrange_atack;
		std::cout << " points of damage!" << std::endl;
	}
}

void	FragTrap::meleeAttack(std::string const &target)
{
	if(this->nhit_points == 0)
	{
		std::cout <<"FR4G-TP " << this->sname << " Can't attack: 0 HP";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->sname;
		std::cout << " attacks " << target;
		std::cout << " at melee, causing " << this->nmelee_atack;
		std::cout << " points of damage!" << std::endl;
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if(this->nhit_points == 0)
		std::cout << "FR4G-TP " << this->sname << "have 0 HP" << std::endl;
	else
	{
		std::cout << "FR4G-TP " << this->sname << " take " << amount - this->narmor_damage_reduction;
		std::cout << " damage" << std::endl;
		this->nhit_points -= (amount - this->narmor_damage_reduction);

		if(this->nhit_points < 0)
			this->nhit_points = 0;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if(this->nhit_points == this->nmax_hitpoints)
	{
		std::cout << "FR4G-TP " << this->sname;
		std::cout << " is fully repaired" << std::endl;
	}
	else
	{
		this->nhit_points += amount;
		if(this->nhit_points > this->nmax_hitpoints)
			this->nhit_points = this->nmax_hitpoints;
	}
}

int		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if(this->nenergy_points < 25)
	{
		std::cout << "FR4G-TP " << this->sname << " Don't have energy points" << std::endl;
		return (-1);
	}
	else
	{
		this->nenergy_points -= 25;
		int attack = rand() % 5;

		switch (attack)
		{
			case attacks::classic:
				std::cout << "FR4G-TP " << this->sname << ": Classic attack with ";
				std::cout << attacks::classic + this->nrange_atack << " damage to" << target;
				std::cout << std::endl;
				break;
			case attacks::voyajer:
				std::cout << "FR4G-TP " << this->sname << ": Classic attack with ";
				std::cout << attacks::voyajer + this->nrange_atack << " damage to" << target;
				std::cout << std::endl;
				break;
			case attacks::critical:
				std::cout << "FR4G-TP " << this->sname << ": Classic attack with ";
				std::cout << attacks::critical + this->nrange_atack << " damage to" << target;
				std::cout << std::endl;
				break;
			case attacks::modern:
				std::cout << "FR4G-TP " << this->sname << ": Classic attack with ";
				std::cout << attacks::modern + this->nrange_atack << " damage to" << target;
				std::cout << std::endl;
				break;
			case attacks::royal:
				std::cout << "FR4G-TP " << this->sname << ": Classic attack with ";
				std::cout << attacks::royal + this->nrange_atack << " damage to" << target;
				std::cout << std::endl;
				break;
		}
		return attack;
	}
}