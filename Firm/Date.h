#pragma once
#include"Library.h"

class Date {
	int dd;
	int mm;
	int yy;
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
		os << "\t" << obj.dd <<"\t" << obj.mm << "\t" << obj.yy;
		return os;
	}
};