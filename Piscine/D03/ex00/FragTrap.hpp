#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>

class   FragTrap
{

public:
	FragTrap(std::string name);
	~FragTrap();

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int		vaulthunter_dot_exe(std::string const &target);

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
	
	enum	attacks
	{
		classic = 0,
		voyajer = 1,
		critical = 2,
		modern = 3,
		royal = 4
	};
};

#endif
