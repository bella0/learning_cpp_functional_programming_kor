/* lambda_capturing_by_value_mutable.cpp */
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

auto main() -> int
{
	cout << "[lambda_capturing_by_value_mutable.cpp]" << endl;

	// �� ���� ������ ���͸� �ʱ�ȭ�Ѵ�.
	vector<int> vect;
	for (int i = 0; i < 10; ++i)
		vect.push_back(i);

	// ������ �� ��Ҹ� ����Ѵ�.
	cout << "Original Data:" << endl;
	for_each(
		begin(vect),
		end(vect),
		[](int n) {
		cout << n << " ";
	});
	cout << endl;

	// �� ���� ������ �ʱ�ȭ�Ѵ�.
	int a = 1;
	int b = 1;

	// �� ������ ĸó������,
	// mutable Ű���� ������ ������ �������� �ʴ´�.
	for_each(
		begin(vect),
		end(vect),
		[=](int& x) mutable {
		const int old = x;
		x *= 2;
		a = b;
		b = old;
	});

	// ������ �� ���Ҹ� ����Ѵ�.
	cout << "Squared Data:" << endl;
	for_each(
		begin(vect),
		end(vect),
		[](int n) {
		cout << n << " ";
	});
	cout << endl << endl;

	// a�� b�� ���� ����Ѵ�.
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}
