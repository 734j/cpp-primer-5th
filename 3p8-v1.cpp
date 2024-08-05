#include <iostream>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.8 v1
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
	decltype(Xer.size()) Index = 0;
	while(Index != Xer.size()) {
		Xer[Index++] = 'X'; // We can use post increment operator
		//Index++; // Or we can increment it here
		//++Index; // We could also do this
	}

	cout << Xer << endl;
	return 0;
}
