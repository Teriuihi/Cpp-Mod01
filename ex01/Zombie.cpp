#include <iostream>
#include "Zombie.h"

Zombie::Zombie() {

}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << "Destroyed " << name << std::endl;
}
