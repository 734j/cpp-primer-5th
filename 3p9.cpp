#include <iostream>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.9
 *
 * Program does compile but not sure if valid. It has a size of 0 so its probably undefined behavior.
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
int main () {

	string s;
	auto Size = s.size();
	cout << Size << endl;
	cout << s[0] << endl;
	return 0;
}
