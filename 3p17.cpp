#include <iostream>
#include <vector>
#include <cctype>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.17
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

    string word;
	vector<string> v_words;
	while(cin >> word) {
		v_words.push_back(word);		
	}
	
	for(auto &i : v_words) {
		for(auto &c : i) {
			c = toupper(c);
		}
	}

	decltype(v_words.size()) cnt = 0;
	for(auto vww : v_words) {
		if(cnt >= 8) {
			cout << endl;
			cnt = 1;
		} else {
			++cnt;
		}
		cout << vww << " ";
	}

	cout << endl;
	return 0;
}
