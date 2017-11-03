/* prime.cpp */
#include <iostream>
#include <cmath>

using namespace std;

bool PrimeCheck(int i)
{
	// 2�� ������ ��� ¦���� �Ҽ��� �ƴϴ�.
	if ((i % 2) == 0)
	{
		return i == 2;
	}

	// i�� �������� ���Ѵ�.
	int sqr = sqrt(i);

	// 9���� ���� �� ��, �Ҽ��� Ȧ���̸�,
	// 9�̻��� �� ��, �Ҽ��� �������� ������ Ȧ����.
	for (int t = 3; t <= sqr; t += 2)
	{
		if (i % t == 0)
		{
			return false;
		}
	}

	// 1�� �Ҽ��� �ƴϴ�.
	return i != 1;
}

auto main() -> int
{
	cout << "[delaying.cpp]" << endl;

	// ī��Ʈ ���� �ʱ�ȭ
	int n = 0;

	// 100���� �Ҽ� ���
	cout << "List of the first 100 prime numbers:" << endl;
	for (int i = 0; ; ++i)
	{
		if (PrimeCheck(i))
		{
			cout << i << "\t";

			if (++n == 100)
				return 0;
		}
	}

	return 0;
}


