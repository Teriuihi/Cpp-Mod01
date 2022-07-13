#ifndef ZOMBIE_H
#define ZOMBIE_H


#include <string>

class Zombie {
private:
	std::string name;
public:
	Zombie();
	void announce ( void );
	void setName (const std::string& name);

	~Zombie();
};


#endif
