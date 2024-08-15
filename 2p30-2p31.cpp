#include <iostream>

/*
 *
 * 2.30, 2.31
 *
 *
 */

int main () {
	//int i;
	//const int v2 = 0; // top level ??
	//int v1 = v2;
	//int *p1 = &v1, &r1 = v1;
	//const int *p2 = &v2, *const p3 = &i, &r2 = v2; // p2 low level
	                                               // p3 top level ?? and low level??
	                                               // r2 low level ?
	//r1 = v2; low level
	//p1 = p2; low level?
	//p1 = p3; no?
	//p2 = p1; ok?
	//p2 = p3; ok?
	int v1 = 2;
	const int v2 = 0;
	int &r = v1;
	r = v2;
	std::cout << r << std::endl;
	return 0;
}
