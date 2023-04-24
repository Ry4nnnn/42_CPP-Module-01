#include "HumanB.hpp"

/* Contructor function */
HumanB::HumanB(std::string name) : _weapon(NULL)
{
	_name = name;
}

/* Destructor function */
HumanB::~HumanB()
{

}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}