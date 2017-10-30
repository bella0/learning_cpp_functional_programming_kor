/* factorial_iteration_for.cpp */
#include <iostream>

using namespace std;

// for ������ ����ϴ� �Լ� ����
int factorial(int n)
{
	int result = 1;

	// for ������ ����� �ݺ�
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}
	return result;
}

auto main() -> int
{
	cout << "[factorial_iteration_for.cpp]" << endl;

	// factorial() �Լ��� 9�� ȣ��
	for (int i = 1; i < 10; ++i)
	{
		cout << i << "! = " << factorial(i) << endl;
	}
	return 0;
}
