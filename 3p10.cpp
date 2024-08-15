#include <iostream>

/*
 *
 * 3.10
 *
 * Not sure if i was supposed to support full sentences with whitespace but i decided to do that because it is a bit nicer.
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
int main () {

	string Phrase;
	if(getline(cin, Phrase)) {
		for(auto &c : Phrase) {
			if(!ispunct(c)) {
				cout << c;
			}
		}
		cout << endl;
	} else {
		cout << "Error!" << endl;
		return -1;
	}
	
	return 0;
}
