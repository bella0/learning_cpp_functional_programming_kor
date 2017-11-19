/* loopmeta.cpp */
#include <iostream>

using namespace std;

// �Ű������� ����ϴ� �Լ�
void PrintNumber(int i)
{
	cout << i << "\t";
}

// limit �Ű������� ���޵� ���� ����ϴ� �⺻ ���ø� ����.
// limit�� 0���� Ŭ ���� �����Ѵ�.
template<int limit>
class DoWhile
{
private:
	enum
	{
		run = (limit - 1) != 0
	};

public:
	static inline void func()
	{
		PrintNumber(limit);
		DoWhile<run == true ? (limit - 1) : 0>
			::func();
	}
};

// limit�� 0�� ���� ���ø� Ư��ȭ ����
// limit�� 0�� �Ǹ� �ƹ� ó���� ���� �ʴ´�.
template<>
class DoWhile<0>
{
public:
	static inline void func()
	{
	}
};

auto main() -> int
{
	cout << "[loopmeta.cpp]" << endl;

	// int ���� �ʱ�ȭ
	const int i = 100;

	// DoWhile ���ø�����
	// i �������� �۰� 0 ���� ū ���� ����Ѵ�.
	cout << "List of numbers between 100 and 1";
	cout << endl;
	DoWhile<i>::func();
	cout << endl;

	return 0;
}
