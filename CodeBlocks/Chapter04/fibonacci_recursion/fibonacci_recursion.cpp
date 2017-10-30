/* fibonacci_recursion.cpp */
#include <iostream>

using namespace std;

// ��͸� ����ؼ� �Ǻ���ġ ������
// �����ϴ� �Լ� ����
int fibonacci(int n)
{
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

auto main() -> int
{
	cout << "[fibonacci_recursion.cpp]" << endl;

	// fibonacci() �Լ��� 10�� ȣ��
	for (int i = 0; i < 10; ++i)
	{
		cout << fibonacci(i) << " ";
	}
	cout << endl;

	return 0;
}
