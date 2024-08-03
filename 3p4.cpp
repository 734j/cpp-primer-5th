#include <iostream>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.4
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

    string word1;
	string word2;
	cin >> word1 >> word2;
	if(word1 == word2) {
		cout << word1 << " and " << word2 << " are equal! " << endl;
	} else if (word1 > word2) {
		cout << word1 << " is larger than " << word2 << endl;
	} else if (word2 > word1) {
		cout << word2 << " is larger than " << word1 << endl;
	}

	string::size_type w1 = word1.size();
	string::size_type w2 = word2.size();
	if(w1 == w2) {
		cout << word1 << " and " << word2 << " have the same length" << endl;
	} else if (w1 > w2) {
		cout << word1 << " has a longer length than " << word2 << endl;
	} else if (w2 > w1) {
		cout << word2 << " has a longer length than " << word1 << endl;
	}
	
	return 0;
}
