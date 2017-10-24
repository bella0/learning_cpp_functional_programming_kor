/* fold_1.cpp */
#include <vector>
#include <numeric>
#include <functional>
#include <iostream>

using namespace std;

auto main() -> int
{
	cout << "[fold_1.cpp]" << endl;

	// �� ���� ������ ���Ϳ� �߰��Ѵ�.
	vector<int> numbers = { 0, 1, 2, 3, 4 };

	// ������ �� ������ ����
	// ���ʺ���, foldl Ÿ������ ����Ѵ�.
	auto foldl = accumulate(
		begin(numbers),
		end(numbers),
		0,
		std::plus<int>());

	// ������ �� ������ ����
	// �����ʺ���, foldr Ÿ������ ����Ѵ�.
	auto foldr = accumulate(
		rbegin(numbers),
		rend(numbers),
		0,
		std::plus<int>());

	// ��� ����� ����Ѵ�.
	cout << "foldl result = " << foldl << endl;
	cout << "foldr result = " << foldr << endl;

	return 0;
}
