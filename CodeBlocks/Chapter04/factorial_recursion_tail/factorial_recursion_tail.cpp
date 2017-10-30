/* factorial_recursion_tail.cpp */
#include <iostream>

using namespace std;

// ���� ��ͷ� ���丮���� ����ϴ� �Լ�, factorialTail() ����
int factorialTail(int n, int i)
{
	if (n == 0)
		return i;

	return factorialTail(n - 1, n * i);
}

// ���� ��� �Լ�, factorialTail()�� ȣ���ϴ� factorial() ����
int factorial(int n)
{
	return factorialTail(n, 1);
}

auto main() -> int
{
	cout << "[factorial_recursion_tail.cpp]" << endl;

	// factorial() �Լ��� 10ȸ ȣ��.
	for (int i = 1; i < 10; ++i)
	{
		cout << i << "! = " << factorial(i) << endl;
	}

	return 0;
}
