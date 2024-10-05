#include <iostream>
#include <fstream>
#include <vector>
#include <string>

/*
 *
 * 8.4
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
	
	std::vector<std::string> fvec;
	std::string tmp;
	while(std::getline(file, tmp)) {
		fvec.push_back(tmp);
	}

	for(auto a : fvec) {
		std::cout << a << "\n";
	}

	std::cout << std::ends;
	return 0;
}
