// deadlock.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


/* deadlock.cpp */
#include <thread>
#include <mutex>
#include <iostream>

using namespace std;

struct Math
{
	mutex mtx;
	int m_content;

	Math() : m_content(0)
	{
	}

	// lock_guard로 잠금 처리를 한다. 
	void Multiplexer(int i)
	{
		lock_guard<mutex> lock(mtx);
		m_content *= i;
		cout << "Multiplexer() is called. m_content = ";
		cout << m_content << endl;
	}

	// lock_guard로 잠금 처리를 한다. 
	void Divisor(int i)
	{
		lock_guard<mutex> lock(mtx);
		m_content /= i;
		cout << "Divisor() is called. m_content = ";
		cout << m_content << endl;
	}

	// lock_guard로 잠금 처리를 하고,
	// 위의 두 함수를 호출한다.
	void RunAll(int a)
	{
		lock_guard<mutex> lock(mtx);
		Multiplexer(a);
		Divisor(a);
	}
};

auto main() -> int
{
	cout << "[deadlock.cpp]" << endl;

	// Math 구조체의 인스턴스를 만들고
	// RunAll() 함수를 호출한다.
	Math math;
	math.RunAll(10);

	return 0;
}

