/* array.cpp */
#include <array>
#include <iostream>

auto main() -> int
{
	std::cout << "[array.cpp]" << std::endl;

	// 10���� ������ �迭 �ʱ�ȭ
	std::array<int, 10> arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// �迭�� �� ��Ҹ� ����Ѵ�.
	std::cout << "Original Data : ";
	for (auto a : arr) std::cout << a << " ";
	std::cout << std::endl;

	// �迭�� ù ��°�� �� ��° ��ҿ� ���ο� ���� �����Ѵ�.
	arr[1] = 9;
	arr[3] = 7;

	// ������ �迭�� ��Ҹ� ����Ѵ�.
	std::cout << "Manipulated Data: ";
	for (auto a : arr) std::cout << a << " ";
	std::cout << std::endl;

	return 0;
}
