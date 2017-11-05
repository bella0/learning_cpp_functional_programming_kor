/* types.cpp */
#include <iostream>

using namespace std;

// ���ø��� ������ Ÿ�� ����
template<typename T>
struct datatype
{
	using type = T;
};

auto main() -> int
{
	cout << "[types.cpp]" << endl;

	// ������ Ÿ�ӿ� ������ Ÿ���� �����Ѵ�.
	using t = typename datatype<int>::type;

	// ������ ������ Ÿ���� ����Ѵ�.
	t myVar = 123;

	// ������ ������ Ÿ���� ����Ѵ�.
	cout << "myVar = " << myVar;

	return 0;
}
