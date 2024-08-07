#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.14
 *
 * Not exactly according to instructions but still learned from making this.
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
using std::vector;
int main () {

	int n;
	vector<int> vn;
    if(cin >> n) {
		vn.push_back(n);
		while(cin >> n){
			vn.push_back(n);
		}
		
	} else {
		return -1;
	}

	for(auto vni : vn) {
		cout << vni << endl;
	}
	
	return 0;
}
