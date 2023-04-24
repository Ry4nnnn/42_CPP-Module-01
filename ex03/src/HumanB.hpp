#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon& weapon);

	private:
		std::string _name;
		Weapon		*_weapon;
};

#endif