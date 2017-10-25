/* curry_1.cpp */
#include <functional>
#include <iostream>

using namespace std;

// Ŀ���� �ʿ��� ���� ���ø�
template<typename Func, typename... Args>
auto curry(Func func, Args... args)
{
	return [=](auto... lastParam)
	{
		return func(args..., lastParam...);
	};
}

int areaOfRectangle(int length, int width)
{
	return length * width;
}

auto main() -> int
{
	cout << "[curry_1.cpp]" << endl;

	// areaOfRectangle() �Լ��� Ŀ���Ͽ� length5 ����.
	auto length5 = curry(areaOfRectangle, 5);

	// length5 ȣ��
	cout << "Curried with spesific length = 5" << endl;
	for (int i = 0; i <= 5; ++i)
	{
		cout << "length5(" << i << ") = ";
		cout << length5(i) << endl;
	}

	return 0;
}
