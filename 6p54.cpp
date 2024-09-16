#include <iostream>
#include <vector>

/*
 *
 * 6.54
 *
 *
 */

int summing(int a, int b) {

	return a+b;
}

int main () {

	int (*fpfp)(int, int) = summing;
	int (*fpfp1)(int, int) = summing;
	int (*fpfp2)(int, int) = summing;
	int (*fpfp3)(int, int) = summing;
	std::cout << fpfp(1, 1) << std::endl;
	std::vector<int(*)(int, int)> funcvec = {fpfp, fpfp1, fpfp2, fpfp3};
	return 0;
}
