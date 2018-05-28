#pragma once

#include"Date.h"
#include"Employee.h"

class Programmer :public Employee {
private:
	string qualification;
public:
	Programmer() = default;
	Programmer(string name, string sname, string qualification);

	void print();

	friend istream& operator >> (istream& is, Programmer& obj);
	friend ostream& operator<<(ostream& os, Programmer obj);
};