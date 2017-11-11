/* Main.cpp - Step02 */
#include <iostream>
#include "Customer.h"

using namespace std;

void RegisterCustomers()
{
	int i = 0;
	bool b = false;

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

	// ���� registeredCustomers�� ��� ���� ����
	Customer::registeredCustomers.clear();

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

		// ������ Customer ��ü�� ���� registeredCustomers�� ����
		Customer::registeredCustomers.push_back(c);
	}
}

auto main() -> int
{
	cout << "[Step02]" << endl;
	cout << "--------" << endl;

	// Customer ��ü�� �����ϰ� ��� ������ ���� ä�� ��,
	// registeredCustomers�� �����Ѵ�.
	RegisterCustomers();

	// Customer ��ü
	Customer customer;

	// ����� ü��� ���� �̸� ����� ���ؼ� �ֿܼ� ���
	cout << "List of active customer names:" << endl;
	vector<string> activeCustomerNames =
		customer.GetActiveCustomerByField("name");
	for (auto &name : activeCustomerNames)
	{
		cout << name << endl;
	}

	return 0;
}
