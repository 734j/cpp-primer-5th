#include <iostream>

/*
 *
 * 7.53
 *
 *
 */

class Debug {
public:
	constexpr Debug(): hardware(false), inputoutput(false), other(false) {}
	constexpr Debug(bool a, bool b, bool c): hardware(a), inputoutput(b), other(c) {}
	constexpr void SetHW(bool a) { hardware = a; }
	constexpr void SetIO(bool a) { inputoutput = a; }
	constexpr void SetO(bool a) { other = a; }
	constexpr bool GetHW() const { return hardware; }
	constexpr bool GetIO() const { return inputoutput; }
	constexpr bool GetO() const { return other; }
private:
	bool hardware;
	bool inputoutput;
	bool other;
};

int main () {

	Debug D1;
	Debug Derrors(true, true, true);
	std::cout << D1.GetHW() << " " << D1.GetIO() << " " << D1.GetO() << std::endl;
	D1.SetHW(true);
	std::cout << D1.GetHW() << " " << D1.GetIO() << " " << D1.GetO() << std::endl;
	std::cout << Derrors.GetHW() << " " << Derrors.GetIO() << " " << Derrors.GetO() << std::endl;
	D1 = Derrors;
	std::cout << D1.GetHW() << " " << D1.GetIO() << " " << D1.GetO() << std::endl;
	constexpr Debug D2(true, false, true);
	std::cout << D2.GetHW() << " " << D2.GetIO() << " " << D2.GetO() << std::endl;
	return 0;
}
