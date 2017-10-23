/* first_class_2.cpp */
#include <functional>
#include <iostream>

using namespace std;

// �� ���� int Ÿ�� ������ �޾Ƽ�
// int Ÿ���� ��ȯ�ϴ� FuncType�̶� �̸���
// �Լ� Ÿ���� �����Ѵ�.
typedef function<int(int, int)> FuncType;

int addition(int x, int y)
{
	return x + y;
}

int subtraction(int x, int y)
{
	return x - y;
}

int multiplication(int x, int y)
{
	return x * y;
}

int division(int x, int y)
{
	return x / y;
}

void PassingFunc(FuncType fn, int x, int y)
{
	cout << "Result = " << fn(x, y) << endl;
}

auto main() -> int
{
	cout << "[first_class_2.cpp]" << endl;
	int i, a, b;
	FuncType func;

	// �޴��� ����Ѵ�.
	cout << "Select mode:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "Choice: ";
	cin >> i;

	// ���� �޴��� ����� �� �ְ� �Ѵ�..
	if (i < 1 || i > 4)
	{
		cout << "Please select available mode!";
		return 1;
	}
	// ���� a�� ���� �Է¹޴´�.
	cout << "a -> ";
	cin >> a;

	// a�� ���� ��ȿ���� Ȯ���Ѵ�.
	while (cin.fail())
	{
		// cin�� ���� �÷��׸� �ʱ�ȭ�ؼ� cin�� ��� ������ ���·� �����.
		cin.clear();
		// ������ �Է��� �����Ѵ�.
		cin.ignore(INT_MAX, '\n');
		cout << "You can only enter numbers.\n";
		cout << "Enter a number for variable a -> ";
		cin >> a;
	}

	// ���� b�� ���� �Է¹޴´�.
	cout << "b -> ";
	cin >> b;

	// b�� ���� ��ȿ���� Ȯ���Ѵ�.
	while (cin.fail())
	{
		// cin�� ���� �÷��׸� �ʱ�ȭ�ؼ� cin�� ��� ������ ���·� �����.
		cin.clear();
		// ������ �Է��� �����Ѵ�.
		cin.ignore(INT_MAX, '\n');
		cout << "You can only enter numbers.\n";
		cout << "Enter a number for variable b -> ";
		cin >> b;
	}
	switch (i)
	{
		case 1: func = addition; break;
		case 2: func = subtraction; break;
		case 3: func = multiplication; break;
		case 4: func = division; break;
	}
	cout << "Result = " << func(a, b) << endl;

	return 0;
}
