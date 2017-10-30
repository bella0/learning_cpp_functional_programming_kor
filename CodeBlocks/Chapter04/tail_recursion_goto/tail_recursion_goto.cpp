/* tail_recursion_goto.cpp */
#include <iostream>

using namespace std;

void displayNumber(long long n)
{
loop:
	// ���� n ���� ����Ѵ�.
	cout << n << endl;

	// n���� ������Ű��, ��� ȣ���� goto�� ��ü�Ѵ�.
	n++;
	goto loop;
}

auto main() -> int
{
	cout << "[tail_recursion_goto.cpp]" << endl;

	// goto�� ����ϴ� displayNumber() �Լ��� ȣ���Ѵ�.
	displayNumber(0);

	return 0;
}
