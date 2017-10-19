/* vector.cpp */
#include <vector>
#include <iostream>

auto main() -> int
{
	std::cout << "[vector.cpp]" << std::endl;

	// 3���� ������ vector �ʱ�ȭ
	std::vector<int> vect = { 0, 1, 2 };

	// vector�� �� ��Ҹ� ����Ѵ�.
	std::cout << "Original Data : ";
	for (auto v : vect) std::cout << v << " ";
	std::cout << std::endl;

	// 2���� �����͸� �߰��Ѵ�.
	vect.push_back(3);
	vect.push_back(4);

	// ������ vector�� �� ��Ҹ� ����Ѵ�.
	std::cout << "New Data Added : ";
	for (auto v : vect) std::cout << v << " ";
	std::cout << std::endl;

	// vector�� �� ��°�� �� ��° ����� ���� �����Ѵ�.
	vect.at(2) = 5;
	vect.at(4) = 6;

	// ������ vector�� �� ��Ҹ� ����Ѵ�.
	std::cout << "Manipulate Data: ";
	for (auto v : vect) std::cout << v << " ";
	std::cout << std::endl;

	return 0;
}
