/* immutable_2.cpp */
#include <iostream>

using namespace std;

void Modify(string name)
{
	name = "Alexis Andrews";
}

auto main() -> int
{
	cout << "[immutable_2.cpp]" << endl;

	// string ������ �ʱ�ȭ�Ѵ�.
	string n = "Frankie Kaur";
	cout << "Initial name = " << n;
	cout << endl;

	// n�� �����ϱ� ���ؼ� Modify() �Լ��� ȣ���Ѵ�.
	// ������, Modify() �Լ��� string ��(value)�� �μ��� �����Ƿ�
	// �Լ� ȣ�� �Ŀ��� n ���� ������ �ʴ´�.
	Modify(n);

	// n�� ����Ѵ�.
	cout << "After manipulating = " << n;
	cout << endl;

	return 0;
}


