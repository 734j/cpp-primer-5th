#include <iostream>
#include <vector>

/*
 *
 * 3.22
 *
 * I'll be honest. I actually have no idea what i was supposed to do in this exercise.
 * So i just made it so the program toupper's all the strings until a blank string is encountered
 * Everything after the blank string is not processed or printed.
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
using std::vector;

int main () {

	vector<string> text;
	string s1;
	while(getline(cin, s1)) {
		text.push_back(s1);
	}

	for(auto vi = text.begin() ; vi != text.end() && !vi->empty() ; vi++) {
		for(auto &cc : *vi) {
			cc = toupper(cc);
		}
	}

	for (auto it = text.cbegin() ; it != text.cend() && !it->empty() ; ++it) {
		cout << *it << endl;
	}
	
	return 0;
}
