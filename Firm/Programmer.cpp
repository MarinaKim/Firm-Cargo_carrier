#include "Programmer.h"

Programmer::Programmer(string name, string sname, string qualification)
{
	this->name = name;
	this->sname = sname;
	
	this->qualification = qualification;
}

void Programmer::print()
{
	cout << "\t" << this->name << "\t" << this->sname << "\t" << this->qualification << endl;
}

istream & operator >> (istream & is, Programmer & obj)
{
	is >> obj.name >> obj.sname >> obj.qualification;
	return is;
}

ostream & operator<<(ostream & os, Programmer obj)
{
	os << "\t" << obj.name << "\t" << obj.sname << "\t" << obj.qualification;

	return os;
}