#include <iostream>
#include <iterator>
#include <vector>

/*
 *
 * 4.20
 *
 *
 */

int main () {

	std::string s1 = "Wow!";
	std::string s2 = "C++ is very cool, i like it!";
	std::string s3 = "I also really like C!";
	std::vector<std::string> vs;
	vs.push_back(s1);
	vs.push_back(s2);
	vs.push_back(s3);
	std::vector<std::string>::iterator iter = vs.begin();
	std::cout << *iter++ << std::endl;
	std::cout << iter->empty() << std::endl;
	std::cout << iter++->empty() << std::endl;
	/*
	  (a) *iter++; // valid
	  (b) (*iter)++; // not valid? we dereference and try to increment a string which does not work
	  (c) *iter.empty() // not valid, we try to call .empty() member function on an iterator, which does not exist
	  (d) iter->empty(); // valid
	  (e) ++*iter; // not valid, we are dereferencing and then trying to increment a string. I am a bit confused because i thought precedence of the ++ operator would make it increment first and then dereference it but it does not seem so...
	  (f) iter++->empty(); // valid
	 */
	
	return 0;
}
