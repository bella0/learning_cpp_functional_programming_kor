/* im_pure_function_1.cpp */
#include <iostream>

using namespace std;

// ���� ������ �ʱ�ȭ�Ѵ�.
float phi = 3.14f;

// ���� ������ ����Ѵ�.
// ���� ���� phi�� �����Ѵ�.
float circleArea(float r)
{
	return phi * r * r;
}

auto main() -> int
{
	cout << "[im_pure_function_1.cpp]" << endl;

	// ���� ���� f�� �ʱ�ȭ�Ѵ�.
	float f = 2.5f;

	// f�� ���ڷ� �����Ͽ� circleArea() �Լ���
	// �ټ� �� ȣ���Ѵ�.
	for (int i = 1; i <= 5; ++i)
	{
		cout << "Invocation " << i << " -> ";
		cout << "Result of circleArea(" << f << ") = ";
		cout << circleArea(f) << endl;
	}

	return 0;
}
