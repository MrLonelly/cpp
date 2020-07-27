#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
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
	std::string sname;
	
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
