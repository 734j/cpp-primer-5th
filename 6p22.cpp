#include <iostream>

/*
 *
 * 6.22
 *
 *
 */

void SwapIntPtr(int **p1, int **p2) {

	int *p1tmp = *p1;
	*p1 = *p2;
	*p2 = p1tmp;
}

void SwapIntPtrREF(int *&p1, int *&p2) {

	int *p1tmp = p1;
	p1 = p2;
	p2 = p1tmp;
}

int main () {
	
	int i1 = 10;
	int i2 = 21;
	int i3 = 13213;
	int i4 = 2331;
	int *p1 = &i1;
	int *p2 = &i2;
	int *p3 = &i3;
	int *p4 = &i4;
	std::cout << "p1 " << p1 << "\np2 " << p2 << std::endl;
	SwapIntPtr(&p1, &p2);
	std::cout << "p1 " << p1 << "\np2 " << p2 << std::endl;
	std::cout << "\np3 " << p3 << "\np4 " << p4 << std::endl;
	SwapIntPtrREF(p3, p4);
	std::cout << "p3 " << p3 << "\np4 " << p4 << std::endl;
	return 0;
}
