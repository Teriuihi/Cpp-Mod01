#include "MySed.h"
#include <iostream>

MySed::MySed(const std::string& fileName) {
	this->ifs.open(fileName);
	this->ofs.open(fileName + ".replace");
	std::string line;
	if (!ifs.is_open()) {
		std::cout << "Couldn't find file: [" << fileName << "].";
		return;
	}
	if (!ofs.is_open()) {
		std::cout << "Couldn't create file: [" << fileName << ".replace].";
		return;
	}
}

void replace(const std::string &line, const std::string& s1, const std::string& s2) {
	std::string repl;
	int i = 0;
	while (i < line.length()) {
		if (line.length() < i + s1.length()) {
			//TODO handle
		}
		if (line.substr(i, s1.length()) == s1)
		{

		}
	}
}

void MySed::replace(const std::string& s1, const std::string& s2) {
	ifs.clear();
	std::string line;
	while (ifs.good()) {
		ifs >> line;
	}
}


