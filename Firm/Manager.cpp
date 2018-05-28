#include "Manager.h"

Manager::Manager(string name, string sname, string level)
{
	this->name = name;
	this->sname = sname;
	
	this->level = level;
}

void Manager::print()
{
	cout << "\t" << this->name << "\t" << this->sname << "\t" << this->level << endl;
}

istream & operator >> (istream & is, Manager & obj)
{
	is >> obj.name >> obj.sname >> obj.level;
	return is;
}

ostream & operator<<(ostream & os, Manager obj)
{
	os<< "\t" << obj.name << "\t" << obj.sname << "\t" << obj.level;

	return os;
}
