#include <iostream>
#include "Harl.h"

int main(int len, char *argv[]) {
	if (len != 2) {
		std::cout << "Expected a single log level argument" << std::endl;
		return 0;
	}
	Harl().complain(argv[1]);
}