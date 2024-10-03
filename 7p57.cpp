#include <iostream>

/*
 *
 * 7.57
 *
 *
 */

class Account {
public:
	Account(std::string o, double am): owner(o), amount(am) {}
	Account(std::string o): Account(o, 0) {}
	Account(): Account("John Doe", 0) {}
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);
private:
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate();
};

double Account::initRate() {

	return 1;
}

double Account::interestRate = Account::initRate();

int main () {

	Account a1;
	Account a2("Joe Johnsson");
	Account a3("Manny Manson", 1000);
	std::cout << Account::rate() << std::endl;
	return 0;
}
