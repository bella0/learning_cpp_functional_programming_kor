/* switchmeta.cpp */
#include <iostream>

using namespace std;

// int �Ű������� �������� ����ϴ� �Լ�
int Square(int a)
{
	return a * a;
}

// �⺻ ���ø� ����
template<int val>
class SwitchTemplate
{
public:
	static inline int func()
	{
		return Square(0);
	}
};

// val�� 1�� ���� ���ø� Ư��ȭ ����
template<>
class SwitchTemplate<1>
{
public:
	static inline int func()
	{
		return Square(1);
	}
};

// val�� 2�� ���� ���ø� Ư��ȭ ����
template<>
class SwitchTemplate<2>
{
public:
	static inline int func()
	{
		return Square(2);
	}
};

auto main() -> int
{
	cout << "[switchmeta.cpp]" << endl;

	// const  ���� i ����
	const int i = 2;

	// SwitchTemplate ���ø� ���
	int output = SwitchTemplate<i>::func();

	// ��� ���
	cout << "The result is " << output << endl;

	return 0;
}
