#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.24
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

    vector<int> VecNumbers;
	int Numbers = 0;	
	while(cin >> Numbers) {
		VecNumbers.push_back(Numbers);
	}
	
	for(auto Iterate = VecNumbers.cbegin() ; Iterate < VecNumbers.cend() ; Iterate += 2) {
		auto First = Iterate;
		auto Second = Iterate + 1;
		cout << *First + *Second << " ";                         
	}

	cout << endl;
	auto vnend = VecNumbers.cend()-1;
	auto vnbeg = VecNumbers.cbegin();
	while(vnbeg <= vnend) {
	    if (vnbeg == vnend) {
			cout << *vnbeg + *vnend << " ";
			break;
		}
		
		cout << *vnbeg + *vnend << " ";
		--vnend;
		++vnbeg;
	}

	cout << endl;
	return 0;
}
