/* loop.cpp */
#include <iostream>

using namespace std;

// �Ű������� ����ϴ� �Լ�
void PrintNumber(int i)
{
	cout << i << "\t";
}

auto main() -> int
{
	cout << "[loop.cpp]" << endl;

	// int ���� �ʱ�ȭ
	int i = 100;

	// i �������� �۰� 0 ���� ū ���� ������ ���鼭 ����Ѵ�.
	cout << "List of numbers between 100 and 1";
	cout << endl;
	do
	{
		PrintNumber(i);
	} while (--i > 0);
	cout << endl;

	return 0;
}
