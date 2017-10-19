/* lambda_tiny_func.cpp */
#include <vector>
#include <algorithm>
#include <iostream>
#include "../vehicle/vehicle.h"

using namespace std;

auto main() -> int
{
	cout << "[lambda_tiny_func.cpp]" << endl;

	// ���� ���� Vehicle �ν��Ͻ��� �����ϰ� �ʱ�ȭ�Ѵ�.
	Vehicle car("car", 4);
	Vehicle motorcycle("motorcycle", 2);
	Vehicle bicycle("bicycle", 2);
	Vehicle bus("bus", 6);

	// ������ ����� �� Vehicle �ν��Ͻ��� ���Ϳ� �߰��Ѵ�.
	vector<Vehicle> vehicles = { car, motorcycle, bicycle, bus };

	// ���� ǥ�������� ������ �� ���Ҹ� ����Ѵ�.
	cout << "All vehicles:" << endl;
	for_each(
		begin(vehicles),
		end(vehicles),
		[](const Vehicle &vehicle) {
		cout << vehicle.GetType() << endl;
	});

	return 0;
}

