#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name );

int main() {
	Zombie *horde = zombieHorde(5, "Zombo");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}