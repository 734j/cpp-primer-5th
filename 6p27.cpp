#include <iostream>

/*
 *
 * 6.27
 *
 *
 */

void initlisttest(std::initializer_list<int> list) {

	int sum = 0;
	for(auto a : list) {
		sum += a;
	}
	std::cout << sum << std::endl;
}

int main () {

	initlisttest({10, 10, 10, 10, 10, 10});
	initlisttest({10, 1});
	initlisttest({2, 2, 2});
	return 0;
}
