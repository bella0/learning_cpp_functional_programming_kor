/* selectingtype.cpp */
#include <iostream>

using namespace std;

// IfElseDataType ���ø� ����
template<
	bool predicate,
	typename TrueType,
	typename FalseType>
	struct IfElseDataType
{
};

// predicate �Ű������� ���޵� ���� TRUE �� ��,
// �ʿ��� ���ø� ����
template<
	typename TrueType,
	typename FalseType>
	struct IfElseDataType<
	true,
	TrueType,
	FalseType>
{
	typedef TrueType type;
};

// predicate �Ű������� ���޵� ���� FALSE �� ��,
// �ʿ��� ���ø� ����
template<
	typename TrueType,
	typename FalseType>
	struct IfElseDataType<
	false,
	TrueType,
	FalseType>
{
	typedef FalseType type;
};

auto main() -> int
{
	cout << "[selectingtype.cpp]" << endl;

	// SHRT_MAX�� 32767�� define �Ǿ� �ֱ� ������
	// 'SHRT_MAX == 2147483647' ǥ������ FALSE ��.
	// ����, IfElseDataType ���ø��� ���� myVar�� int Ÿ���� �ȴ�.
	IfElseDataType<
		SHRT_MAX == 2147483647,
		short,
		int>::type myVar;

	// myVar�� int Ÿ���� �ִ밪 2147483647�� �����Ѵ�.
	myVar = 2147483647;

	// myVar�� ������ Ÿ���� ����Ѵ�.
	cout << "myVar has type ";
	cout << typeid(myVar).name() << endl;

	return 0;
}
