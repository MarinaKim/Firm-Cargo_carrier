#pragma once
#include"Library.h"
#include"Date.h"

class Employee {
protected:
	string name;
	string sname;
	Date birthDate;
public:
	Employee() = default;
	Employee(string name, string sname, Date birthDate) {
		this->name = name;
		this->sname = sname;
		this->birthDate = birthDate;
	}
	friend istream& operator >> (istream& is, Employee& obj) {
		is >> obj.name >> obj.sname >> obj.birthDate;
		return is;
	}
	friend ostream& operator<<(ostream& os, Employee obj) {
		os << setw(15) << obj.name << setw(15) << obj.sname << setw(15) << obj.birthDate << endl;
		return os;
	 }
};