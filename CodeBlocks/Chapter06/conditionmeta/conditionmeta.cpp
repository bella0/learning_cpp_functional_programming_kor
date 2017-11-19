/* conditionmeta.cpp */
#include <iostream>

using namespace std;

// ���ǽ��� TRUE �� ��, ����Ǵ� �Լ�
void TrueStatement()
{
	cout << "True Statement is run." << endl;
}

// ���ǽ��� FALSE �� ��, ����Ǵ� �Լ�
void FalseStatement()
{
	cout << "False Statement is run." << endl;
}

// IfElse �⺻ ���ø� ����
template<bool predicate>
class IfElse
{
};

// predicate�� true�� ����
// ���ø� Ư��ȭ
template<>
class IfElse<true>
{
public:
	static inline void func()
	{
		TrueStatement();
	}
};

// predicate�� false�� ����
// ���ø� Ư��ȭ
template<>
class IfElse<false>
{
public:
	static inline void func()
	{
		FalseStatement();
	}
};

auto main() -> int
{
	cout << "[conditionmeta.cpp]" << endl;

	// IfElse ���ø� ���
	IfElse<(2 + 3 == 5)>::func();

	return 0;
}
