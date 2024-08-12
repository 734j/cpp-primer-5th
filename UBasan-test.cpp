#include <iostream>
#include <vector>
#include "sales_data.hpp"
#include "sales_item.hpp"

/*
 *
 * Found out about UBsanitizer so i just wanted to try it out!
 * Some examples in here that trigger the sanitizer. Obviously not all examples.
 *
 */

int main () {
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int *val = arr + 11;
	std::cout << val << std::endl;
	double a = 10;
	std::cout << "Input a 0: " << std::endl;
	std::cin >> a;
	double b = 10 / a;
	std::cout << b << std::endl;

	int c = 10;
	std::cout << "Input a 0: " << std::endl;
	std::cin >> c;
	int d = 10 / c;
	std::cout << d << std::endl;
	return 0;
}
