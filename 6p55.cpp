#include <iostream>
#include <vector>

/*
 *
 * 6.54
 *
 *
 */

int summing(int a, int b) {

	return a + b;
}

int subtracting(int a, int b) {

	return a - b;
}

int multiplying(int a, int b) {

	return a * b;
}

int dividing(int a, int b) {

	return a / b;
}

int main () {

	int (*fpfp)(int, int) = summing;
	int (*fpfp1)(int, int) = subtracting;
	int (*fpfp2)(int, int) = multiplying;
	int (*fpfp3)(int, int) = dividing;
	std::cout << fpfp(1, 1) << std::endl;
	std::vector<int(*)(int, int)> funcvec = {fpfp, fpfp1, fpfp2, fpfp3};
	return 0;
}
