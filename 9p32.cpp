#include <vector>
#include <iostream>

/*
 *
 * 9.32
 *
 * Seems very much illegal, at least when using g++. But when compiling with clang++ it seems like it just works... What?
 *
 * After breaking out gdb and debugging both the clang++ and g++ program it seems like both compilers do different things
 * g++ increments the iterator, clang++ (maybe does?) does not increment the iterator.
 */

int main () {

	std::vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
	auto iter = vi.begin();
	while (iter != vi.end()) {
		if (*iter % 2) {
			iter = vi.insert(iter, *iter++);
			iter += 2;
		} else
			iter = vi.erase(iter);
	}

	for(auto &a : vi) {
		std::cout << a << std::endl;
	}
	
	return 0;
}
