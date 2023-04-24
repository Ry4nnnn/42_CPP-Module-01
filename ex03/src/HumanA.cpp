#include "HumanA.hpp"

/* Constructor function */
HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
	_name = name; 
}


/* Destructor function */
HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}