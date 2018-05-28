#include "Administrator.h"
Admin::Admin(string name, string sname, string activity)
{
	this->name = name;
	this->sname = sname;
	this->activity = activity;
}

void Admin::print()
{
	cout << "\t" << this->name << "\t" << this->sname << "\t" << this->activity << endl;
}

istream & operator >> (istream & is, Admin & obj)
{
	is >> obj.name >> obj.sname >> obj.activity;
	return is;
}

ostream & operator<<(ostream & os, Admin obj)
{
	os << "\t" << obj.name << "\t" << obj.sname << "\t" << obj.activity;

	return os;
}