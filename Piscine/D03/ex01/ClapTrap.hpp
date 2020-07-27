#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
private:
    /* data */
public:
    ClapTrap();
    ~ClapTrap();

    void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:
    int		nhit_points;
	int		nmax_hitpoints;
	int		nenergy_points;
	int		nmax_energy_points;
	int		nlevel;
	int 	nrange_atack;
	int 	nmelee_atack;
	int 	narmor_damage_reduction;
};

#endif
