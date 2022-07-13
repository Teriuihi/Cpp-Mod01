#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

class HumanB {
private:
	Weapon* _weapon;
	std::string _name;
public:
	HumanB(const std::string& name);
	void attack();

	void setWeapon(Weapon& weapon);
};


#endif
