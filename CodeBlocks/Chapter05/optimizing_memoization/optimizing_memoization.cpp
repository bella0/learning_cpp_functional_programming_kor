/* optimizing_memoization.cpp */
#include <iostream>
#include <functional>
#include <chrono>

using namespace std;

template<class T> class Memoization
{
private:
	T const & (*m_subRoutine)(Memoization *);
	mutable T m_recordedFunc;
	function<T()> m_func;

	static T const & ForceSubroutine(Memoization * d)
	{
		return d->DoRecording();
	}

	static T const & FetchSubroutine(Memoization * d)
	{
		return d->FetchRecording();
	}

	T const & FetchRecording()
	{
		return m_recordedFunc;
	}

	T const & DoRecording()
	{
		m_recordedFunc = m_func();
		m_subRoutine = &FetchSubroutine;
		return FetchRecording();
	}

public:
	Memoization(function<T()> func) : m_func(func),
		m_subRoutine(&ForceSubroutine),

	m_recordedFunc(T())
	{
	}

	T Fetch()
	{
		return m_subRoutine(this);
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
	Memoization<int> fib40([]()
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
