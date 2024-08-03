#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct SalesData {
	std::string BookNo;
	unsigned int UnitsSold = 0;
	double Revenue = 0.0;
};

#endif
