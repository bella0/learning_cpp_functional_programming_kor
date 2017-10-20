/* lambda_expression_generic.cpp */
#include <iostream>

using namespace std;

auto main() -> int
{
	cout << "[lambda_expression_generic.cpp]" << endl;

	// ���� ǥ������ �����.
	auto findMax = [](auto &x, auto &y) {
		return x > y ? x : y; };

	// ���� ���� ������ �ʱ�ȭ�Ѵ�.
	int i1 = 5, i2 = 3;
	float f1 = 2.5f, f2 = 2.05f;

	// int Ÿ������ ���׸� ���� ǥ������ ����Ѵ�.
	cout << "i1 = 5, i2 = 3" << endl;
	cout << "Max: " << findMax(i1, i2) << endl << endl;

	// double Ÿ������ ���׸� ���� ǥ������ ����Ѵ�.
	cout << "f1 = 2.5f, f2 = 2.05f" << endl;
	cout << "Max: " << findMax(f1, f2) << endl << endl;

	return 0;
}
