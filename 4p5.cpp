#include <iostream>

/*
 *
 * 4.5
 *
 *
 */

int main () {

	int res_a = -30 * 3 + 21 / 5;
	int res_b = -30 + 3 * 21 / 5;
	int res_c = 30 / 3 * 21 % 5;
	int res_d = -30 / 3 * 21 % 4;
	int p_res_a = ((-30 * 3) + (21 / 5)); // -86
	int p_res_b = (-30 + ((3 * 21) / 5)); // -18
	int p_res_c = (((30 / 3) * 21) % 5); // 0
	int p_res_d = (((-30 / 3) * 21) % 4); // -2

	std::cout << res_a << "\n"
			  << res_b << "\n"
			  << res_c << "\n"
			  << res_d << "\n" << std::endl;

	std::cout << p_res_a << "\n"
			  << p_res_b << "\n"
			  << p_res_c << "\n"
			  << p_res_d << "\n" << std::endl;

	return 0;
}
