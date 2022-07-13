#include <iostream>
#include "HumanB.h"

HumanB::HumanB(const std::string &name)
				: _name(name) {
	_weapon = nullptr;
}

void HumanB::attack() {
	if (_weapon == nullptr)
		std::cout << _name << " attacks with their fists" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}
