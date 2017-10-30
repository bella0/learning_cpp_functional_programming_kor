/* tail_recursion.cpp */
#include <iostream>

using namespace std;

void displayNumber(long long n)
{
	// ���� n ���� ����Ѵ�.
	cout << n << endl;

	// �Լ� ���������� ��� ȣ���� �����Ѵ�.
	displayNumber(n + 1);
}

auto main() -> int
{
	cout << "[tail_recursion.cpp]" << endl;

	// ���� ��͸� ����ϴ� displayNumber() �Լ��� ȣ���Ѵ�.
	displayNumber(0);
	return 0;
}
