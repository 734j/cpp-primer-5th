#include <iostream>

/*
 *
 * 6.38
 *
 *
 */
int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};
auto arrPtr(int i) -> int (&)[5] {

	return (i % 2) ? odd : even;
}

int main () {
	return 0;
}
