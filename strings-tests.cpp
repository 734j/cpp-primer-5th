#include <iostream>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * Description
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

	string s1; // default initialization
	string s2 = s1; // s2 copy from s1
	string s3 = "Hello, World!"; // initialize by copying string literal
	string s4(10, 'a'); // initialize with n copies of a
	string s5 = s3 + s4; // Initialize with s3+s4. Both are combined and copied to s5?
	string s6("Hello, World! (s6)"); // Initialize by copying string literal
	string s7(s3); // s7 is a copy of s3
    cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	cout << s6 << endl;
	cout << s7 << endl;

	int choice = 0;
	cin >> choice;
	if(choice == 1) {
		string input;
		while(cin >> input) { cout << input << " "; }
		
	} else if (choice == 2) {
		string word;
		string::size_type total_len = 0;
		while(getline(cin, word)) {
			if(!word.empty()) {
				total_len += word.size();
				cout << word << endl;
			}
		}
		cout << "Total output amount of characters: " << total_len << endl;
	} else {
		return -1;
	}
	
	return 0;
}
