/* filter_2.cpp */
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

int main()
{
	cout << "[filter_2.cpp]" << endl;

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

	// int�� ���ҷ� ������ ���� nonPrimes�� �����Ѵ�.
	vector<int> nonPrimes;

	// ���� numbers����
	// �Ҽ�(prime number)�� �����ϰ�
	// �Ҽ��� �ƴ� ���Ҹ� ���������� ���͸��ؼ�
	// ���� nonPrimes�� �߰��Ѵ�.
	remove_copy_if(
		numbers.begin(),
		numbers.end(),
		back_inserter(nonPrimes),
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

	// ���� nonPrimes�� ����Ѵ�.
	cout << "The non-primes numbers: " << endl;
	copy(
		begin(nonPrimes),
		end(nonPrimes),
		ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}
