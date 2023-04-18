#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Contructor Called" << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << name << ": Zombie Created" << std::endl;
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

void Zombie::add_name(std::string name)
{
	_name = name;
}