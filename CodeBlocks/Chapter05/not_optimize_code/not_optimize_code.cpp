/* not_optimize_code.cpp */
#include <iostream>
#include <functional>
#include <chrono>

using namespace std;

template<class T> class Delay
{
private:
	function<T()> m_func;
public:
	Delay(function<T()> func) : m_func(func)
	{
	}

	T Fetch()
	{
		return m_func();
	}
};

// �Ǻ���ġ ������ ����ϴ� �Լ�
int fibonacci(int n)
{
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

auto main() -> int
{
	cout << "[not_optimize_code.cpp]" << endl;

	// ���α׷� ���� �ð� ���
	auto start = chrono::high_resolution_clock::now();

	// �Ǻ���ġ ��� ����� ������ int ���� �ʱ�ȭ
	int fib40Result = 0;

	// fib40 ����
	Delay<int> fib40([]()
	{
		return fibonacci(40);
	});

	for (int i = 1; i <= 5; ++i)
	{
		cout << "Invocation " << i << ". ";

		// ���� �ð� ���
		auto start = chrono::high_resolution_clock::now();

		// fib40 �ν��Ͻ��� Fetch() �Լ� ȣ��
		fib40Result = fib40.Fetch();

		// ���� �ð� ���
		auto finish = chrono::high_resolution_clock::now();

		// ���� �ð� ���
		chrono::duration<double, milli> elapsed = finish - start;

		// ��� ���
		cout << "Result = " << fib40Result << ". ";

		// fib40.Fetch() ���� �ð� ���
		cout << "Consuming time = " << elapsed.count();
		cout << " milliseconds" << endl;
	}

	// ���α׷� ���� �ð� ���
	auto finish = chrono::high_resolution_clock::now();

	// ���α׷� ���� �ð� ���
	chrono::duration<double, milli> elapsed = finish - start;

	// ���α׷� ���� �ð� ���
	cout << "Total consuming time = ";
	cout << elapsed.count() << " milliseconds" << endl;

	return 0;
}


