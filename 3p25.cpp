#include <iostream>
#include <vector>

/*
 *
 * 3.25
 *
 * Just a note to myself, i first finished this
 * exercise by making a begin variable and also a temporary
 * variable and incrementing on the temporary one, but
 * of course you can just do everything directly which
 * created this ugly thing ++*(scores.begin() + grade / 10);
 * A bit difficult to read, and i do wonder if its faster
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

	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			++*(scores.begin() + grade / 10);
		}
	}

	for(auto i : scores) {
		cout << i << " ";
	}

	cout << endl;
	return 0;
}
