#pragma once
#include"Library.h"

class Date {
	unsigned int dd;
	unsigned int mm;
	unsigned int yy;
public:
	Date() = default;
	Date(int dd, int mm, int yy) {
		this->dd = dd;
		this->mm = mm;
		this->yy = yy;
	}
	friend istream& operator >> (istream& is, Date& obj) {
		char c;
		is >>c>>obj.dd >> c >> obj.mm >> c >> obj.yy;
		return is;
	}
	friend ostream& operator<<(ostream& os, Date obj) {
		os << setw(5) << obj.dd << setw(5) << obj.mm << setw(7) << obj.yy<< endl;
	}
};