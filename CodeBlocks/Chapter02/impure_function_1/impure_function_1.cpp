/* impure_function_1.cpp */
#include <iostream>

using namespace std;

// ���� ������ �ʱ�ȭ�Ѵ�.
int currentState = 0;

//���޵� ���� ���� currentState�� ���Ѵ�.
//(��� ����� ���� ���� currentState�� �����Ѵ�.)
int increment(int i)
{
	currentState += i;
	return currentState;
}

auto main() -> int
{
	cout << "[impure_function_1.cpp]" << endl;

	// ���� ������ �ʱ�ȭ�Ѵ�.
	int fix = 5;

	// fix�� ���ڷ� �����Ͽ� increment() �Լ���
	// �ټ� �� ȣ���Ѵ�.
	for (int i = 1; i <= 5; ++i)
	{
		cout << "Invocation " << i << " -> ";
		cout << "Result of increment(" << fix << ") = ";
		cout << increment(fix) << endl;
	}

	return 0;
}
