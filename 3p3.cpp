#include <iostream>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.3
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

	string word;
	getline(cin, word); // Getline does not care about anything except the newline character. If it sees a newline it stops reading.
	cout << word << endl;
	return 0;
}
