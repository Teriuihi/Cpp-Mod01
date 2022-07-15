#ifndef SED_H
#define SED_H

#include <string>
#include <fstream>

class MySed {
private:
	std::ifstream ifs;
	std::ofstream ofs;
public:
	MySed(const std::string& fileName);
	void replace(const std::string& s1, const std::string& s2);
};


#endif
