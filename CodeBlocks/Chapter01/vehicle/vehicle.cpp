/* vehicle.cpp */
#include "vehicle.h"

using namespace std;

// �⺻ ������
Vehicle::Vehicle() : m_totalOfWheel(0)
{
}

// ����� ���� ������
Vehicle::Vehicle(const string &type, int wheel) :
	m_vehicleType(type),
	m_totalOfWheel(wheel)
{
}

// �Ҹ���
Vehicle::~Vehicle()
{
}
