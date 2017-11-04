/* macro.cpp */
#include <iostream>

using namespace std;

// Defining macro
#define MAX(a,b) (((a) > (b)) ? (a) : (b))

auto main() -> int
{
	cout << "[macro.cpp]" << endl;

	// �� ���� int ���� �ʱ�ȭ
	int x = 10;
	int y = 20;

	// ��ũ�� MAX�� ����ϰ� �� ����� z�� ����
	int z = MAX(x, y);

	// ��� ���
	cout << "Max number of " << x << " and " << y;
	cout << " is " << z << endl;

	return 0;
}
