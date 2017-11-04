/* macroswap.cpp */
#include <iostream>

using namespace std;

// ���� �ٷ� �̷���� SWAP ��ũ�� ����
#define SWAP(a,b) { \
	 (a) ^= (b); \
	 (b) ^= (a); \
	 (a) ^= (b); \
 }

auto main() -> int
{
	cout << "[macroswap.cpp]" << endl;

	// �� ���� int ���� �ʱ�ȭ
	int x = 10;
	int y = 20;

	// ��ȯ �� ���� �� ���
	cout << "before swapping" << endl;
	cout << "x = " << x << ", y = " << y;
	cout << endl << endl;

	// SWAP ��ũ�� ���
	SWAP(x, y);

	// ��ȯ �� ���� �� ���
	cout << "after swapping" << endl;
	cout << "x = " << x << ", y = " << y;
	cout << endl;

	return 0;
}
