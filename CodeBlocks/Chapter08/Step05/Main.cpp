/* Main.cpp - Step05 */
#include <iostream>
#include <chrono>
#include "Customer.h"

using namespace std;

vector<Customer> RegisterCustomers()
{
	int i = 0;
	bool b = false;

	vector<Customer> returnValue;

	// �� �̸����� nameList �ʱ�ȭ
	vector<string> nameList =
	{
		"William",
		"Aiden",
		"Rowan",
		"Jamie",
		"Quinn",
		"Haiden",
		"Logan",
		"Emerson",
		"Sherlyn",
		"Molly"
	};

	for (auto name : nameList)
	{
		// Customer ��ü�� �����ϰ�
		// �� ��� ���� ���� ä���.
		Customer c;
		c.id = i++;
		c.name = name;
		c.address = "somewhere";
		c.phoneNumber = "0123";
		c.email = name + "@xyz.com";
		c.isActive = b;

		// NOT ��Ʈ �����ڸ� ����ؼ�
		// false, true�� ������ ���� ������.
		b = !b;

		// ������ Customer ��ü�� ���� returnValue�� ����
		returnValue.push_back(c);
	}

	return returnValue;
}

auto main() -> int
{
	cout << "[Step05]" << endl;
	cout << "--------" << endl;

	// ���α׷� ���� �ð��� ����
	auto start = chrono::high_resolution_clock::now();

	// Customer ��ü
	Customer customer;

	// ����� ü��� �� ���� �����.
	cout << "Total active customers: " << endl;
	cout << customer.CountActiveCustomers(
		RegisterCustomers());
	cout << endl << "--------" << endl;

	// ����� ü��� ���� �̸� ����� ���ؼ� �ֿܼ� ���
	cout << "List of active customer names:" << endl;
	vector<string> activeCustomerNames =
		customer.GetActiveCustomerNames(
			RegisterCustomers());
	for (auto name : activeCustomerNames)
	{
		cout << name << endl;
	}

	// ���α׷� ���� �ð��� ����
	auto finish = chrono::high_resolution_clock::now();

	// ���α׷� ���� �ð� ���
	chrono::duration<double, milli> elapsed = finish - start;

	// ���α׷� ���� �ð� ���
	cout << "--------" << endl;
	cout << "Total consuming time = ";
	cout << elapsed.count() << " milliseconds" << endl;

	return 0;
}
