/* mutable_2a.cpp */
#include <iostream>

using namespace std;

class Name
{
public:
	string str;
};

void Modify(Name &name)
{
	name.str = "Alexis Andrews";
}

auto main() -> int
{
	cout << "[mutable_2a.cpp]" << endl;

	// string ������ �ʱ�ȭ�Ѵ�.
	Name n = { "Frankie Kaur" };
	cout << "Initial name = " << n.str;
	cout << endl;

	// n�� �����ϱ� ���ؼ� Modify() �Լ��� ȣ���Ѵ�.
	// Modify() �Լ��� string�� ����(reference)�� �μ��� �����Ƿ�
	// �Լ� ȣ�� �Ŀ� n ���� ���Ѵ�.
	Modify(n);

	// n�� ����Ѵ�.
	cout << "After manipulating = " << n.str;
	cout << endl;

	return 0;
}
