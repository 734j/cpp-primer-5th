#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>
#include <libgen.h>

/*
 *
 * 8.13
 *
 *
 */

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};

int valid(const std::string &nums) {

	if(nums[0] == '1') {
		return 0;
	}
	
	return 1;
}

std::string format(std::string phones) {

	return phones;
}

int main (int argc, char **argv) {

	if(argc < 2 || argc > 2) {
		return -1;
	}

	std::ifstream file(argv[1]);
	if(file.fail()) {
		std::cerr << argv[0] << ": no such file '" << basename(argv[1]) << "'" << std::endl;
		return -1;
	}

	std::string line;
	std::string word;
	std::vector<PersonInfo> people;
	while (getline(file, line)) {
		PersonInfo info;
		std::istringstream record(line);
		record >> info.name; 
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info); 
	}
	
	for (const auto &entry : people) {
		std::ostringstream formatted;
		std::ostringstream badNums;
		for (const auto &nums : entry.phones) {
			if (!valid(nums)) {
				badNums << " " << nums;
			} else
				formatted << " " << format(nums);
		}
		if (badNums.str().empty()) {
			std::cout << entry.name << " "
			   << formatted.str() << std::endl;
		} else {
			std::cerr << "input error: " << entry.name
					  << " invalid number(s) " << badNums.str() << std::endl;
		}
	}
	
	return 0;
}
