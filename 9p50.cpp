#include <iostream>
#include <vector>
#include <string>

/*
 *
 * 9.50
 *
 *
 */

int64_t string_to_int64(const std::vector<std::string> vstr){

	int64_t sum{0};
	for(auto &a : vstr) {
		sum += std::stoll(a);
	}
	
	return sum;
}

double string_to_double(const std::vector<std::string> vstr){

	double sum{0};
	for(auto &a : vstr) {
		sum += std::stod(a);
	}
	
	return sum;
}

int main () {

	std::vector<std::string> vstr1{"100", "92", "224", "2", "90", "64", "42"};
	std::vector<std::string> vstr2{"0.34", "33.5324", "9924.2119", "0.00243", "10.23"};
	std::cout << string_to_int64(vstr1) << "\n"
			  << string_to_double(vstr2) << std::endl;
	return 0;
}
