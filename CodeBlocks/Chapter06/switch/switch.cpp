/* switch.cpp */
#include <iostream>

using namespace std;

// int �Ű������� �������� ����ϴ� �Լ�
int Square(int a)
{
	return a * a;
}

auto main() -> int
{
	cout << "[switch.cpp]" << endl;

	// 2���� int ������ �ʱ�ȭ
	int input = 2;
	int output = 0;

	// input ���� ���� Square() �Լ� ȣ��
	switch (input)
	{
	case 1:
		output = Square(1);
		break;
	case 2:
		output = Square(2);
		break;
	default:
		output = Square(0);
		break;
	}

	// ��� ���
	cout << "The result is " << output << endl;

	return 0;
}
