/* tuples_1.cpp */
#include <tuple>
#include <iostream>

using namespace std;

auto main() -> int
{
	cout << "[tuples_1.cpp]" << endl;

	// �� ���� Ʃ���� �ʱ�ȭ �Ѵ�.
	tuple<int, const char*, bool> t1(1, "Robert", true);
	auto t2 = make_tuple(2, "Anna", false);

	// t1�� �� ���Ҹ� ����Ѵ�.
	cout << "t1 elements:" << endl;
	cout << get<0>(t1) << endl;
	cout << get<1>(t1) << endl;
	cout << (get<2>(t1) == true ? "Male" : "Female") << endl;
	cout << endl;

	// t2�� �� ���Ҹ� ����Ѵ�.
	cout << "t2 elements:" << endl;
	cout << get<0>(t2) << endl;
	cout << get<1>(t2) << endl;
	cout << (get<2>(t2) == true ? "Male" : "Female") << endl;
	cout << endl;

	return 0;
}
