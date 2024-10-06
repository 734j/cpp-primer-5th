#include <iostream>
#include <vector>
#include <sstream>

/*
 *
 * 8.11
 *
 *
 */

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};

int main () {

	std::string line;
	std::string word;
	std::vector<PersonInfo> people;
	std::istringstream record;
	while (getline(std::cin, line)) {
		PersonInfo info;
		record.clear(); 
		record.str(line);
		record >> info.name; // read the name
		while (record >> word) {
			info.phones.push_back(word);
		}
		
		people.push_back(info);
	}

	for(const auto &a : people) {
		std::cout << a.name << "\n";
		for(const auto &b : a.phones) {
			std::cout << b << "\n";
		}
	}
	
	return 0;
}
