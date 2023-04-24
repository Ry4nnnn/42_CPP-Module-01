#include "Weapon.hpp"

/* First Contructor function */
Weapon::Weapon() {

}

/* Contructor function */
Weapon::Weapon(std::string type)
{
	_type = type;
}

/*Destructor function */
Weapon::~Weapon() {

}

const std::string &Weapon::getType() const
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}
