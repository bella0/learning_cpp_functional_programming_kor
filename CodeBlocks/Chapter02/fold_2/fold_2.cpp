/* fold_2.cpp */
#include <vector>
#include <numeric>
#include <functional>
#include <iostream>

using namespace std;

// �Լ� ó�� �帧�� �α��ϱ� ���� �Լ�
int addition(const int& x, const int& y)
{
	cout << x << " + " << y << endl;
	return x + y;
}

int main()
{
	cout << "[fold_2.cpp]" << endl;

	// �� ���� ������ ���Ϳ� �߰��Ѵ�.
	vector<int> numbers = { 0, 1, 2, 3, 4 };

	// ������ �� ������ ����
	// ���ʺ���, foldl Ÿ������ ����Ѵ�.
	cout << "foldl" << endl;
	auto foldl = accumulate(
		begin(numbers),
		end(numbers),
		0,
		addition);

	// ������ �� ������ ����
	// �����ʺ���, foldr Ÿ������ ����Ѵ�.
	cout << endl << "foldr" << endl;
	auto foldr = accumulate(
		rbegin(numbers),
		rend(numbers),
		0,
		addition);
	cout << endl;

	// ��� ����� ����Ѵ�.
	cout << "foldl result = " << foldl << endl;
	cout << "foldr result = " << foldr << endl;

	return 0;
}
