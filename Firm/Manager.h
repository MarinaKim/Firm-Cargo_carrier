#pragma once
#include"Date.h"
#include"Employee.h"

class Manager:public Employee{
private:
	string level;
public:
	Manager() = default;
	Manager(string name, string sname, string level);

	void print();

	friend istream& operator >> (istream& is, Manager& obj);
	friend ostream& operator<<(ostream& os, Manager obj);
};