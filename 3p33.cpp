#include <iostream>
#include <vector>

/*
 *
 * 3.33
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
int main () {
	/*
	  Because we assume all score clusters to start at a value of 0 when we increment,
	  we need to initialize them with 0 because if we did not then each array element
	  could have any value because it is uninitialized.

	  When we compile the program and run, we can see the uninitialized values get
	  printed.
	 */
	unsigned scores[11];
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			++scores[grade/10];
		}
	}

	for (auto i : scores) {
		cout << i << " ";
	}
	
	cout << endl;
	return 0;
}
