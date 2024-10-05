#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/*
 *
 * 8.5
 *
 *
 */

int main (int argc, char **argv) {

	if(argc < 2 || argc > 2) {
		return 1;
	}

	std::ifstream file(argv[1]);
	if(file.fail()) {
		return 1;
	}

	std::vector<std::string> svec;
	std::string tmp;
	while(file >> tmp) {
		svec.push_back(tmp);
	}

	for(auto a : svec) {
		std::cout << a << "\n";
	}

	std::cout << std::ends;
	return 0;
}
