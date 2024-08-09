#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * Needed to test this program because i was
 * confused about the condition in the for loop.
 *
 * Also some notes to get some things straight in my head
 */

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
using std::vector;
int main () {

	string s = "hello";
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
		*it = toupper(*it); // capitalize the current character
	}
	// BOTH need to be true for the loop to continue
	cout << s << endl;

	// print each line in text up to the first blank line
	vector<string> text;
	string s1 = "hello!";
	string s2 = "hello vro";
	string s3 = "ffffff";
	string s4;
	string s5 = "yo";
	text.push_back(s1);
	text.push_back(s2);
	text.push_back(s3);
	text.push_back(s4);
	text.push_back(s5);
	for (auto it = text.cbegin() ; // Get the beginning element
		 it != text.cend() && !it->empty() ; ++it) { /* loop stops when we hit the end or if theres an empty string.
														we do this by accessing the method empty() through the arrow operator
													  */
		cout << *it << endl;
		cout << it->at(0) << endl; // To access the individual characters in the strings in the vector we use at() method
		cout << (*it)[0] << endl; // We can also do it this way.
	}

	/*
	  Example for myself:
	  we try to access method in dereferenced s1.empty()
	  but because we are dereferencing and accessing method at the same time we have a special operator
	  -> dereference while also accessing a member
	 */
	
	/*
	  'it' is a const iterator which is (kind of) a pointer? Kinda?
	  It points towards the first element (cbegin()). Which is a string.
	  But we want to use methods from the string class. So we have to use the
	  arrow operator to access that method.

	  I've used C before so i am a bit familiar with using the arrow operator
	  in structs. Though i will say that this does feel a bit different because
	  classes in this language dont just have data types in the structs but also
	  methods so yeah i guess it makes sense that we use the -> arrow operator
	  to access those methods. If we were to access a method but directly on a string
	  (not through a pointer / iterator) then yeah we would be using the . operator.

	  So i guess this all makes sense. I just had to write this text to get everything
	  clear in my head
	 */
	return 0;
}
