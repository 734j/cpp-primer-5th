#include <iostream>
#include <sstream>
#include <string>
#include <vector>

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};

int main () {

	std::string line, word; // will hold a line and word from input, respectively
	std::vector<PersonInfo> people; // will hold all the records from the input
	// read the input a line at a time until cin hits end-of-file (or another error)
	while (getline(std::cin, line)) {
		PersonInfo info;
		// create an object to hold this record’s data
		std::istringstream record(line); // bind record to the line we just read
		record >> info.name; // read the name
		while (record >> word)
			// read the phone numbers
			info.phones.push_back(word); // and store them
		people.push_back(info); // append this record to people
	}

	for(auto &a : people) {
		std::cout << a.name << "\n";
		for(auto &b : a.phones) {
			std::cout << b << "\n";
		}
	}
 return 0;
}
