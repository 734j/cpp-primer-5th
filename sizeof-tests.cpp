#include <iostream>
#include <vector>
#include <cstdint>

/*
 *
 *
 *
 *
 */

int main () {

	std::vector<int> iv1;
	std::vector<int> iv2 = {1,2,3,4,5,6,7,8,9,10};
	std::vector<std::string> sv1;
	std::vector<std::string> sv2;
	std::string ss0;
	std::string ss1 = "Hello, World!";
	std::string ss2 = "Hello, World!";
	std::string ss3 = "Hello, World!";
	std::string ss4 = "Hello, World!";
	std::string ss5 = "Hello, World!";
	sv2.push_back(ss1);
	sv2.push_back(ss2);
	sv2.push_back(ss3);
	sv2.push_back(ss4);
	sv2.push_back(ss5);
	char *p = nullptr;
	char aa[10];
	std::cout << "ss0 " << sizeof(ss0) << std::endl;
	std::cout << "ss1 " << sizeof(ss1) << std::endl;
	std::cout << "sv1 " << sizeof(sv1) << std::endl;
	std::cout << "sv2 " << sizeof(sv2[0]) << std::endl;
	std::cout << "iv1 " << sizeof(iv1) << std::endl;
	std::cout << "iv2[0] " << sizeof(iv2[0]) << std::endl;
	std::cout << "char " << sizeof(char) << std::endl;
	std::cout << "int " << sizeof(int) << std::endl;
	std::cout << "int32_t " << sizeof(int32_t) << std::endl;
	std::cout << "long " << sizeof(long) << std::endl;
	std::cout << "long long " << sizeof(long long) << std::endl;
	std::cout << "int64_t " << sizeof(int64_t) << std::endl;
	std::cout << "uint64_t " << sizeof(uint64_t) << std::endl;
	std::cout << "*aa " << sizeof(*aa) << std::endl;
	std::cout << "aa " << sizeof(aa) << std::endl;
	std::cout << "*p " << sizeof(*p) << std::endl;
	std::cout << "p " << sizeof(p) << std::endl;
	int iii[100];
	int *ip = iii;
	std::cout << "iii " << sizeof(iii) << std::endl;
	std::cout << "ip " << sizeof(ip) << std::endl;
	std::cout << "*ip " << sizeof(*ip) << std::endl;
	std::cout << "iii[0] " << sizeof(iii[0]) << std::endl;
	std::cout << "&iii " << &iii << std::endl;
	std::cout << "&iii[0] " << &iii[0] << std::endl;
	std::cout << "ip " << ip << std::endl;
	std::cout << "&(*ip) " << &(*ip) << std::endl;
	std::cout << "&ip[0] " << &ip[0] << std::endl;
	return 0;
}
