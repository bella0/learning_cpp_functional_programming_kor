// isprimemeta.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


/* isprimemeta.cpp */
#include <iostream>

using namespace std;

// ���޵� �μ��� �Ҽ����� �ƴ��� �Ǵ��ϴ� ���ø� ����
template <
	int lastNumber,
	int secondLastNumber>
	class IsPrime
{
public:
	enum
	{
		primeNumber = (
			(lastNumber % secondLastNumber) &&
			IsPrime<lastNumber, secondLastNumber - 1>
				::primeNumber)
	};
};

// number �Ű������� ���޵� ���ڰ� �Ҽ����� �ƴ���
// Ȯ���ϴ� ���ø� ����
template <int number>
class IsPrime<number, 1>
{
public:
	enum
	{
		primeNumber = 1
	};
};

// ���޵� �μ��� �Ҽ��̸� �ֿܼ� ����ϴ� ���ø� ����
template <int number>
class PrimeNumberPrinter
{
public:
	PrimeNumberPrinter<number - 1> printer;

	enum
	{
		primeNumber = IsPrime<number, number - 1>
			::primeNumber
	};

	void func()
	{
		printer.func();

		if (primeNumber)
		{
			cout << number << "\t";
		}
	}
};

// �Ű������� ���� �μ��� 1�� �������� ��
// �����ϱ� ���� ���ø� ����
template<>
class PrimeNumberPrinter<1>
{
public:
	enum
	{
		primeNumber = 0
	};

	void func()
	{
	}
};

int main()
{
	cout << "[isprimemeta.cpp]" << endl;

	// 1�� 500 ������ �Ҽ� ���
	cout << "Filtering the numbers between 1 and 500 ";
	cout << "for of the prime numbers:" << endl;

	// PrimeNumberPrinter ���ø� ���
	PrimeNumberPrinter<500> printer;

	// ���ø��� func() �Լ� ȣ��
	printer.func();
	cout << endl;

	return 0;
}


