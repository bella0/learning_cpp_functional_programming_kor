/* fibonacci_iteration.cpp */
#include <iostream>

using namespace std;

// �ݺ��� ����ؼ� �Ǻ���ġ ������
// �����ϴ� �Լ� ����
int fibonacci(int n)
{
	if (n == 0)
		return 0;
	int previous = 0;
	int current = 1;
	for (int i = 1; i < n; ++i)
	{
		int next = previous + current;
		previous = current;
		current = next;
	}
	return current;
}

auto main() -> int
{
	cout << "[fibonacci_iteration.cpp]" << endl;

	// fibonacci() �Լ��� 10�� ȣ��
	for (int i = 0; i < 10; ++i)
	{
		cout << fibonacci(i) << " ";
	}
	cout << endl;

	return 0;
}
