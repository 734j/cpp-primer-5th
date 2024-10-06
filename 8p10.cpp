#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

/*
 *
 * 8.10
 *
 *
 */

int main (int argc, char **argv) {

	if(argc < 2 || argc > 2) {
		return -1;
	}

	std::ifstream file(argv[1]);
	if(file.fail()) {
		std::cerr << argv[0] << ": cannot open file  '" << argv[1] << "'" << std::endl;
		return -1;
	}

	std::vector<std::string> all_lines;
	std::string cur_line;
	while(getline(file, cur_line)) {
		all_lines.push_back(cur_line);
	}

	for(auto &ref_all_lines : all_lines) {
		std::istringstream is(ref_all_lines);
		std::string is_tmp;
		while(is >> is_tmp) {
			std::cout << is_tmp << "\n";
		}
	}
	
	std::cout << std::ends;
	return 0;
}
