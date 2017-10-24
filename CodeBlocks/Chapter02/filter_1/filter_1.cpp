/* filter_1.cpp */
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

auto main() -> int
{
	cout << "[filter_1.cpp]" << endl;

	// �� ���� ������ ���Ϳ� �߰��Ѵ�.
	vector<int> numbers;
	for (int i = 0; i < 20; ++i)
		numbers.push_back(i);

	// ���� numbers�� ����Ѵ�.
	cout << "The original numbers: " << endl;
	copy(
		begin(numbers),
		end(numbers),
		ostream_iterator<int>(cout, " "));
	cout << endl;

	// int�� ���ҷ� ������ ���� primes�� �����Ѵ�.
	vector<int> primes;

	// ���� numbers���� �Ҽ�(prime number)�� ���͸��ؼ�
	// ���� primes�� �߰��Ѵ�.
	copy_if(
		begin(numbers),
		end(numbers),
		back_inserter(primes),
		[](int n) {
		if (n < 2) {
			return (n != 0) ? true : false;
		}
		else {
			for (int j = 2; j < n; ++j) {
				if (n % j == 0) {
					return false;
				}
			}
			return true;
		}});

	// ���� primes�� ����Ѵ�.
	cout << "The primes numbers: " << endl;
	copy(
		begin(primes),
		end(primes),
		ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
