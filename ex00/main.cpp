#include "Zombie.h"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main() {
	Zombie *z = newZombie("one");
	z->announce();
	randomChump("two");
	delete z;
	return (0);
}