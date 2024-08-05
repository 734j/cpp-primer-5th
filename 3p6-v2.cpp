#include <iostream>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.6 v1
 *
 * Stupid pointer version of this exercise because i wanted to.
 * Though i will say, i definitely say we should be using the range for. So much simpler.
 * This version is also way too hard to read especially compared to the other characters.
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
	decltype(&Xer[0]) Character; // make pointer
	for(decltype(Xer.size()) Index = 0 ; Index != Xer.size() ; Index++ ) { // When index is same as Xer.size() we stop the loop
		Character = &Xer[Index]; // Point towards address of character in index
		*Character = 'X'; // replace it with X
	}
	
	cout << Xer << endl;
	return 0;
}
