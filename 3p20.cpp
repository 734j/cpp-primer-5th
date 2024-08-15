#include <iostream>
#include <vector>

/*
 *
 * 3.20
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

	for(decltype(VecNumbers.size()) Index = 0 ; Index < VecNumbers.size()-1 ; Index += 2) { // VecNumbers.size() -1 in case the input
		cout << VecNumbers[Index] + VecNumbers[Index + 1] << " ";                           // numbers are odd. It doesnt calculate anything
	}                                                                                       // if it's odd

	cout << endl;
	auto MaxSize = VecNumbers.size()-1;
	decltype(VecNumbers.size()) Index = 0;
	while(Index <= MaxSize) {
	    if (Index == MaxSize) {
			cout << VecNumbers[Index] + VecNumbers[MaxSize] << " ";
			break;
		}
		
		cout << VecNumbers[Index] + VecNumbers[MaxSize] << " ";
		--MaxSize;
		++Index;
	}

	cout << endl;
	return 0;
}
