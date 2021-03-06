// tuples3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


/* tuples_3.cpp */
#include <tuple>
#include <iostream>

using namespace std;

tuple<int, const char*, bool> GetData(int DataId)
{
	if (DataId == 1)
		return std::make_tuple(0, "Chloe", false);
	else if (DataId == 2)
		return std::make_tuple(1, "Bryan", true);
	else
		return std::make_tuple(2, "Zoey", false);
}

auto main() -> int
{
	cout << "[tuples_3.cpp]" << endl;

	auto name = GetData(1);
	cout << "Details of Id 1" << endl;
	cout << "ID = " << get<0>(name) << endl;
	cout << "Name = " << get<1>(name) << endl;
	cout << "Gender = " << (get<2>(name) == true ?
		"Male" : "Female");
	cout << endl << endl;

	int i;
	const char* s;
	bool b;
	tie(i, s, b) = GetData(2);
	cout << "Details of Id 2" << endl;
	cout << "ID = " << i << endl;
	cout << "Name = " << s << endl;
	cout << "Gender = " << (b == true ? "Male" : "Female");
	cout << endl;
	
	return 0;
}

