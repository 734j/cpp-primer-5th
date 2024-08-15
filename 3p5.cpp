#include <iostream>

/*
 *
 * 3.5
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
	string DD;
	while(cin >> DD) {
		full += DD;
		full_sep += DD + ' ';
	}
	cout << full << endl;
	cout << full_sep << endl;
 
	return 0;
}
