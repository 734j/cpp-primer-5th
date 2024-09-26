#include <iostream>

/*
 *
 *
 *
 *
 */

class ConstRef {
public:
	friend void Calc_CR_Members(ConstRef &cf);
	ConstRef(int ii): i(ii), ci(ii), ri(i) {};
	void PrintMembers();
	void PrintMembersSPACE() {
		std::cout << i << " " << ci << " " << ri << std::endl;
	}
	std::ostream &PrintMembersSTREAM(std::ostream &pmcout);
	
private:
	int i;
	const int ci;
	int &ri;
};

std::ostream &ConstRef::PrintMembersSTREAM(std::ostream &pmcout) {
	pmcout << i << " " << ci << " " << ri << "\n";
	return pmcout;
}

void ConstRef::PrintMembers() {
	std::cout << i << "\n";
	std::cout << ci << "\n";
	std::cout << ri << std::endl;
}

void Calc_CR_Members(ConstRef &cf) {
	std::cout << cf.i + cf.ci + cf.ri << std::endl;
}

int main () {

	ConstRef cf(1);
	ConstRef cf2(1000);
	cf.PrintMembers();
	cf2.PrintMembers();
	cf.PrintMembersSPACE();
	cf2.PrintMembersSPACE();
	Calc_CR_Members(cf);
	Calc_CR_Members(cf2);
	cf.PrintMembersSTREAM(std::cout);
	cf2.PrintMembersSTREAM(std::cout);
	return 0;
	
}
