/* exponential_iteration.cpp */
#include <iostream>

using namespace std;

// �ݺ��� ����ؼ� ���� ���� ����Ѵ�.
int power(int base, int exp)
{
	int result = 1;
	for (int i = 0; i < exp; ++i)
	{
		result *= base;
	}
	return(result);
}

auto main() -> int
{
	cout << "[exponential_iteration.cpp]" << endl;

	// power() �Լ��� ���� �� ȣ���Ѵ�.
	for (int i = 0; i <= 5; ++i)
	{
		cout << "power (2, " << i << ") = ";
		cout << power(2, i) << endl;
	}

	return 0;
}
