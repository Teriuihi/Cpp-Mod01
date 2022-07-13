#include <string>
#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *strPtr = &str;
	std::string &strRef = str;

	std::cout
			<< "str adr:\t" << &str
			<< " str ptr:\t\t" << strPtr
			<< " str ref:\t\t" << &strRef
			<< std::endl;

	std::cout
			<< "str:\t\t" << str
			<< " str ptr val:\t" << *strPtr
			<< " str ref val:\t" << strRef
			<< std::endl;
}