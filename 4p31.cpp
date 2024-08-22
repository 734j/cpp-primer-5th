#include <iostream>
#include <vector>

/*
 *
 * 4.31
 *
 * There is no difference, because what is returned is discarded.
 * ++ix and --cnt is technically better because we return nothing
 * but there isnt a difference because both programs do the same thing.
 */

int main () {
	
	std::vector<int> ivec(10);
	std::vector<int>::size_type cnt = ivec.size();
	for(std::vector<int>::size_type ix = 0 ; ix != ivec.size() ; ix++, cnt--) {
		ivec[ix] = cnt;
	}

	for(auto a : ivec) {
		std::cout << a << std::endl;
	}
	
	return 0;
}
