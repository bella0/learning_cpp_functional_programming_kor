/* range_based_for_loop.cpp */
#include <iostream>

auto main() -> int
{
	std::cout << "[range_based_for_loop.cpp]" << std::endl;

	// �迭�� �����Ѵ�.
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// ��-��� begin(), end() �Լ��� ����ؼ�
	// �迭 ���� ���Ҹ� ����Ѵ�.
	std::cout << "Displaying array element using range-based for loop";
	std::cout << std::endl;
	for (auto a : arr) std::cout << a << " ";
	std::cout << std::endl;

	return 0;
}
