#include "MySed.h"
#include <iostream>

MySed::MySed(const std::string& fileName) {
	this->ifs.open(fileName);
	if (!ifs.is_open()) {
		std::cout << "Couldn't find file: [" << fileName << "]." << std::endl;
		return;
	}

    this->ofs.open(fileName + ".replace");
	if (!ofs.is_open()) {
		std::cout << "Couldn't create file: [" << fileName << ".replace]." << std::endl;
		return;
	}
}

std::string replaceLine(const std::string &line, const std::string& s1, const std::string& s2) {
	std::string repl;
	int i = 0;
	while (i < line.length()) {
		if (line.length() < i + s1.length())
			break;
		if (line.substr(i, s1.length()) == s1)
		{
			repl += s2;
			i += s1.length();
		}
		repl += (line[i]);
		i++;
	}
	return repl;
}

void MySed::replace(const std::string& s1, const std::string& s2) {
	std::string line;
	ifs.clear();
	while (ifs.good()) {
		getline(ifs, line);
		ofs << replaceLine(line, s1, s2);
		if (ifs.good())
			ofs << std::endl;
	}
}


