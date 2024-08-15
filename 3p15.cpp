#include <iostream>
#include <vector>

/*
 *
 * 3.15
 *
 * Not completely according to instructions but thats okay. I still learned creating this.
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
using std::vector;
int main () {

    string phrase;
	vector<string> vp;
	while(getline(cin, phrase)) {
		vp.push_back(phrase);
	}

	for(auto vpi : vp) {
		cout << vpi << endl;
	}
	
	return 0;
}
