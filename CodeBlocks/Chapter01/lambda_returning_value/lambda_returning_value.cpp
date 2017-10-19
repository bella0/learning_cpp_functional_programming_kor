/* lambda_returning_value.cpp */
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

auto main() -> int
{
	cout << "[lambda_returning_value.cpp]" << endl;

	// ���� vect�� ���� �߰�
	vector<int> vect;
	for (int i = 0; i < 10; ++i)
		vect.push_back(i);

	// ���� vect ���� �� ���� ���
	cout << "Original Data:" << endl;
	for_each(
		begin(vect),
		end(vect),
		[](int n) {
		cout << n << " ";
	});
	cout << endl;

	// �� �ٸ� ���� vect2 ����
	vector<int> vect2;

	// vect�� �Ȱ��� ũ��� vect2�� ũ�� ����
	vect2.resize(vect.size());

	// vect�� �� ���Ҹ� �����Ͽ� vect2�� ����
	transform(
		begin(vect),
		end(vect),
		begin(vect2),
		[](int n) {
		return n * n;
	});

	// vect2�� �� ���� ���
	cout << "Squared Data:" << endl;
	for_each(
		begin(vect2),
		end(vect2),
		[](int n) {
		cout << n << " ";
	});
	cout << endl;

	// �� �ٸ� ���� vect3 ����
	vector<double> vect3;

	// vect�� �Ȱ��� ũ��� vect3�� ũ�� ����
	vect3.resize(vect.size());

	// vect2�� �� ������ ��� ���� vect3�� ����
	transform(
		begin(vect2),
		end(vect2),
		begin(vect3),
		[](int n) -> double {
		return n / 2.0;
	});

	// vect3�� �� ���Ҹ� ���
	cout << "Average Data:" << endl;
	for_each(
		begin(vect3),
		end(vect3),
		[](double d) {
		cout << d << " ";
	});
	cout << endl;

	return 0;
}

