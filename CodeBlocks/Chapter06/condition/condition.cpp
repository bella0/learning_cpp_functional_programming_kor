/* condition.cpp */
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

auto main() -> int
{
	cout << "[condition.cpp]" << endl;

	// ���ǽ� ����� ����
	// ������ ������ �Լ��� ����
	if (2 + 3 == 5)
		TrueStatement();
	else
		FalseStatement();

	return 0;
}
