/* mutable_3.cpp */
#include <iostream>
#include "../mutableemployee/mutableemployee.h"

using namespace std;

auto main() -> int
{
	cout << "[mutable_3.cpp]" << endl;

	// �ʿ��� ������ �ʱ�ȭ�Ѵ�.
	string first = "Frankie";
	string last = "Kaur";
	double d = 1500.0;

	// MutableEmployee �ν��Ͻ��� �����Ѵ�.
	MutableEmployee me(0, first, last, d);

	// �ʱⰪ�� ����Ѵ�.
	cout << "Content of MutableEmployee instance" << endl;
	cout << "ID : " << me.Id() << endl;
	cout << "Name : " << me.FirstName();
	cout << " " << me.LastName() << endl;
	cout << "Salary : " << me.Salary() << endl << endl;

	// MutableEmployee�� �� ��� ������ �����Ѵ�.
	me.SetId(1);
	me.SetFirstName("Alexis");
	me.SetLastName("Andrews");
	me.SetSalary(2100.0);

	// ������ ���� ����Ѵ�.
	cout << "Content of MutableEmployee after mutating" << endl;
	cout << "ID : " << me.Id() << endl;
	cout << "Name : " << me.FirstName();
	cout << " " << me.LastName() << endl;
	cout << "Salary : " << me.Salary() << endl;

	return 0;
}
