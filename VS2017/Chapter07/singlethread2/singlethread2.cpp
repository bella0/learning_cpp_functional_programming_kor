// singlethread2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


/* singlethread2.cpp */
#include <thread>
#include <chrono>
#include <iostream>

using namespace std;

void threadProc()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "thread: current i = ";
		cout << i << endl;
	}
}

auto main() -> int
{
	cout << "[singlethread2.cpp]" << endl;
	
	thread thread1(threadProc);
	
	for (int i = 0; i < 5; i++)
	{
		cout << "main : current i = " << i << endl;
		this_thread::sleep_for(
			chrono::milliseconds(5));
	}

	thread1.join();

	return 0;
}

