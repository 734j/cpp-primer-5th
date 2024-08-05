#include <iostream>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.6 v1
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

    string Xer;
	cout << "Enter a string" << endl;
	cin >> Xer;
	for(auto &c : Xer) { // Make reference for every character in Xer
		c = 'X';
	}
	cout << Xer << endl;
	return 0;
}
