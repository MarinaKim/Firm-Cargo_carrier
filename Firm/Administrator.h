#pragma once
#include"Date.h"
#include"Employee.h"

class Admin :public Employee {
private:
	string activity;
public:
	Admin() = default;
	Admin(string name, string sname, string activity);

	void print();

	friend istream& operator >> (istream& is, Admin& obj);
	friend ostream& operator<<(ostream& os, Admin obj);
};