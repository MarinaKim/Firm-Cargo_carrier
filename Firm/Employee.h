#pragma once
#include"Library.h"
#include"Date.h"

class Employee {
protected:
	string name;
	string sname;
	
public:
	Employee() = default;
	Employee(string name, string sname)
	{
		this->name = name;
		this->sname = sname;
			}

	virtual void print() = 0;
};