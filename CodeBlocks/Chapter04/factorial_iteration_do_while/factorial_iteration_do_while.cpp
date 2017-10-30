/* factorial_iteration_do_while.cpp */
#include <iostream>
using namespace std;

// do-while ������ ����ϴ� �Լ� ����
int factorial(int n)
{
	int result = 1;
	int i = 1;

	// do-while ������ ����� �ݺ�
	do
	{
		result *= i;
	} while (++i <= n);

	return result;
}
auto main() -> int
{
	cout << "[factorial_iteration_do_while.cpp]" << endl;

	// factorial() �Լ��� 9�� ȣ��
	for (int i = 1; i < 10; ++i)
	{
		cout << i << "! = " << factorial(i) << endl;
	}

	return 0;
}
