/* mutable_1.cpp */
#include <iostream>

using namespace std;

auto main() -> int
{
	cout << "[mutable_1.cpp]" << endl;

	// int ���� �ʱ�ȭ
	int mutableVar = 100;
	cout << "Initial mutableVar = " << mutableVar;
	cout << endl;

	// mutableVar ����
	for (int i = 0; i <= 10; ++i)
		mutableVar = mutableVar + i;

	// mutableVar ���
	cout << "After manipulating mutableVar = " << mutableVar;
	cout << endl;

	return 0;
}
