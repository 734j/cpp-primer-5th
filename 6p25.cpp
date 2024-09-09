#include <iostream>

/*
 *
 * 6.25
 *
 *
 */

int main (int argc, char **argv) {

	if (argc < 3 || argc > 3) {
		return -1;
	}

	std::string arg1 = argv[1];
	std::string arg2 = argv[2];
	std::string concated = arg1 + arg2;
	std::cout << concated << std::endl;
	return 0;
}
