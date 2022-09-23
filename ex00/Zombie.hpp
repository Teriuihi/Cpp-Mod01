#ifndef ZOMBIE_H
#define ZOMBIE_H


#include <string>

class Zombie {
private:
	std::string name;
public:
	Zombie(const std::string &name);
	void announce ( void );

	~Zombie();
};


#endif
