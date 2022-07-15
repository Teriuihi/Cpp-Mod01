#include <iostream>
#include "MySed.h"

int main(int len, char *argv[]) {
	if (len != 4) {
		std::cout << "Invalid argument length, expected file name and two strings" << std::endl;
		return (0);
	}
	MySed mySed(argv[1]);
	mySed.replace(argv[2], argv[3]);
	return (0);
}