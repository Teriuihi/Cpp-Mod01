#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main() {
	Zombie *z = newZombie("one");
	z->announce();
	delete z;
	randomChump("two");
	return (0);
}