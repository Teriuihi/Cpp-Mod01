#include <iostream>
#include "HumanA.h"

void HumanA::attack() {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &weapon) : _weapon(weapon), _name(name) {

}
