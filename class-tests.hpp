/*
  Made this file mainly to just play around with classes and play around with the features.
  No real use for this code.
 */
#ifndef CLASS_TESTS_HPP
#define CLASS_TESTS_HPP
#include <iostream>
#include <string>
#include <vector>
#include <sys/utsname.h>
#include <time.h>

struct ERROR_RESULT {
	friend class CLASS_TESTS;
private:
	bool fail = false;
	bool partial = false;
	bool success = false;
};

class CLASS_TESTS {
public:
	CLASS_TESTS(): Kernel(""), Distro_OS(""), EnvVarHOME(""), TotalMemoryBytes(0), CurTime(0) { }
	CLASS_TESTS(std::string K, std::string D, std::string H, size_t B, time_t T):
		Kernel(K), Distro_OS(D), EnvVarHOME(H), TotalMemoryBytes(B), CurTime(T){ }
	void print_CT();
	ERROR_RESULT Get_System_Info();
	ERROR_RESULT Get_Errors() { return res; };
	bool isFailed() { return res.fail; }
	bool isPartial() { return res.partial; }
	bool isSuccess() { return res.success; }
private:
	std::string Kernel;
	std::string Distro_OS;
	std::string EnvVarHOME;
	size_t TotalMemoryBytes;
	time_t CurTime;
	ERROR_RESULT res;
};

void CLASS_TESTS::print_CT() {
	std::cout << Kernel << "\n"
			  << Distro_OS << "\n"
			  << EnvVarHOME << "\n"
			  << TotalMemoryBytes << "\n"
			  << CurTime << std::endl;
}

ERROR_RESULT CLASS_TESTS::Get_System_Info() {

	struct utsname gsi;
	if(uname(&gsi) == -1) {
		res.fail = true;
		return res;
	}
	
	Kernel = gsi.sysname;
	Distro_OS = gsi.release;
	char *r = std::getenv("HOME");
	if(r == NULL) {
		res.fail = false;
		res.partial = true;
		return res;
	}
	
	EnvVarHOME = r;
	CurTime = time(NULL);
	if(CurTime == -1) {
		res.partial = true;
	}

	TotalMemoryBytes = 4096;
	res.partial = false;
	res.success = true;
	return res;
}

#endif
