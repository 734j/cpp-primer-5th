#include <iostream>
#include <vector>
#include <unistd.h>

/*
 *
 * 5.16
 *
 *
 */

void idiomatic_while(std::vector<int> &idw) {

	int i = 0;
	while(std::cin >> i) {
		idw.push_back(i);
	}
}

void idiomatic_for(std::vector<int> &idf) {

	for(auto a : idf) {
		std::cout << a << std::endl;
	}
}

void nonidiomatic_while(std::vector<int> &nidw) {

	auto iter = nidw.cbegin();
	while(iter != nidw.cend()) {
		std::cout << *iter++ << std::endl;
	}
}

void nonidiomatic_for(std::vector<int> &nidf) {

	int i = 0;
	for( ; std::cin >> i ; ) {
		nidf.push_back(i);
	}
}

int main (int argc, char *argv[]) {
	
	if(argc > 2 || argc < 2) { return -1; }
	std::string argv_s = argv[1];
	std::vector<int> iv1;
	std::vector<int> iv2;
	if(argv_s == "1") {
		idiomatic_while(iv1);
		idiomatic_for(iv1);
	} else if (argv_s == "2") {
		nonidiomatic_for(iv2);
		nonidiomatic_while(iv2);
	}
	
	return 0;
}
