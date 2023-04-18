#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "contructor Called" << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << name << ": Zombie Created" << std::endl;
	_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << _name << ": Destructor Called" << std::endl;
}

/*a function that announce itself*/
void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
