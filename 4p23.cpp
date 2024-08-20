#include <iostream>

/*
 *
 * 4.23
 *
 *
 */

int main () {

	/*
	  
	  Took me a while to figure out
	  was not so sure what the author
	  wanted to achieve. I mean there
	  are several ways we can paranthesize
	  this so it was a little hard to do...
	  
	 */
	
	std::string s = "word";
	std::string pl = s + (s[s.size() - 1] == 's' ? "" : "s") ;
	std::cout << pl << std::endl;
	return 0;
}
