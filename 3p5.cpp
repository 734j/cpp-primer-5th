#include <iostream>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * Description
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

	string full;
	string full_sep;
	//string whitespace(" ");
	string DD;
	while(cin >> DD) {
		full += DD;
		full_sep += DD + ' ';
	}
	cout << full << endl;
	cout << full_sep << endl;
	
	return 0;
}
