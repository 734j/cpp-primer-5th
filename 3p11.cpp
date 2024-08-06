#include <iostream>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.11
 *
 * Yes, its legal. We aren't trying to do any write operations to the string.
 * The type for c is const char&
 * Also known as a reference to const char
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
int main () {

	const string s = "Keep out!";
	for (auto &c : s) {
		/* ... */
		cout << c; // I put this cout here so it compiles with the flags i have enabled.
	}
	
	return 0;
}
