#include <iostream>
#include <vector>

/*
 *
 * 9.40
 *
 *
 */

int main () {

	/*
	  256 words = 1024
	  512 words = 1024
	  1000 words = 2000
	  1048 words = 2048
	 */
	
	std::vector<std::string> svec;
	svec.reserve(1024);
	std::string word;
	while (std::cin >> word) {
		svec.push_back(word);
	}
	
	svec.resize(svec.size()+svec.size()/2);
	std::cout << svec.capacity() << std::endl;
	return 0;
}
