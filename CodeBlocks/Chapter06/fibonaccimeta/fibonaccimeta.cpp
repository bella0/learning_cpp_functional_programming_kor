/* fibonaccimeta.cpp */
#include <iostream>

using namespace std;

// �Ǻ���ġ ������ ����ϴ�
// ���ø� ����
template <int number>
struct Fibonacci
{
	enum
	{
		value =
		Fibonacci<number - 1>::value +
		Fibonacci<number - 2>::value
	};
};

// number �Ű������� 1�� ����
// ���ø� ����
template <>
struct Fibonacci<1>
{
	enum
	{
		value = 1
	};
};

// number �Ű������� 0�� ����
// ���ø� ����
template <>
struct Fibonacci<0>
{
	enum
	{
		value = 0
	};
};

auto main() -> int
{
	cout << "[fibonaccimeta.cpp]" << endl;

	// ������ Ÿ�� ��� ���
	cout << "Getting compile-time constant:";
	cout << endl;
	cout << "Fibonacci(25) = ";
	cout << Fibonacci<25>::value;
	cout << endl;

	return 0;
}

