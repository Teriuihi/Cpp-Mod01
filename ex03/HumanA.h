#ifndef HUMAN_H
#define HUMAN_H

#include "Weapon.h"

class HumanA {
private:
	Weapon& _weapon;
	std::string _name;
public:
	HumanA(const std::string &name, Weapon &weapon);

	void attack();
};


#endif
