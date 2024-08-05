#include <iostream>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * 3.8 v2
 *
 * I think both while and for are viable but i will say the range for is very minimal and nice.
 * My C programmer brain feels more at home using something like a regular for / while loop with subscripts
 * But i do think the range for is nice. It might take a bit of time getting used to using ranged for loops
 * and it might take some time being able to recognise which situations it's best used but i think its a
 * great tool to have either way.
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
	for(decltype(Xer.size()) Index = 0 ; Index != Xer.size() ; ++Index /*or Index++*/) { // Make reference for every character in Xer
		Xer[Index] = 'X'; 
	}
	
	cout << Xer << endl;
	return 0;
}
