/* lambda_initialization_captures.cpp */
#include <iostream>

using namespace std;

auto main() -> int
{
	cout << "[lambda_initialization_captures.cpp]" << endl;

	// ���� �ʱ�ȭ
	int a = 5;
	cout << "Initial a = " << a << endl;

	// a�� ����ؼ� ���ٿ��� ����ϴ� ���� x�� ���� �ʱ�ȭ �Ѵ�.
	auto myLambda = [&x = a]() { x += 2; };

	// ���ٸ� �����Ѵ�.
	myLambda();

	// ���� ���� ����Ѵ�.
	cout << "New a = " << a << endl;

	return 0;
}
