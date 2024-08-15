#include <iostream>
#include <vector>

/*
 *
 * 3.28
 *
 *
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
using std::vector;

string sa[10]; // Default initialized strings
int ia[10]; // ints with 0
int main() {

	string sa2[10]; // Default initialized strings
	//int	ia2[10]; // Unititialized, UB

	cout << sa[0] << "|" << ia[0] << "|" << sa2[0] << endl;
	return 0;
}
