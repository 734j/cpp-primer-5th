#include <iostream>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.2 v1
 *
 *
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
int main () {

	string line;
	while(getline(cin, line)) {
		if(!line.empty()) {
			cout << line << endl;
		}
	}
	
	return 0;
}
