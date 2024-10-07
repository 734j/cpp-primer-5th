#include <iostream>
#include <list>

/*
 *
 * 9.6
 *
 *
 */

int main () {
	
	std::list<int> lst1;
	std::list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
	while (iter1 != iter2) {
		
	}

	// Maybe it is a bit cheating but when compiling this code, there seems to be no '<' operators for the list container.
	// Correct it by giving it the condition above
	return 0;
}
