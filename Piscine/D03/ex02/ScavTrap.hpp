#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>

class   ScavTrap
{

public:
	ScavTrap(std::string name);
	~ScavTrap();

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
    void    challengeNewcomer(std::string const &target);

private:
	int		nhit_points;
	int		nmax_hitpoints;
	int		nenergy_points;
	int		nmax_energy_points;
	int		nlevel;
	std::string sname;
	int 	nrange_atack;
	int 	nmelee_atack;
	int 	narmor_damage_reduction;

    enum    challenges
    {
        classic = 0,
        agressive = 1,
        passive = 2,
        fast = 3,
        fake = 4
    };
};

#endif
