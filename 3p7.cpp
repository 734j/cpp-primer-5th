#include <iostream>

/*
 *
 * 3.7
 *
 * Nothing different happens, pretty much same result. Though auto might just be better so we are sure what type it is.
 * Unless the author meant that we were supposed to do char rather than (char&). If we were to just do 'char' type then
 * we wouln't be able to modify the characters in the string, therefore the string remains unchanged.
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
	for(char &c : Xer) { // Make reference for every character in Xer
		c = 'X';
	}
	cout << Xer << endl;
	return 0;
}
