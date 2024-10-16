#include <iostream>
#include <list>
#include <forward_list>

/*
 *
 * 9.31
 *
 * A lot of comments here but i had to do it to clear it up in my head
 */

int main () {

	std::list<int> vi = {0,1,2,3,4,5,6,7,8,9};
	auto iter = vi.begin(); // get begin
	while (iter != vi.end()) { // when begin is not at the end
		if (*iter % 2 == 1) { // when it's odd
			iter = vi.insert(iter, *iter); // insert whatever is at *iter before iter and return iterator where the new value was inserted
			
			++iter; // advance past what was inserted
			++iter; // advance past the element we checked for odd/even(ness)
		} else // when even
			iter = vi.erase(iter); // remove the even value, return iterator to element after the erased element
	}

	std::forward_list<int> fli = {0,1,2,3,4,5,6,7,8,9};
	auto beg = fli.begin(); // get begin
	auto bbeg = fli.before_begin(); // get before begin
	while (beg != fli.end()) { // while beg is not at the end
		if (*beg % 2 == 1) { // when odd
			bbeg = fli.insert_after(bbeg, *beg); // insert *beg after bbeg, returns iterator to inserted element
			++beg; // advance beg to next element to be checked
			++bbeg; // advance bbeg to follow beg one value behind
		} else // when it's even
			beg = fli.erase_after(bbeg); // erase element after bbeg (the one at beg). Returns iterator to element after erased one (aka next one to be checked)
	}

	for(auto &a : vi) {
		std::cout << a << std::endl;
	}
	
	for(auto &a : fli) {
		std::cout << a << std::endl;
	}
	
	return 0;
}
