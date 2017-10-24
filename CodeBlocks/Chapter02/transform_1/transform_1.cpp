/* transform_1.cpp */
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

auto main() -> int
{
	cout << "[transform_1.cpp]" << endl;

	// �� ���� ������ ���Ϳ� �߰��Ѵ�.
	vector<int> v1;
	for (int i = 0; i < 5; ++i)
		v1.push_back(i);

	// �� �ٸ� ���� v2�� �����Ѵ�.
	vector<int> v2;

	// v2�� ũ�⸦ v1�� �����ϰ� �����Ѵ�.
	v2.resize(v1.size());

	// ���� ���� �� ���Ҹ� �����Ѵ�.
	transform(
		begin(v1),
		end(v1),
		begin(v2),
		[](int i) {
		return i * i; });

	// ���� v1�� ����Ѵ�.
	std::cout << "v1 contains:";
	for (auto v : v1)
		std::cout << " " << v;
	std::cout << endl;

	// ���� v2�� ����Ѵ�.
	std::cout << "v2 contains:";
	for (auto v : v2)
		std::cout << " " << v;
	std::cout << endl;

	return 0;
}
