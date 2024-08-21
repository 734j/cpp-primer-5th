#include <iostream>

/*
 *
 * 4.28
 *
 *
 */

int main () {

	std::cout << "void " << sizeof(void*) << std::endl;
	std::cout << "nullptr_t " << sizeof(std::nullptr_t) << std::endl;
	std::cout << "bool " << sizeof(bool) << std::endl;
	std::cout << "char " << sizeof(char) << std::endl;
	std::cout << "uchar " << sizeof(unsigned char) << std::endl;
	std::cout << "schar " << sizeof(signed char) << std::endl;
	std::cout << "si " << sizeof(short int) << std::endl;
	std::cout << "i " << sizeof(int) << std::endl;
	std::cout << "li " << sizeof(long int) << std::endl;
	std::cout << "lli " << sizeof(long long int) << std::endl;
	std::cout << "usi " << sizeof(unsigned short int) << std::endl;
	std::cout << "ui " << sizeof(unsigned int) << std::endl;
	std::cout << "uli " << sizeof(unsigned long int) << std::endl;
	std::cout << "ulli " << sizeof(unsigned long long int) << std::endl;
	std::cout << "wchar " << sizeof(wchar_t) << std::endl;
	std::cout << "char16 " << sizeof(char16_t) << std::endl;
	std::cout << "char32 " << sizeof(char32_t) << std::endl;
	std::cout << "float " << sizeof(float) << std::endl;
	std::cout << "double " << sizeof(double) << std::endl;
	std::cout << "long double " << sizeof(long double) << std::endl;
	return 0;
}
