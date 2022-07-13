#include <iostream>
#include "Zombie.h"

Zombie::Zombie(const std::string &name) : name(name) {
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Destroyed " << name << std::endl;
}
