#include <iostream>
#include <vector>

/*
 *
 * 3.21
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

void cout_vector_int_iterator(vector<int> vx) {

	for(auto itr = vx.cbegin() ; itr != vx.cend() ; itr++) {
		cout << "'" << *itr << "'";
	}
	
	cout << endl;
}

void cout_vector_string_iterator(vector<string> vxs) {

	for(auto itr = vxs.cbegin() ; itr != vxs.cend() ; itr++) {
		cout << "'" << *itr << "'";
	}
	
	cout << endl;
}

int main () {

    vector<int> v1; // 0 elements?
	vector<int> v2(10); // 10 elements, default initialized
	vector<int> v3(10, 42); // 10 elements, all initialized to 42
	vector<int> v4{10}; // 1 element, initialized to 10.
	vector<int> v5{10, 42}; // 2 elements, first one 10, second one 42
	vector<string> v6{10}; // Not really valid but it creates 10 elements of default initialized strings. Empty strings.
	vector<string> v7{10, "hi"}; // Not really valid but creates 10 elements that says "hi"
	cout_vector_int_iterator(v1);
	cout_vector_int_iterator(v2);
	cout_vector_int_iterator(v3);
	cout_vector_int_iterator(v4);
	cout_vector_int_iterator(v5);
	cout_vector_string_iterator(v6);
	cout_vector_string_iterator(v7);
	return 0;
}
