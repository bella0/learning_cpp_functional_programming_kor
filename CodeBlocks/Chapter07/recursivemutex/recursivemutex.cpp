/* recursivemutex.cpp */
#include <thread>
#include <mutex>
#include <iostream>

using namespace std;

struct Math
{
	recursive_mutex mtx;
	int m_content;
	Math() : m_content(1)
	{
	}

	// lock_guard�� ��� ó���� �Ѵ�.
	// �̹����� recursive_mutex�� ����Ѵ�.
	void Multiplexer(int i)
	{
		lock_guard<recursive_mutex> lock(mtx);
		m_content *= i;
		cout << "Multiplexer() is called. m_content = ";
		cout << m_content << endl;
	}

	// lock_guard�� ��� ó���� �Ѵ�.
	// �̹����� recursive_mutex�� ����Ѵ�.
	void Divisor(int i)
	{
		lock_guard<recursive_mutex> lock(mtx);
		m_content /= i;
		cout << "Divisor() is called. m_content = ";
		cout << m_content << endl;
	}

	// lock_guard�� ��� ó���� �ϰ�,
	// ���� �� �Լ��� ȣ���Ѵ�.
	void RunAll(int a)
	{
		lock_guard<recursive_mutex> lock(mtx);
		Multiplexer(a);
		Divisor(a);
	}
};

auto main() -> int
{
	cout << "[recursivemutex.cpp]" << endl;

	// Math ����ü�� �ν��Ͻ��� �����
	// RunAll() �Լ��� ȣ���Ѵ�.
	Math math;
	math.RunAll(10);

	return 0;
}
