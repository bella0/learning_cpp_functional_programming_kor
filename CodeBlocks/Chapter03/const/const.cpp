/* const.cpp */
#include <iostream>

using namespace std;

// const ��� age�� ������ MyAge Ŭ���� ����
class MyAge
{
public:
	const int age;
	MyAge(const int initAge = 20) :
		age(initAge)
	{
	}
};

auto main() -> int
{
	cout << "[const.cpp]" << endl;

	// �� ���� MyAge Ŭ���� �ν��Ͻ� ����
	MyAge AgeNow, AgeLater(8);

	// AgeNow�� age �� ���
	cout << "My current age is ";
	cout << AgeNow.age << endl;

	// AgeLater�� age �� ���
	cout << "My age in eight years later is ";
	cout << AgeLater.age << endl;

	return 0;
}
