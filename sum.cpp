#include <iostream>

/*
 * Sum program in C++
 *
 * Mainly to learn about cin and cout
 *
 * Also learned a bit about << and >> 
 *
 *
 */

int main (void) {

	int num1 = 0;
	int num2 = 0;
	std::cout << "Enter two numbers please" << std::endl; // We send text to 'cout' a so called 'ostream'
	std::cin >> num1 >> num2; // here we read test from 'cin' a so called 'istream'. We put the first input in num1 and 2nd input in num2
	std::cout << "num1: " << num1 // 'cout' same thing here, and these can be multiline which can be nice
			  << " num2: " << num2
			  << "\nYour sum is: damn " << num1+num2
			  << "\nYour product is: damn " << num1*num2 << std::endl;
	
	return 0;
}
