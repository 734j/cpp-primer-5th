#include <vector>

/*
 *
 * 9.33
 *
 *
 */

int main () {

	/*
	  Iterator invalid. Undefined behavior.
	 */

	std::vector<int> v{1, 2, 3, 4, 5};

	auto begin = v.begin();
	while (begin != v.end()) {
		++begin;
		v.insert(begin, 42);
		++begin;
	}
	return 0;
}
