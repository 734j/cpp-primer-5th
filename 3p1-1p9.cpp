#include <iostream>

/*
 *
 * 3.1, 1.9
 *
 *
 */

using std::cout;
using std::cin;
using std::endl;
int main () {

	int i = 50;
	int sum = 0;
	while(i <= 100) {
		sum += i;
		i++;
	}

	cout << sum << endl;
	return 0;
}
