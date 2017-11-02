/* strict.cpp */
#include <iostream>

using namespace std;

int OuterFormula(int x, int yz)
{
	// �α� �������� �ֿܼ� ����Ѵ�.
	cout << "Calculate " << x << " + ";
	cout << "InnerFormula(" << yz << ")";
	cout << endl;

	// ��� ����� ��ȯ�Ѵ�.
	return x + yz;
}

int InnerFormula(int y, int z)
{
	// �α� �������� �ֿܼ� ����Ѵ�.
	cout << "Calculate " << y << " * ";
	cout << z << endl;

	// ��� ����� ��ȯ�Ѵ�.
	return y * z;
}

auto main() -> int
{
	cout << "[strict.cpp]" << endl;

	// �� ���� int ������ �ʱ�ȭ�Ѵ�.
	int x = 4;
	int y = 3;
	int z = 2;

	// ǥ���� ���
	cout << "Calculate " << x << " + ";
	cout << "(" << y << " * " << z << ")";
	cout << endl;
	int result = OuterFormula(x, InnerFormula(y, z));

	// �α� �������� �ֿܼ� ����Ѵ�.
	cout << x << " + ";
	cout << "(" << y << " * " << z << ")";
	cout << " = " << result << endl;

	return 0;
}
