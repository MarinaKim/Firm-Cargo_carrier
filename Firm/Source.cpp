#include"Employee.h"
#include"Administrator.h"
#include "Manager.h"
#include"Programmer.h"

int main() {

	int n;
	cout << "Enter the task num:";
	cin >> n;
	switch (n) {
		/*������� ����������� ����� ��������� ������ � ����������� ������
		���������, ��������������, ������������.*/
	case 1: {
		Employee **em;
		em = new Employee*[3];
		

		Admin ad("Brad", "euhfsdfk", "database");
		em[0] = &ad;
		Programmer pr("Tshskj", "Fhdjdjlk",  "software");
		em[1] = &pr;
		Manager mn("Fsyd", "Cshdklk", "average");
		em[2] = &mn;
		for (int i=0;i<3;i++)
			(*em[i]).print();
	}break;

		/*������� ����������� ������� ����� ����������������
		� ����������� ������ �������, ������, ������������.
		���������� ����� � ��������� ��������� ��� ���������
		������� � ����������.*/
	case 2: {

	}break;
	}
	system("pause");
	return 0;
}